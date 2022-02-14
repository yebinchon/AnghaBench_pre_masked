
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int xll_size; int xll_sync_offset; scalar_t__ xll_delay_nframes; int xll_sync_present; } ;
struct TYPE_5__ {int exss_size_nbits; int gb; } ;
typedef TYPE_1__ DCAExssParser ;
typedef TYPE_2__ DCAExssAsset ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(DCAExssParser *VAR_0, DCAExssAsset *VAR_1)
{

    VAR_1->xll_size = FUNC_0(&VAR_0->gb, VAR_0->exss_size_nbits) + 1;


    if ((VAR_1->xll_sync_present = FUNC_1(&VAR_0->gb))) {
        int VAR_2;


        FUNC_3(&VAR_0->gb, 4);


        VAR_2 = FUNC_0(&VAR_0->gb, 5) + 1;


        VAR_1->xll_delay_nframes = FUNC_2(&VAR_0->gb, VAR_2);


        VAR_1->xll_sync_offset = FUNC_0(&VAR_0->gb, VAR_0->exss_size_nbits);
    } else {
        VAR_1->xll_delay_nframes = 0;
        VAR_1->xll_sync_offset = 0;
    }
}
