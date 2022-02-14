
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int valid; int error; int base; int * handle; } ;
typedef TYPE_1__ DirListIter ;
typedef int DIR ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;

void FUNC_4(DirListIter *VAR_0, const char *VAR_1) {
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
    DIR *VAR_2 = FUNC_2(VAR_1);
    if (!VAR_2) {
        VAR_0->valid = 0;
        VAR_0->error = 1;
        return;
    }
    VAR_0->handle = VAR_2;
    FUNC_3(VAR_0->base, VAR_1);
    VAR_0->valid = 1;
    FUNC_0(VAR_0);
}
