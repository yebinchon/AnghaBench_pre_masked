
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ WepStatus; scalar_t__ AuthMode; size_t DefaultKeyId; } ;
struct TYPE_7__ {TYPE_2__ StaCfg; TYPE_1__** SharedKey; } ;
struct TYPE_5__ {scalar_t__ KeyLen; int Key; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int ,scalar_t__) ;

int
FUNC_3(struct net_device *VAR_11,
     struct iw_request_info *VAR_12,
     struct iw_point *VAR_13, char *VAR_14)
{
 PRTMP_ADAPTER VAR_15 = VAR_11->ml_priv;
 int VAR_16;


 if(!FUNC_1(VAR_15, VAR_10))
 {
    FUNC_0(VAR_9, ("INFO::Network is down!\n"));
     return -VAR_1;
 }

 VAR_16 = VAR_13->flags & VAR_4;
 FUNC_0(VAR_9, ("===>rt_ioctl_giwencode %d\n", VAR_13->flags & VAR_4));

 if (VAR_15->StaCfg.WepStatus == VAR_8)
 {
  VAR_13->length = 0;
  VAR_13->flags = VAR_2;
 }
 else if ((VAR_16 > 0) && (VAR_16 <=4))
 {

  VAR_13->flags = VAR_16 ;
  if (VAR_13->length > VAR_15->SharedKey[VAR_0][VAR_16-1].KeyLen)
   VAR_13->length = VAR_15->SharedKey[VAR_0][VAR_16-1].KeyLen;
  FUNC_2(VAR_14, VAR_15->SharedKey[VAR_0][VAR_16-1].Key, VAR_13->length);


  if (VAR_15->StaCfg.AuthMode == VAR_7)
   VAR_13->flags |= VAR_6;
  else
   VAR_13->flags |= VAR_5;

 }
 else if (VAR_16 == 0)
 {
  if (VAR_15->StaCfg.AuthMode == VAR_7)
   VAR_13->flags |= VAR_6;
  else
   VAR_13->flags |= VAR_5;
  VAR_13->length = VAR_15->SharedKey[VAR_0][VAR_15->StaCfg.DefaultKeyId].KeyLen;
  FUNC_2(VAR_14, VAR_15->SharedKey[VAR_0][VAR_15->StaCfg.DefaultKeyId].Key, VAR_13->length);

  if (VAR_15->StaCfg.AuthMode == VAR_7)
   VAR_13->flags |= VAR_6;
  else
   VAR_13->flags |= VAR_5;
  VAR_13->flags = VAR_15->StaCfg.DefaultKeyId + 1;
  VAR_13->flags |= VAR_3;
 }

 return 0;

}
