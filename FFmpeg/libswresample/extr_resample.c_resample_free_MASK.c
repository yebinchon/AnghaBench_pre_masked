
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* filter_bank; } ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_1(ResampleContext **VAR_0){
    ResampleContext *VAR_1 = *VAR_0;
    if(!VAR_1)
        return;
    FUNC_0(&VAR_1->filter_bank);
    FUNC_0(VAR_0);
}
