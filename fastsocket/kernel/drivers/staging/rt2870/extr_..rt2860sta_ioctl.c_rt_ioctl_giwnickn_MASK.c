
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;
struct TYPE_2__ {int nickname; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    struct iw_point *VAR_2, char *VAR_3)
{
 PRTMP_ADAPTER VAR_4 = VAR_0->ml_priv;

 if (VAR_2->length > FUNC_1(VAR_4->nickname) + 1)
  VAR_2->length = FUNC_1(VAR_4->nickname) + 1;
 if (VAR_2->length > 0) {
  FUNC_0(VAR_3, VAR_4->nickname, VAR_2->length-1);
  VAR_3[VAR_2->length-1] = '\0';
 }
 return 0;
}
