
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; int alg; scalar_t__ key_len; int rx_seq; int key; } ;
struct ieee80211_security {int flags; int enabled; int active_key; scalar_t__* key_sizes; int level; } ;
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
 int FUNC_5 (char*,...) ;
 int * FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int *) ;
 int FUNC_8 (struct net_device*,struct ieee80211_security*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

int FUNC_10(struct ieee80211_device *VAR_17,
                               struct iw_request_info *VAR_18,
                               union iwreq_data *VAR_19, char *VAR_20)
{
 int VAR_21 = 0;
 struct net_device *VAR_22 = VAR_17->dev;
        struct iw_point *VAR_23 = &VAR_19->encoding;
        struct iw_encode_ext *VAR_24 = (struct iw_encode_ext *)VAR_20;
        int VAR_25, VAR_26;
        int VAR_27 = 0;
        const char *VAR_28;
        struct ieee80211_crypto_ops *VAR_29;
        struct ieee80211_crypt_data **VAR_30;

        struct ieee80211_security VAR_31 = {
                .flags = 0,
        };

        VAR_26 = VAR_23->flags & VAR_7;
        if (VAR_26) {
                if (VAR_26 < 1 || VAR_26 > VAR_16)
                        return -VAR_0;
                VAR_26--;
        } else
                VAR_26 = VAR_17->tx_keyidx;

        if (VAR_24->ext_flags & VAR_5) {

                VAR_30 = &VAR_17->crypt[VAR_26];

                VAR_27 = 1;
        } else {


                if (VAR_26 != 0 && VAR_24->alg != 128)
                        return -VAR_0;
                if (VAR_17->iw_mode == VAR_8)

                        VAR_30 = &VAR_17->crypt[VAR_26];

                else
                        return -VAR_0;
        }

 VAR_31.flags |= VAR_10;

        if ((VAR_23->flags & VAR_4) ||
            VAR_24->alg == VAR_3) {
                if (*VAR_30)
                        FUNC_1(VAR_17, VAR_30);

                for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++)

   if (VAR_17->crypt[VAR_25] != ((void*)0))

                                break;

                if (VAR_25 == VAR_16) {
                        VAR_31.enabled = 0;

                        VAR_31.level = VAR_12;
                        VAR_31.flags |= VAR_11;
                }

                goto done;
        }

 VAR_31.enabled = 1;


        switch (VAR_24->alg) {
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
                                   VAR_22->name, VAR_24->alg);
                VAR_21 = -VAR_0;
                goto done;
        }
 FUNC_5("alg name:%s\n",VAR_28);

  VAR_29 = FUNC_2(VAR_28);
        if (VAR_29 == ((void*)0))
                VAR_29 = FUNC_2(VAR_28);
        if (VAR_29 == ((void*)0)) {
                FUNC_0("%s: unknown crypto alg %d\n",
                                   VAR_22->name, VAR_24->alg);
  FUNC_5("========>unknown crypto alg %d\n", VAR_24->alg);
                VAR_21 = -VAR_0;
                goto done;
        }

        if (*VAR_30 == ((void*)0) || (*VAR_30)->ops != VAR_29) {
                struct ieee80211_crypt_data *VAR_32;

                FUNC_1(VAR_17, VAR_30);

                VAR_32 = FUNC_4(sizeof(*VAR_32), VAR_2);
                if (VAR_32 == ((void*)0)) {
                        VAR_21 = -VAR_1;
                        goto done;
                }
                VAR_32->ops = VAR_29;
                if (VAR_32->ops)
                        VAR_32->priv = VAR_32->ops->init(VAR_26);
                if (VAR_32->priv == ((void*)0)) {
                        FUNC_3(VAR_32);
                        VAR_21 = -VAR_0;
                        goto done;
                }
                *VAR_30 = VAR_32;

  }

        if (VAR_24->key_len > 0 && (*VAR_30)->ops->set_key &&
            (*VAR_30)->ops->set_key(VAR_24->key, VAR_24->key_len, VAR_24->rx_seq,
                                   (*VAR_30)->priv) < 0) {
                FUNC_0("%s: key setting failed\n", VAR_22->name);
  FUNC_5("key setting failed\n");
                VAR_21 = -VAR_0;
                goto done;
        }



        if (VAR_24->ext_flags & VAR_6) {
                VAR_17->tx_keyidx = VAR_26;
                VAR_31.active_key = VAR_26;
                VAR_31.flags |= VAR_9;
        }

        if (VAR_24->alg != VAR_3) {

                VAR_31.key_sizes[VAR_26] = VAR_24->key_len;
                VAR_31.flags |= (1 << VAR_26);
                if (VAR_24->alg == 128) {
                        VAR_31.flags |= VAR_11;
                        VAR_31.level = VAR_13;
                } else if (VAR_24->alg == 129) {
                        VAR_31.flags |= VAR_11;
                        VAR_31.level = VAR_14;
                } else if (VAR_24->alg == 130) {
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
            VAR_17->reset_port && VAR_17->reset_port(VAR_22)) {
                FUNC_0("%s: reset_port failed\n", VAR_22->name);
                return -VAR_0;
        }

        return VAR_21;
}
