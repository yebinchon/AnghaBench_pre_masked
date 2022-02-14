
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_list_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2( hb_list_t * VAR_0, int VAR_1 )
{
    int VAR_2;

    for ( VAR_2 = 0; VAR_2 < FUNC_0( VAR_0 ); VAR_2++ )
    {
        hb_title_t * VAR_3 = FUNC_1( VAR_0, VAR_2 );
        if ( VAR_3->index == VAR_1 )
            return VAR_2;
    }
    return -1;
}
