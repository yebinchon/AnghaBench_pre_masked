
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int wep_tx_keyidx; } ;
struct enc_key {int len; int key; } ;
struct TYPE_2__ {void* size; void* command; } ;
struct cmd_ds_802_11_set_wep {void* keyindex; int * keymaterial; int * keytype; void* action; TYPE_1__ hdr; } ;
struct assoc_request {int wep_tx_keyidx; struct enc_key* wep_keys; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_802_11_set_wep*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct cmd_ds_802_11_set_wep*,int ,int) ;

int FUNC_7(struct lbs_private *VAR_7, uint16_t VAR_8,
      struct assoc_request *VAR_9)
{
 struct cmd_ds_802_11_set_wep VAR_10;
 int VAR_11 = 0;

 FUNC_3(VAR_6);

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.hdr.command = FUNC_0(VAR_0);
 VAR_10.hdr.size = FUNC_0(sizeof(VAR_10));

 VAR_10.action = FUNC_0(VAR_8);

 if (VAR_8 == VAR_1) {
  int VAR_12;


  VAR_10.keyindex = FUNC_0(VAR_9->wep_tx_keyidx &
        VAR_5);


  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   struct enc_key *VAR_13 = &VAR_9->wep_keys[VAR_12];

   switch (VAR_13->len) {
   case 128:
    VAR_10.keytype[VAR_12] = VAR_4;
    FUNC_5(VAR_10.keymaterial[VAR_12], VAR_13->key, VAR_13->len);
    FUNC_2("SET_WEP: add key %d (40 bit)\n", VAR_12);
    break;
   case 129:
    VAR_10.keytype[VAR_12] = VAR_3;
    FUNC_5(VAR_10.keymaterial[VAR_12], VAR_13->key, VAR_13->len);
    FUNC_2("SET_WEP: add key %d (104 bit)\n", VAR_12);
    break;
   case 0:
    break;
   default:
    FUNC_2("SET_WEP: invalid key %d, length %d\n",
         VAR_12, VAR_13->len);
    VAR_11 = -1;
    goto done;
    break;
   }
  }
 } else if (VAR_8 == VAR_2) {



  VAR_10.keyindex = FUNC_0(VAR_7->wep_tx_keyidx &
        VAR_5);
  FUNC_2("SET_WEP: remove key %d\n", VAR_7->wep_tx_keyidx);
 }

 VAR_11 = FUNC_1(VAR_7, VAR_0, &VAR_10);
done:
 FUNC_4(VAR_6, "ret %d", VAR_11);
 return VAR_11;
}
