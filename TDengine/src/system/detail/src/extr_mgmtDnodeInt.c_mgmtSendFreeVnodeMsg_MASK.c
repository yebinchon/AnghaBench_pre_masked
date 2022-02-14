
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfVnodes; scalar_t__ vnodeGid; } ;
typedef TYPE_1__ SVgObj ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(SVgObj *VAR_0) {
  for (int VAR_1 = 0; VAR_1 < VAR_0->numOfVnodes; ++VAR_1) {
    FUNC_0(VAR_0->vnodeGid + VAR_1);
  }

  return 0;
}
