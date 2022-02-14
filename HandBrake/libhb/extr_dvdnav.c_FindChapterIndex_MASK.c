
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_3__ {int pgcn; int pgn; int index; } ;
typedef TYPE_1__ hb_dvd_chapter_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2( hb_list_t * VAR_0, int VAR_1, int VAR_2 )
{
    int VAR_3, VAR_4;
    hb_dvd_chapter_t * VAR_5;

    VAR_3 = FUNC_0( VAR_0 );
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_5 = FUNC_1( VAR_0, VAR_4 );
        if (VAR_5->pgcn == VAR_1 && VAR_5->pgn == VAR_2)
            return VAR_5->index;
    }
    return 0;
}
