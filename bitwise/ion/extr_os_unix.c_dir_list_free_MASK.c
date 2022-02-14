
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid; int error; int handle; } ;
typedef TYPE_1__ DirListIter ;


 int FUNC_0 (int ) ;

void FUNC_1(DirListIter *VAR_0) {
    if (VAR_0->valid) {
        VAR_0->valid = 0;
        VAR_0->error = 0;
        FUNC_0(VAR_0->handle);
    }
}
