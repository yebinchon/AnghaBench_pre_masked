
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int net_dev; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef int INT ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__inline INT FUNC_3(PRTMP_ADAPTER VAR_0)
{
 if (FUNC_1(VAR_0) == 0)
 {
  if (FUNC_2(VAR_0->net_dev) != 0)
   return -1;
 }
 else
 {
 }
 FUNC_0(VAR_0);
 return 0;
}
