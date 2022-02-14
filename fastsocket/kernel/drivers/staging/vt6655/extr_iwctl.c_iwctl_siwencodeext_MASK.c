
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wpa_alg ;
typedef int u8 ;
struct TYPE_7__ {int alg_name; int set_tx; int key_index; size_t key_len; size_t seq_len; int * seq; int * key; } ;
struct TYPE_8__ {TYPE_2__ wpa_key; } ;
struct viawget_wpa_param {TYPE_3__ u; int * addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; } ;
struct TYPE_6__ {int * sa_data; } ;
struct iw_encode_ext {int alg; int ext_flags; size_t key_len; int * key; int * rx_seq; TYPE_1__ addr; } ;
struct TYPE_9__ {int bwextcount; int lock; int bWPASuppWextEnabled; } ;
typedef TYPE_4__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (struct viawget_wpa_param*) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,struct viawget_wpa_param*,int ) ;

int FUNC_10(struct net_device *VAR_13,
             struct iw_request_info *VAR_14,
             struct iw_point *VAR_15,
             char *VAR_16)
{
    PSDevice VAR_17 = (PSDevice)FUNC_5(VAR_13);
 struct iw_encode_ext *VAR_18 = (struct iw_encode_ext*)VAR_16;
    struct viawget_wpa_param *VAR_19=((void*)0);

    wpa_alg VAR_20;
    u8 VAR_21[6];
    int VAR_22, VAR_23=0;
    u8 VAR_24[VAR_6];
    u8 VAR_25[64];
    size_t VAR_26=0,VAR_27=0;


    u8 *VAR_28;
    size_t VAR_29;
    u8 VAR_30[64];
    int VAR_31=0;

FUNC_0("SIOCSIWENCODEEXT...... \n");

VAR_29 = sizeof(*VAR_19);
VAR_28 = FUNC_2((int)VAR_29, (int)VAR_2);
if (VAR_28 == ((void*)0))
    return -VAR_0;
FUNC_4(VAR_28, 0, VAR_29);
VAR_19 = (struct viawget_wpa_param *) VAR_28;


switch (VAR_18->alg) {
    case 130:
                  VAR_20 = VAR_9;
  break;
    case 128:
                  VAR_20 = VAR_11;
  break;
    case 129:
                  VAR_20 = VAR_10;
  break;
    case 131:
                  VAR_20 = VAR_8;
  break;
    default:
  FUNC_0("Unknown alg = %d\n",VAR_18->alg);
  VAR_31= -VAR_0;
  goto error;
  }

 FUNC_3(VAR_21, VAR_18->addr.sa_data, VAR_1);

  VAR_22 = (VAR_15->flags&VAR_5) - 1;

if(VAR_18->ext_flags & VAR_4)
   VAR_23 = 1;

 if(VAR_18->ext_flags & VAR_3) {
   VAR_26=VAR_6;
   FUNC_3(VAR_24, VAR_18->rx_seq, VAR_26);
  }

if(VAR_18->key_len) {
  VAR_27=VAR_18->key_len;
  FUNC_3(VAR_25, &VAR_18->key[0], VAR_27);
 }

FUNC_4(VAR_30, 0, 64);
if ( VAR_27 > 0) {
     FUNC_3(VAR_30, VAR_25, VAR_27);
    if (VAR_27 == 32) {

   FUNC_3(&VAR_30[16], &VAR_25[24], 8);
   FUNC_3(&VAR_30[24], &VAR_25[16], 8);
 }
 }


FUNC_3(VAR_19->addr, VAR_21, VAR_1);
VAR_19->u.wpa_key.alg_name = (int)VAR_20;
VAR_19->u.wpa_key.set_tx = VAR_23;
VAR_19->u.wpa_key.key_index = VAR_22;
VAR_19->u.wpa_key.key_len = VAR_27;
VAR_19->u.wpa_key.key = (u8 *)VAR_30;
VAR_19->u.wpa_key.seq = (u8 *)VAR_24;
VAR_19->u.wpa_key.seq_len = VAR_26;
if(VAR_19->u.wpa_key.alg_name == VAR_9) {
   if(VAR_19->u.wpa_key.key_index ==0) {
     VAR_17->bwextcount++;
    }
   if((VAR_17->bwextcount == 1)&&(VAR_19->u.wpa_key.key_index ==1)) {
 VAR_17->bwextcount++;
    }
   if((VAR_17->bwextcount ==2)&&(VAR_19->u.wpa_key.key_index ==2)) {
 VAR_17->bwextcount++;
 }
   if((VAR_17->bwextcount ==3)&&(VAR_19->u.wpa_key.key_index ==3)) {
 VAR_17->bwextcount++;
        }
   }
if( VAR_17->bwextcount == 4) {
    FUNC_6("SIOCSIWENCODEEXT:Enable WPA WEXT SUPPORT!!!!!\n");
 VAR_17->bwextcount=0;
   VAR_17->bWPASuppWextEnabled = VAR_7;
   }


  FUNC_7(&VAR_17->lock);
 VAR_31 = FUNC_9(VAR_17, VAR_19, VAR_7);
  FUNC_8(&VAR_17->lock);

error:
FUNC_1(VAR_19);
 return VAR_31;
}
