
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ duration; int index; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_list_t ;
typedef int hb_dvd_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2( hb_dvd_t * VAR_0, hb_list_t * VAR_1 )
{
    int VAR_2;
    uint64_t VAR_3 = 0;
    int VAR_4 = -1;

    for ( VAR_2 = 0; VAR_2 < FUNC_0( VAR_1 ); VAR_2++ )
    {
        hb_title_t * VAR_5 = FUNC_1( VAR_1, VAR_2 );
        if ( VAR_5->duration > VAR_3 )
        {
            VAR_3 = VAR_5->duration;
            VAR_4 = VAR_5->index;
        }
    }
    return VAR_4;
}
