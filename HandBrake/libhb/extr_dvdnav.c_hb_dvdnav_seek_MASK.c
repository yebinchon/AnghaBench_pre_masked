
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {float title_block_count; int stopped; scalar_t__ title; scalar_t__ cell; scalar_t__ chapter; int dvdnav; int list_dvd_chapter; } ;
typedef TYPE_1__ hb_dvdnav_t ;
struct TYPE_7__ {TYPE_1__ dvdnav; } ;
typedef TYPE_2__ hb_dvd_t ;
struct TYPE_8__ {scalar_t__ block_end; scalar_t__ block_start; scalar_t__ pgcn; int pgn; } ;
typedef TYPE_3__ hb_dvd_chapter_t ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int*,int*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (int ,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int FUNC_12( hb_dvd_t * VAR_4, float VAR_5 )
{
    hb_dvdnav_t * VAR_6 = &(VAR_4->dvdnav);
    uint64_t VAR_7 = VAR_5 * VAR_6->title_block_count;
    int VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11[VAR_2];
    int VAR_12 = 0, VAR_13;

    if (VAR_6->stopped)
    {
        return 0;
    }




    uint64_t VAR_14 = 0;
    uint64_t VAR_15 = 0;
    hb_dvd_chapter_t *VAR_16 = FUNC_10(VAR_6->list_dvd_chapter, 0 );
    for ( VAR_13 = 0; VAR_13 < FUNC_9( VAR_6->list_dvd_chapter ); ++VAR_13 )
    {
        hb_dvd_chapter_t *VAR_17 = FUNC_10( VAR_6->list_dvd_chapter, VAR_13 );
        uint64_t VAR_18 = VAR_17->block_end - VAR_17->block_start + 1;

        if ( VAR_17->pgcn != VAR_16->pgcn )
        {


            VAR_14 = VAR_15;
            VAR_16 = VAR_17;
        }
        if ( VAR_15 <= VAR_7 && VAR_7 < VAR_15 + VAR_18 )
        {


            int32_t VAR_19, VAR_20, VAR_21;
            if (FUNC_0( VAR_6->dvdnav, &VAR_19, &VAR_20, &VAR_21 ) != VAR_1)
                FUNC_11("dvdnav cur pgcn err: %s", FUNC_1(VAR_6->dvdnav));




            if ( VAR_6->title != VAR_19 )
                FUNC_4( VAR_6->dvdnav );

            if ( VAR_6->title != VAR_19 || VAR_17->pgcn != VAR_20 )
            {

                if (FUNC_3(VAR_6->dvdnav, VAR_6->title, VAR_17->pgcn, VAR_17->pgn) != VAR_1)
                    FUNC_11("dvdnav prog play err: %s", FUNC_1(VAR_6->dvdnav));
            }

            VAR_7 -= VAR_14;
            break;
        }
        VAR_15 += VAR_18;
    }





    for (VAR_13 = 0; VAR_13 < 100 && !VAR_12; VAR_13++)
    {
        VAR_8 = FUNC_2( VAR_6->dvdnav, VAR_11, &VAR_9, &VAR_10 );
        if ( VAR_8 == VAR_0 )
        {
            FUNC_8("dvdnav: Read Error, %s", FUNC_1(VAR_6->dvdnav));
            return 0;
        }
        switch ( VAR_9 )
        {
        case 139:
        case 138:
            VAR_12 = 1;
            break;

        case 131:
            FUNC_6( VAR_6->dvdnav );
            break;

        case 128:
            FUNC_7( VAR_6->dvdnav );
            break;

        case 130:
            FUNC_11("dvdnav: stop encountered during seek");
            VAR_6->stopped = 1;
            return 0;

        case 136:
        case 135:
        case 129:
        case 137:
        case 140:
        case 132:
        case 133:
        case 134:
        default:
            break;
        }
    }

    if (FUNC_5(VAR_6->dvdnav, VAR_7, VAR_3) != VAR_1)
    {
        FUNC_8( "dvd: dvdnav_sector_search failed - %s",
                  FUNC_1(VAR_6->dvdnav) );
        return 0;
    }
    VAR_6->chapter = 0;
    VAR_6->cell = 0;
    return 1;
}
