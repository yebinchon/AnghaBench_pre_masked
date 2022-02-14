
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ RSNIE_Len; int * RSN_IE; } ;
struct TYPE_6__ {TYPE_2__ StaCfg; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     union iwreq_data *VAR_4, char *VAR_5)
{
 PRTMP_ADAPTER VAR_6 = VAR_2->ml_priv;

 if (VAR_4->data.length > VAR_1 ||
     (VAR_4->data.length && VAR_5 == ((void*)0)))
  return -VAR_0;

 if (VAR_4->data.length)
 {
  VAR_6->StaCfg.RSNIE_Len = VAR_4->data.length;
  FUNC_0(&VAR_6->StaCfg.RSN_IE[0], VAR_5, VAR_6->StaCfg.RSNIE_Len);
 }
 else
 {
  VAR_6->StaCfg.RSNIE_Len = 0;
  FUNC_1(&VAR_6->StaCfg.RSN_IE[0], VAR_1);
 }

 return 0;
}
