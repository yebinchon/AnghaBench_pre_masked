
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t cell_cur; int cell_next; TYPE_2__* pgc; } ;
typedef TYPE_3__ hb_dvdread_t ;
struct TYPE_6__ {TYPE_1__* cell_playback; } ;
struct TYPE_5__ {scalar_t__ block_type; scalar_t__ block_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1( hb_dvdread_t * VAR_2 )
{
    int VAR_3 = 0;

    if( VAR_2->pgc->cell_playback[VAR_2->cell_cur].block_type ==
            VAR_1 )
    {

        while( VAR_2->pgc->cell_playback[VAR_2->cell_cur+VAR_3].block_mode !=
                   VAR_0 )
        {
             VAR_3++;
        }
        VAR_2->cell_next = VAR_2->cell_cur + VAR_3 + 1;
        FUNC_0( "dvd: Skipping multi-angle cells %d-%d",
                VAR_2->cell_cur,
                VAR_2->cell_next - 1 );
    }
    else
    {
        VAR_2->cell_next = VAR_2->cell_cur + 1;
    }
}
