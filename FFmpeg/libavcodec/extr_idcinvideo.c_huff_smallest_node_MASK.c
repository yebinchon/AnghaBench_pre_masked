
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; int count; } ;
typedef TYPE_1__ hnode ;



__attribute__((used)) static int FUNC_0(hnode *VAR_0, int VAR_1) {
    int VAR_2;
    int VAR_3, VAR_4;

    VAR_3 = 99999999;
    VAR_4 = -1;
    for(VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        if(VAR_0[VAR_2].used)
            continue;
        if(!VAR_0[VAR_2].count)
            continue;
        if(VAR_0[VAR_2].count < VAR_3) {
            VAR_3 = VAR_0[VAR_2].count;
            VAR_4 = VAR_2;
        }
    }

    if(VAR_4 == -1)
        return -1;
    VAR_0[VAR_4].used = 1;
    return VAR_4;
}
