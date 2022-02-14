
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wpa_alg ;
typedef int u8 ;
struct TYPE_10__ {int alg_name; int set_tx; int key_index; size_t key_len; size_t seq_len; int * seq; int * key; } ;
struct TYPE_9__ {TYPE_3__ wpa_key; } ;
struct viawget_wpa_param {TYPE_2__ u; int * addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; } ;
struct TYPE_8__ {int * sa_data; } ;
struct iw_encode_ext {int alg; int ext_flags; size_t key_len; int * key; int * rx_seq; TYPE_1__ addr; } ;
struct TYPE_11__ {int * abyDesireBSSID; } ;
struct TYPE_12__ {scalar_t__ bwextstep3; int lock; int sKey; scalar_t__ bWPASuppWextEnabled; void* bwextstep2; void* bwextstep1; void* bwextstep0; TYPE_4__ sMgmtObj; } ;
typedef TYPE_4__* PSMgmtObject ;
typedef TYPE_5__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_2 (struct viawget_wpa_param*) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*,struct viawget_wpa_param*,scalar_t__) ;

int FUNC_11(struct net_device *VAR_14,
             struct iw_request_info *VAR_15,
             struct iw_point *VAR_16,
             char *VAR_17)
{
    PSDevice VAR_18 = (PSDevice)FUNC_6(VAR_14);
    PSMgmtObject VAR_19 = &(VAR_18->sMgmtObj);
 struct iw_encode_ext *VAR_20 = (struct iw_encode_ext*)VAR_17;
    struct viawget_wpa_param *VAR_21=((void*)0);

    wpa_alg VAR_22;
    u8 VAR_23[6];
    int VAR_24, VAR_25=0;
    u8 VAR_26[VAR_7];
    u8 VAR_27[64];
    size_t VAR_28=0,VAR_29=0;


    u8 *VAR_30;
    size_t VAR_31;
    u8 VAR_32[64];
    int VAR_33=0;

FUNC_1("SIOCSIWENCODEEXT...... \n");

VAR_31 = sizeof(*VAR_21);
VAR_30 = FUNC_3((int)VAR_31, (int)VAR_3);
if (VAR_30 == ((void*)0))
    return -VAR_0;
FUNC_5(VAR_30, 0, VAR_31);
VAR_21 = (struct viawget_wpa_param *) VAR_30;


switch (VAR_20->alg) {
    case 130:
                  VAR_22 = VAR_10;
  break;
    case 128:
                  VAR_22 = VAR_12;
  break;
    case 129:
                  VAR_22 = VAR_11;
  break;
    case 131:
                  VAR_22 = VAR_9;
  break;
    default:
  FUNC_1("Unknown alg = %d\n",VAR_20->alg);
  VAR_33= -VAR_0;
  goto error;
  }

 FUNC_4(VAR_23, VAR_20->addr.sa_data, VAR_1);

  VAR_24 = (VAR_16->flags&VAR_6) - 1;

if(VAR_20->ext_flags & VAR_5)
   VAR_25 = 1;

 if(VAR_20->ext_flags & VAR_4) {
   VAR_28=VAR_7;
   FUNC_4(VAR_26, VAR_20->rx_seq, VAR_28);
  }

if(VAR_20->key_len) {
  VAR_29=VAR_20->key_len;
  FUNC_4(VAR_27, &VAR_20->key[0], VAR_29);
 }

FUNC_5(VAR_32, 0, 64);
if ( VAR_29 > 0) {
     FUNC_4(VAR_32, VAR_27, VAR_29);
    if (VAR_29 == 32) {

   FUNC_4(&VAR_32[16], &VAR_27[24], 8);
   FUNC_4(&VAR_32[24], &VAR_27[16], 8);
 }
 }


FUNC_4(VAR_21->addr, VAR_23, VAR_1);
VAR_21->u.wpa_key.alg_name = (int)VAR_22;
VAR_21->u.wpa_key.set_tx = VAR_25;
VAR_21->u.wpa_key.key_index = VAR_24;
VAR_21->u.wpa_key.key_len = VAR_29;
VAR_21->u.wpa_key.key = (u8 *)VAR_32;
VAR_21->u.wpa_key.seq = (u8 *)VAR_26;
VAR_21->u.wpa_key.seq_len = VAR_28;
if(VAR_21->u.wpa_key.alg_name == VAR_10) {
   if(VAR_21->u.wpa_key.key_index ==0) {
     VAR_18->bwextstep0 = VAR_8;
    }
   if((VAR_18->bwextstep0 = VAR_8)&&(VAR_21->u.wpa_key.key_index ==1)) {
     VAR_18->bwextstep0 = VAR_2;
     VAR_18->bwextstep1 = VAR_8;
    }
   if((VAR_18->bwextstep1 = VAR_8)&&(VAR_21->u.wpa_key.key_index ==2)) {
     VAR_18->bwextstep1 = VAR_2;
     VAR_18->bwextstep2 = VAR_8;
 }
   if((VAR_18->bwextstep2 = VAR_8)&&(VAR_21->u.wpa_key.key_index ==3)) {
     VAR_18->bwextstep2 = VAR_2;
     VAR_18->bwextstep3 = VAR_8;
        }
   }
if(VAR_18->bwextstep3 == VAR_8) {
    FUNC_1("SIOCSIWENCODEEXT:Enable WPA WEXT SUPPORT!!!!!\n");
     VAR_18->bwextstep0 = VAR_2;
     VAR_18->bwextstep1 = VAR_2;
     VAR_18->bwextstep2 = VAR_2;
     VAR_18->bwextstep3 = VAR_2;
     VAR_18->bWPASuppWextEnabled = VAR_8;
     FUNC_5(VAR_19->abyDesireBSSID, 0xFF,6);
     FUNC_0(VAR_18,&VAR_18->sKey);
   }


  FUNC_8(&VAR_18->lock);
 VAR_33 = FUNC_10(VAR_18, VAR_21, VAR_8);
  FUNC_9(&VAR_18->lock);

error:
FUNC_2(VAR_21);
 return VAR_33;
}
