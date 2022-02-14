
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int index; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_11__ {scalar_t__ cell; int chapter; scalar_t__ stopped; int dvdnav; int list_dvd_chapter; } ;
typedef TYPE_2__ hb_dvdnav_t ;
struct TYPE_12__ {TYPE_2__ dvdnav; } ;
typedef TYPE_3__ hb_dvd_t ;
struct TYPE_13__ {int pgn; int pgcn; } ;
typedef TYPE_4__ hb_dvd_chapter_t ;
typedef scalar_t__ dvdnav_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,int ) ;
 TYPE_4__* FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8( hb_dvd_t * VAR_1, hb_title_t *VAR_2, int VAR_3 )
{
    hb_dvdnav_t * VAR_4 = &(VAR_1->dvdnav);
    int VAR_5 = VAR_2->index;
    hb_dvd_chapter_t *VAR_6;
    dvdnav_status_t VAR_7;

    if ( VAR_4->stopped && !FUNC_5(VAR_4) )
    {
        return 0;
    }
    if (!FUNC_0(VAR_4, VAR_5))
    {
        return 0;
    }
    FUNC_4( VAR_4->dvdnav );
    VAR_6 = FUNC_7( VAR_4->list_dvd_chapter, VAR_3 - 1);
    if (VAR_6 != ((void*)0))
        VAR_7 = FUNC_3(VAR_4->dvdnav, VAR_5, VAR_6->pgcn, VAR_6->pgn);
    else
        VAR_7 = FUNC_2(VAR_4->dvdnav, VAR_5, 1);
    if (VAR_7 != VAR_0)
    {
        FUNC_6( "dvd: dvdnav_*_play failed - %s",
                  FUNC_1(VAR_4->dvdnav) );
        return 0;
    }
    VAR_4->stopped = 0;
    VAR_4->chapter = 0;
    VAR_4->cell = 0;
    return 1;
}
