
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bEnableHostapd; } ;
typedef TYPE_1__* PSDevice ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(PSDevice VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 < 0 || VAR_2 > 1)
  return -VAR_0;

 if (VAR_1->bEnableHostapd == VAR_2)
  return 0;

 VAR_1->bEnableHostapd = VAR_2;

 if (VAR_2)
  return FUNC_1(VAR_1, VAR_3);
 else
  return FUNC_0(VAR_1, VAR_3);
}
