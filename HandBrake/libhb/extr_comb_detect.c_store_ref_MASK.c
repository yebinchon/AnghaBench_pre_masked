
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** ref_used; int ** ref; } ;
typedef TYPE_1__ hb_filter_private_t ;
typedef int hb_buffer_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int **,int) ;

__attribute__((used)) static void FUNC_2(hb_filter_private_t * VAR_0, hb_buffer_t * VAR_1)
{

    if (!VAR_0->ref_used[0])
    {
        FUNC_0(&VAR_0->ref[0]);
    }
    FUNC_1(&VAR_0->ref[0], &VAR_0->ref[1], sizeof(VAR_0->ref[0]) * 2 );
    FUNC_1(&VAR_0->ref_used[0], &VAR_0->ref_used[1], sizeof(VAR_0->ref_used[0]) * 2 );
    VAR_0->ref[2] = VAR_1;
    VAR_0->ref_used[2] = 0;
}
