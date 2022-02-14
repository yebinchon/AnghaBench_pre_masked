
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int npending; int* pending_fds; } ;
typedef TYPE_1__ aeApiState ;



__attribute__((used)) static int FUNC_0(aeApiState *VAR_0, int VAR_1) {
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->npending; VAR_2++) {
        if (VAR_0->pending_fds[VAR_2] == VAR_1)
            return (VAR_2);
    }

    return (-1);
}
