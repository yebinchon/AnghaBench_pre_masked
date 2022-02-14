
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cell_playback; } ;
typedef TYPE_2__ pgc_t ;
struct TYPE_4__ {scalar_t__ block_type; scalar_t__ block_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1( pgc_t *VAR_2, int VAR_3 )
{
    int VAR_4 = 0;
    int VAR_5;

    if( VAR_2->cell_playback[VAR_3].block_type ==
            VAR_1 )
    {

        while( VAR_2->cell_playback[VAR_3+VAR_4].block_mode !=
                   VAR_0 )
        {
             VAR_4++;
        }
        VAR_5 = VAR_3 + VAR_4 + 1;
        FUNC_0( "dvd: Skipping multi-angle cells %d-%d",
                VAR_3,
                VAR_5 - 1 );
    }
    else
    {
        VAR_5 = VAR_3 + 1;
    }
    return VAR_5;
}
