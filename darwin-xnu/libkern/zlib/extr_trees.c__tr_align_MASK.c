
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long compressed_len; int last_eob_len; int bi_valid; } ;
typedef TYPE_1__ deflate_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;

void
FUNC_3(deflate_state *VAR_3)
{
    FUNC_1(VAR_3, VAR_1<<1, 3);
    FUNC_2(VAR_3, VAR_0, VAR_2);



    FUNC_0(VAR_3);





    if (1 + VAR_3->last_eob_len + 10 - VAR_3->bi_valid < 9) {
        FUNC_1(VAR_3, VAR_1<<1, 3);
        FUNC_2(VAR_3, VAR_0, VAR_2);



        FUNC_0(VAR_3);
    }
    VAR_3->last_eob_len = 7;
}
