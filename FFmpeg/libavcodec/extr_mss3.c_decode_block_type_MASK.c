
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t last_type; int * bt_model; } ;
typedef int RangeCoder ;
typedef TYPE_1__ BlockTypeContext ;


 size_t FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(RangeCoder *VAR_0, BlockTypeContext *VAR_1)
{
    VAR_1->last_type = FUNC_0(VAR_0, &VAR_1->bt_model[VAR_1->last_type]);

    return VAR_1->last_type;
}
