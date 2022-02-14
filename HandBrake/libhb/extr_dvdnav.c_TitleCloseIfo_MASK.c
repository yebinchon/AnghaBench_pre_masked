
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pgn; scalar_t__ pgcn; scalar_t__ vts; scalar_t__ title; int * ifo; int list_dvd_chapter; } ;
typedef TYPE_1__ hb_dvdnav_t ;
typedef int hb_dvd_chapter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(hb_dvdnav_t * VAR_0)
{
    hb_dvd_chapter_t * VAR_1;
    while ((VAR_1 = FUNC_2(VAR_0->list_dvd_chapter, 0)))
    {
        FUNC_3(VAR_0->list_dvd_chapter, VAR_1 );
        FUNC_0(VAR_1);
    }
    FUNC_1(&VAR_0->list_dvd_chapter);

    if (VAR_0->ifo)
    {
        FUNC_4(VAR_0->ifo);
    }
    VAR_0->ifo = ((void*)0);
    VAR_0->title = 0;
    VAR_0->vts = 0;
    VAR_0->pgcn = 0;
    VAR_0->pgn = 0;
}
