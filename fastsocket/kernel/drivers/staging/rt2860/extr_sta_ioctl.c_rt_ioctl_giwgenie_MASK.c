
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ UCHAR ;
struct TYPE_5__ {int RSNIE_Len; scalar_t__ AuthMode; scalar_t__ WpaSupplicantUP; int * RSN_IE; } ;
struct TYPE_6__ {TYPE_2__ StaCfg; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int *,int) ;

int FUNC_1(struct net_device *VAR_7,
          struct iw_request_info *VAR_8,
          union iwreq_data *VAR_9, char *VAR_10)
{
 PRTMP_ADAPTER VAR_11 = VAR_7->ml_priv;

 if ((VAR_11->StaCfg.RSNIE_Len == 0) ||
  (VAR_11->StaCfg.AuthMode < VAR_3))
 {
  VAR_9->data.length = 0;
  return 0;
 }

 if (VAR_11->StaCfg.WpaSupplicantUP == VAR_6)
 {
 if (VAR_9->data.length < VAR_11->StaCfg.RSNIE_Len)
  return -VAR_0;

 VAR_9->data.length = VAR_11->StaCfg.RSNIE_Len;
 FUNC_0(VAR_10, &VAR_11->StaCfg.RSN_IE[0], VAR_11->StaCfg.RSNIE_Len);
 }
 else
 {
  UCHAR VAR_12 = VAR_2;

  if (VAR_9->data.length < (VAR_11->StaCfg.RSNIE_Len + 2))
   return -VAR_0;
  VAR_9->data.length = VAR_11->StaCfg.RSNIE_Len + 2;

  if ((VAR_11->StaCfg.AuthMode == VAR_5) ||
            (VAR_11->StaCfg.AuthMode == VAR_4))
   VAR_12 = VAR_1;

  VAR_10[0] = (char)VAR_12;
  VAR_10[1] = VAR_11->StaCfg.RSNIE_Len;
  FUNC_0(VAR_10+2, &VAR_11->StaCfg.RSN_IE[0], VAR_11->StaCfg.RSNIE_Len);
 }

 return 0;
}
