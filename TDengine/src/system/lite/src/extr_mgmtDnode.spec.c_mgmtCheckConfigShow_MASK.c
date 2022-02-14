
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfgType; } ;
typedef TYPE_1__ SGlobalConfig ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(SGlobalConfig *VAR_2) {
  if (VAR_2->cfgType & VAR_0)
    return 0;
  if (VAR_2->cfgType & VAR_1)
    return 0;
  return 1;
}
