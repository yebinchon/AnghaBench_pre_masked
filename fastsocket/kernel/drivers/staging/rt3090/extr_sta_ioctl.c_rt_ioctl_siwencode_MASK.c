
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; int flags; } ;
struct TYPE_8__ {int DefaultKeyId; void* WepStatus; void* AuthMode; void* OrigWepStatus; void* GroupCipher; void* PairCipher; } ;
struct TYPE_9__ {TYPE_2__ StaCfg; TYPE_1__** SharedKey; } ;
struct TYPE_7__ {scalar_t__ KeyLen; int Key; int CipherAlg; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_18 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_19 ;

int FUNC_6(struct net_device *VAR_20,
     struct iw_request_info *VAR_21,
     struct iw_point *VAR_22, char *VAR_23)
{
 PRTMP_ADAPTER VAR_24 = FUNC_3(VAR_20);


 if(!FUNC_4(VAR_24, VAR_19))
 {
  FUNC_0(VAR_18, ("INFO::Network is down!\n"));
  return -VAR_4;
 }

 if ((VAR_22->length == 0) &&
        (VAR_22->flags & VAR_5))
 {
  VAR_24->StaCfg.PairCipher = VAR_16;
  VAR_24->StaCfg.GroupCipher = VAR_16;
  VAR_24->StaCfg.WepStatus = VAR_16;
        VAR_24->StaCfg.OrigWepStatus = VAR_24->StaCfg.WepStatus;
        VAR_24->StaCfg.AuthMode = VAR_14;
        goto done;
 }
 else if (VAR_22->flags & VAR_10 || VAR_22->flags & VAR_9)
 {

  FUNC_5(VAR_24);
  VAR_24->StaCfg.PairCipher = VAR_17;
  VAR_24->StaCfg.GroupCipher = VAR_17;
  VAR_24->StaCfg.WepStatus = VAR_17;
        VAR_24->StaCfg.OrigWepStatus = VAR_24->StaCfg.WepStatus;
  if (VAR_22->flags & VAR_10)
   VAR_24->StaCfg.AuthMode = VAR_15;
 else
   VAR_24->StaCfg.AuthMode = VAR_14;
 }

    if (VAR_22->length > 0)
 {
  int VAR_25 = (VAR_22->flags & VAR_6) - 1;

  if (VAR_22->length > VAR_11)
  {
   return -VAR_3;
  }

  if ((VAR_25 < 0) || (VAR_25 >= VAR_13))
        {
            FUNC_0(VAR_18 ,("==>rt_ioctl_siwencode::Wrong keyIdx=%d! Using default key instead (%d)\n",
                                        VAR_25, VAR_24->StaCfg.DefaultKeyId));


   VAR_25 = VAR_24->StaCfg.DefaultKeyId;
        }
  else
   VAR_24->StaCfg.DefaultKeyId = VAR_25;

        FUNC_2(VAR_24->SharedKey[VAR_0][VAR_25].Key, 16);

  if (VAR_22->length == VAR_11)
        {
   VAR_24->SharedKey[VAR_0][VAR_25].KeyLen = VAR_11;
            VAR_24->SharedKey[VAR_0][VAR_25].CipherAlg = VAR_1;
  }
  else if (VAR_22->length == VAR_12)
        {
            VAR_24->SharedKey[VAR_0][VAR_25].KeyLen = VAR_12;
            VAR_24->SharedKey[VAR_0][VAR_25].CipherAlg = VAR_2;
  }
  else

   VAR_24->SharedKey[VAR_0][VAR_25].KeyLen = 0;


  if(!(VAR_22->flags & VAR_8))
  {

   FUNC_1(VAR_24->SharedKey[VAR_0][VAR_25].Key, VAR_23, VAR_22->length);
        }
 }
    else
   {

  int VAR_26 = (VAR_22->flags & VAR_6) - 1;
  if ((VAR_26 >= 0) && (VAR_26 < 4))
        {
   VAR_24->StaCfg.DefaultKeyId = VAR_26;
            }
        else

  if (!(VAR_22->flags & VAR_7))
   return -VAR_3;
 }

done:
    FUNC_0(VAR_18 ,("==>rt_ioctl_siwencode::erq->flags=%x\n",VAR_22->flags));
 FUNC_0(VAR_18 ,("==>rt_ioctl_siwencode::AuthMode=%x\n",VAR_24->StaCfg.AuthMode));
 FUNC_0(VAR_18 ,("==>rt_ioctl_siwencode::DefaultKeyId=%x, KeyLen = %d\n",VAR_24->StaCfg.DefaultKeyId , VAR_24->SharedKey[VAR_0][VAR_24->StaCfg.DefaultKeyId].KeyLen));
 FUNC_0(VAR_18 ,("==>rt_ioctl_siwencode::WepStatus=%x\n",VAR_24->StaCfg.WepStatus));
 return 0;
}
