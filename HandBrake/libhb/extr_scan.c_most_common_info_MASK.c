
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int info; } ;
typedef TYPE_1__ info_list_t ;
typedef int hb_work_info_t ;



__attribute__((used)) static void FUNC_0( info_list_t *VAR_0, hb_work_info_t *VAR_1 )
{
    int VAR_2, VAR_3 = 0;
    for ( VAR_2 = 1; VAR_0[VAR_2].count; ++VAR_2 )
    {
        if ( VAR_0[VAR_2].count > VAR_0[VAR_3].count )
            VAR_3 = VAR_2;
    }
    *VAR_1 = VAR_0[VAR_3].info;
}
