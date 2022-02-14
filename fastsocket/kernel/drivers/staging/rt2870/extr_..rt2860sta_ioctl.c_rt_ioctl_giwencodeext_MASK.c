
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int key_len; int key; int alg; } ;
struct TYPE_5__ {int WepStatus; int DefaultKeyId; int * PMK; } ;
struct TYPE_6__ {TYPE_2__ StaCfg; TYPE_1__** SharedKey; } ;
struct TYPE_4__ {int KeyLen; int * Key; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;
typedef int * PCHAR ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct iw_encode_ext*,int ,int) ;

int
FUNC_3(struct net_device *VAR_11,
     struct iw_request_info *VAR_12,
     union iwreq_data *VAR_13, char *VAR_14)
{
 PRTMP_ADAPTER VAR_15 = VAR_11->ml_priv;
 PCHAR VAR_16 = ((void*)0);
 struct iw_point *VAR_17 = &VAR_13->encoding;
 struct iw_encode_ext *VAR_18 = (struct iw_encode_ext *)VAR_14;
 int VAR_19, VAR_20;

 FUNC_0(VAR_10 ,("===> rt_ioctl_giwencodeext\n"));

 VAR_20 = VAR_17->length - sizeof(*VAR_18);
 if (VAR_20 < 0)
  return -VAR_2;

 VAR_19 = VAR_17->flags & VAR_9;
 if (VAR_19)
 {
  if (VAR_19 < 1 || VAR_19 > 4)
   return -VAR_2;
  VAR_19--;

  if ((VAR_15->StaCfg.WepStatus == 131) ||
   (VAR_15->StaCfg.WepStatus == 130))
  {
   if (VAR_19 != VAR_15->StaCfg.DefaultKeyId)
   {
    VAR_18->key_len = 0;
    return 0;
   }
  }
 }
 else
  VAR_19 = VAR_15->StaCfg.DefaultKeyId;

 VAR_17->flags = VAR_19 + 1;
 FUNC_2(VAR_18, 0, sizeof(*VAR_18));

 VAR_18->key_len = 0;
 switch(VAR_15->StaCfg.WepStatus) {
  case 129:
   VAR_18->alg = VAR_4;
   VAR_17->flags |= VAR_7;
   break;
  case 128:
   VAR_18->alg = VAR_6;
   if (VAR_15->SharedKey[VAR_0][VAR_19].KeyLen > VAR_20)
    return -VAR_1;
   else
   {
    VAR_18->key_len = VAR_15->SharedKey[VAR_0][VAR_19].KeyLen;
    VAR_16 = &(VAR_15->SharedKey[VAR_0][VAR_19].Key[0]);
   }
   break;
  case 131:
  case 130:
   if (VAR_15->StaCfg.WepStatus == 131)
    VAR_18->alg = VAR_5;
   else
    VAR_18->alg = VAR_3;

   if (VAR_20 < 32)
    return -VAR_1;
   else
   {
    VAR_18->key_len = 32;
    VAR_16 = &VAR_15->StaCfg.PMK[0];
   }
   break;
  default:
   return -VAR_2;
 }

 if (VAR_18->key_len && VAR_16)
 {
  VAR_17->flags |= VAR_8;
  FUNC_1(VAR_18->key, VAR_16, VAR_18->key_len);
 }

 return 0;
}
