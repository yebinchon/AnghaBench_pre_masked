
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int countdown; scalar_t__ leftover_offset; int leftover; int iv; } ;
typedef TYPE_1__* TCCmacState_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(TCCmacState_t VAR_4)
{

    if (VAR_4 == (TCCmacState_t) 0) {
        return VAR_2;
    }


    FUNC_0(VAR_4->iv, 0, VAR_1);


    FUNC_0(VAR_4->leftover, 0, VAR_1);
    VAR_4->leftover_offset = 0;


    VAR_4->countdown = VAR_0;

    return VAR_3;
}
