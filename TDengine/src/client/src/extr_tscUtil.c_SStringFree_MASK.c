
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ alloc; int z; } ;
typedef TYPE_1__ SString ;


 int FUNC_0 (int ) ;

void FUNC_1(SString* VAR_0) {
  if (VAR_0->alloc > 0) {
    FUNC_0(VAR_0->z);
    VAR_0->alloc = 0;
  }
}
