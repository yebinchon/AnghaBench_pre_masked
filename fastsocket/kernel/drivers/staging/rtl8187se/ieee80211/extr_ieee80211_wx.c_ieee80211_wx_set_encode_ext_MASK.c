
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; int alg; scalar_t__ key_len; int key; int rx_seq; } ;
struct ieee80211_security {int flags; int enabled; int active_key; scalar_t__* key_sizes; int level; int * keys; } ;
struct ieee80211_device {int tx_keyidx; scalar_t__ iw_mode; scalar_t__ (* reset_port ) (struct net_device*) ;scalar_t__ reset_on_keychange; struct net_device* dev; int (* set_security ) (struct net_device*,struct ieee80211_security*) ;struct ieee80211_crypt_data** crypt; } ;
struct ieee80211_crypto_ops {scalar_t__ (* set_key ) (int ,scalar_t__,int ,int *) ;int * (* init ) (int) ;} ;
struct ieee80211_crypt_data {int * priv; struct ieee80211_crypto_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;

 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct ieee80211_device*,struct ieee80211_crypt_data**) ;
 struct ieee80211_crypto_ops* FUNC_2 (char const*) ;
 int FUNC_3 (struct ieee80211_crypt_data*) ;
 struct ieee80211_crypt_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int *) ;
 int FUNC_9 (struct net_device*,struct ieee80211_security*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;

int FUNC_11(struct ieee80211_device *VAR_17,
                               struct iw_request_info *VAR_18,
                               union iwreq_data *VAR_19, char *VAR_20)
{
 struct net_device *VAR_21 = VAR_17->dev;
        struct iw_point *VAR_22 = &VAR_19->encoding;
        struct iw_encode_ext *VAR_23 = (struct iw_encode_ext *)VAR_20;
        int VAR_24, VAR_25, VAR_26 = 0;
        int VAR_27 = 0;
        const char *VAR_28;
        struct ieee80211_crypto_ops *VAR_29;
        struct ieee80211_crypt_data **VAR_30;

        struct ieee80211_security VAR_31 = {
                .flags = 0,
        };

        VAR_25 = VAR_22->flags & VAR_7;
        if (VAR_25) {
                if (VAR_25 < 1 || VAR_25 > VAR_16)
                        return -VAR_0;
                VAR_25--;
        } else
                VAR_25 = VAR_17->tx_keyidx;

        if (VAR_23->ext_flags & VAR_5) {
                VAR_30 = &VAR_17->crypt[VAR_25];
                VAR_27 = 1;
        } else {


                if (VAR_25 != 0 && VAR_23->alg != 128)
                        return -VAR_0;
                if (VAR_17->iw_mode == VAR_8)
                        VAR_30 = &VAR_17->crypt[VAR_25];
                else
                        return -VAR_0;
        }

        VAR_31.flags |= VAR_10;
        if ((VAR_22->flags & VAR_4) ||
            VAR_23->alg == VAR_3) {
                if (*VAR_30)
                        FUNC_1(VAR_17, VAR_30);

                for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++)
                        if (VAR_17->crypt[VAR_24] != ((void*)0))
                                break;

                if (VAR_24 == VAR_16) {
                        VAR_31.enabled = 0;

                        VAR_31.level = VAR_12;
                        VAR_31.flags |= VAR_11;
                }

                goto done;
        }

 VAR_31.enabled = 1;


        switch (VAR_23->alg) {
        case 128:
                VAR_28 = "WEP";
                break;
        case 129:
                VAR_28 = "TKIP";
                break;
        case 130:
                VAR_28 = "CCMP";
                break;
        default:
                FUNC_0("%s: unknown crypto alg %d\n",
                                   VAR_21->name, VAR_23->alg);
                VAR_26 = -VAR_0;
                goto done;
        }


  VAR_29 = FUNC_2(VAR_28);
        if (VAR_29 == ((void*)0))
                VAR_29 = FUNC_2(VAR_28);
        if (VAR_29 == ((void*)0)) {
                FUNC_0("%s: unknown crypto alg %d\n",
                                   VAR_21->name, VAR_23->alg);
  FUNC_6("========>unknown crypto alg %d\n", VAR_23->alg);
                VAR_26 = -VAR_0;
                goto done;
        }

        if (*VAR_30 == ((void*)0) || (*VAR_30)->ops != VAR_29) {
                struct ieee80211_crypt_data *VAR_32;

                FUNC_1(VAR_17, VAR_30);

                VAR_32 = FUNC_4(sizeof(*VAR_32), VAR_2);
                if (VAR_32 == ((void*)0)) {
                        VAR_26 = -VAR_1;
                        goto done;
                }
                VAR_32->ops = VAR_29;
                if (VAR_32->ops)
                        VAR_32->priv = VAR_32->ops->init(VAR_25);
                if (VAR_32->priv == ((void*)0)) {
                        FUNC_3(VAR_32);
                        VAR_26 = -VAR_0;
                        goto done;
                }
                *VAR_30 = VAR_32;

  }

        if (VAR_23->key_len > 0 && (*VAR_30)->ops->set_key &&
            (*VAR_30)->ops->set_key(VAR_23->key, VAR_23->key_len, VAR_23->rx_seq,
                                   (*VAR_30)->priv) < 0) {
                FUNC_0("%s: key setting failed\n", VAR_21->name);
  FUNC_6("key setting failed\n");
                VAR_26 = -VAR_0;
                goto done;
        }



        if (VAR_23->ext_flags & VAR_6) {
                VAR_17->tx_keyidx = VAR_25;
                VAR_31.active_key = VAR_25;
                VAR_31.flags |= VAR_9;
        }

        if (VAR_23->alg != VAR_3) {
                FUNC_5(VAR_31.keys[VAR_25], VAR_23->key, VAR_23->key_len);
                VAR_31.key_sizes[VAR_25] = VAR_23->key_len;
                VAR_31.flags |= (1 << VAR_25);
                if (VAR_23->alg == 128) {

                        VAR_31.flags |= VAR_11;
                        VAR_31.level = VAR_13;
                } else if (VAR_23->alg == 129) {

                        VAR_31.flags |= VAR_11;
                        VAR_31.level = VAR_14;
                } else if (VAR_23->alg == 130) {

                        VAR_31.flags |= VAR_11;
                        VAR_31.level = VAR_15;
                }

                if (VAR_27)
                        VAR_31.flags &= ~VAR_11;
        }

done:
        if (VAR_17->set_security)
                VAR_17->set_security(VAR_17->dev, &VAR_31);

  if (VAR_17->reset_on_keychange &&
            VAR_17->iw_mode != VAR_8 &&
            VAR_17->reset_port && VAR_17->reset_port(VAR_21)) {
                FUNC_0("%s: reset_port failed\n", VAR_21->name);
                return -VAR_0;
        }

        return VAR_26;
}
