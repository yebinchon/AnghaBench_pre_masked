
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int stopped; int title; int chapter; int cell; int list_dvd_chapter; int dvdnav; int h; } ;
typedef TYPE_2__ hb_dvdnav_t ;
struct TYPE_12__ {TYPE_2__ dvdnav; } ;
typedef TYPE_3__ hb_dvd_t ;
struct TYPE_10__ {int new_chap; } ;
struct TYPE_13__ {TYPE_1__ s; scalar_t__ data; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_14__ {int cellN; } ;
typedef TYPE_5__ dvdnav_cell_change_event_t ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;




 int FUNC_0 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int*,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int*,int*) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__**) ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_12( hb_dvd_t * VAR_5 )
{
    hb_dvdnav_t * VAR_6 = &(VAR_5->dvdnav);
    int VAR_7, VAR_8, VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    hb_buffer_t *VAR_12 = FUNC_8( VAR_2 );

    while ( 1 )
    {
        if (VAR_6->stopped)
        {
            FUNC_7( &VAR_12 );
            return ((void*)0);
        }
        VAR_7 = FUNC_3( VAR_6->dvdnav, VAR_12->data, &VAR_8, &VAR_9 );
        if ( VAR_7 == VAR_0 )
        {
            FUNC_10("dvdnav: Read Error, %s", FUNC_2(VAR_6->dvdnav));
            if (FUNC_4(VAR_6->dvdnav, 1, VAR_4) != VAR_1)
            {
                FUNC_10( "dvd: dvdnav_sector_search failed - %s",
                        FUNC_2(VAR_6->dvdnav) );
                FUNC_7( &VAR_12 );
                FUNC_11(VAR_6->h, VAR_3);
                return ((void*)0);
            }
            VAR_11++;
            if (VAR_11 > 500)
            {
                FUNC_10("dvdnav: Error, too many consecutive read errors");
                FUNC_7( &VAR_12 );
                FUNC_11(VAR_6->h, VAR_3);
                return ((void*)0);
            }
            continue;
        }
        switch ( VAR_8 )
        {
        case 139:


            VAR_12->s.new_chap = VAR_10;
            VAR_10 = 0;
            VAR_11 = 0;
            return VAR_12;

        case 134:



            break;

        case 131:
            FUNC_5( VAR_6->dvdnav );
            break;

        case 128:
            FUNC_6( VAR_6->dvdnav );
            break;

        case 133:




            break;

        case 132:




            break;

        case 140:




            break;

        case 137:




            break;

        case 129:






            {
                int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

                FUNC_1(VAR_6->dvdnav, &VAR_13, &VAR_14, &VAR_15);
                if (VAR_13 != VAR_6->title)
                {

                    FUNC_7( &VAR_12 );
                    FUNC_9(2, "dvdnav: vts change, found next title");
                    return ((void*)0);
                }
            }
            break;

        case 138:






            {
                dvdnav_cell_change_event_t * VAR_16;
                int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20;

                VAR_16 = (dvdnav_cell_change_event_t*)VAR_12->data;

                FUNC_1(VAR_6->dvdnav, &VAR_17, &VAR_18, &VAR_19);
                if (VAR_17 != VAR_6->title)
                {

                    FUNC_7( &VAR_12 );
                    FUNC_9(2, "dvdnav: cell change, found next title");
                    return ((void*)0);
                }
                VAR_20 = FUNC_0(VAR_6->list_dvd_chapter, VAR_18, VAR_19);
                if (VAR_20 != VAR_6->chapter)
                {
                    if (VAR_20 < VAR_6->chapter)
                    {


                        FUNC_7( &VAR_12 );
                        FUNC_9(2, "dvdnav: cell change, previous chapter");
                        return ((void*)0);
                    }
                    VAR_10 = VAR_6->chapter = VAR_20;
                }
                else if ( VAR_16->cellN <= VAR_6->cell )
                {
                    FUNC_7( &VAR_12 );
                    FUNC_9(2, "dvdnav: cell change, previous cell");
                    return ((void*)0);
                }
                VAR_6->cell = VAR_16->cellN;
            }
            break;

        case 135:
            VAR_12->s.new_chap = VAR_10;
            return VAR_12;

            break;

        case 136:





            break;

        case 130:



            VAR_6->stopped = 1;
            FUNC_7( &VAR_12 );
            FUNC_9(2, "dvdnav: stop");
            return ((void*)0);

        default:
            break;
        }
    }
    FUNC_7( &VAR_12 );
    return ((void*)0);
}
