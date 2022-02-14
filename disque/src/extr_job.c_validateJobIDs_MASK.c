
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;

int FUNC_2(client *VAR_2, robj **VAR_3, int VAR_4) {
    int VAR_5;



    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        if (FUNC_1(VAR_2,VAR_3[VAR_5]->ptr,FUNC_0(VAR_3[VAR_5]->ptr))
            == VAR_0) return VAR_0;
    }
    return VAR_1;
}
