
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int info; } ;
typedef TYPE_1__ info_list_t ;
typedef int hb_work_info_t ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1( info_list_t *VAR_0, hb_work_info_t *VAR_1 )
{
    for ( ; VAR_0->count; ++VAR_0 )
    {
        if ( FUNC_0( &VAR_0->info, VAR_1, sizeof(*VAR_1) ) == 0 )
        {

            ++VAR_0->count;
            return;
        }
    }




    VAR_0->count = 1;
    VAR_0->info = *VAR_1;
}
