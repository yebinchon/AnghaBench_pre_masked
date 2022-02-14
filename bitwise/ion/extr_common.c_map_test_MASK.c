
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ Map ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*,void*) ;

void FUNC_3(void) {
    Map VAR_0 = {0};
    enum { N = 1024 };
    for (size_t VAR_1 = 1; VAR_1 < N; VAR_1++) {
        FUNC_2(&VAR_0, (void *)VAR_1, (void *)(VAR_1+1));
    }
    for (size_t VAR_2 = 1; VAR_2 < N; VAR_2++) {
        void *VAR_3 = FUNC_1(&VAR_0, (void *)VAR_2);
        FUNC_0(VAR_3 == (void *)(VAR_2+1));
    }
}
