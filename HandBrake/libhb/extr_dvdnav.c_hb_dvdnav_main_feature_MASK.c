
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int duration; int index; int seconds; int minutes; int hours; } ;
typedef TYPE_1__ hb_title_t ;
typedef int hb_list_t ;
struct TYPE_8__ {int dvdnav; } ;
typedef TYPE_2__ hb_dvdnav_t ;
struct TYPE_9__ {TYPE_2__ dvdnav; } ;
typedef TYPE_3__ hb_dvd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static int FUNC_7( hb_dvd_t * VAR_3, hb_list_t * VAR_4 )
{
    hb_dvdnav_t * VAR_5 = &(VAR_3->dvdnav);
    int VAR_6 = -1;
    int VAR_7 = -1;
    int VAR_8 = 0;
    int VAR_9;
    uint64_t VAR_10 = 0;
    uint64_t VAR_11 = 0;
    uint64_t VAR_12 = 0;
    uint64_t VAR_13 = 0;
    int VAR_14 = 0;
    hb_title_t * VAR_15;
    int VAR_16;

    FUNC_2( 2, "dvdnav: Searching menus for main feature" );
    for ( VAR_9 = 0; VAR_9 < FUNC_3( VAR_4 ); VAR_9++ )
    {
        VAR_15 = FUNC_4( VAR_4, VAR_9 );
        if ( VAR_15->duration > VAR_12 )
        {
            VAR_12 = VAR_15->duration;
            VAR_8 = VAR_15->index;
        }
        if ( VAR_15->duration > 90000LL * 60 * 30 )
        {
            VAR_13 += VAR_15->duration;
            VAR_14++;
        }
    }
    if ( VAR_14 )
        VAR_13 /= VAR_14;

    VAR_16 = FUNC_1( VAR_4, VAR_8 );
    VAR_15 = FUNC_4( VAR_4, VAR_16 );
    if ( VAR_15 )
    {
        FUNC_2( 2, "dvdnav: Longest title %d duration %02d:%02d:%02d",
                    VAR_8, VAR_15->hours, VAR_15->minutes,
                    VAR_15->seconds );
    }

    FUNC_0( VAR_5->dvdnav );
    if ( FUNC_5( VAR_5->dvdnav, 2000 ) )
    {
        VAR_6 = FUNC_6( VAR_5, VAR_4, VAR_0, VAR_12 );
        if ( VAR_6 >= 0 )
        {
            VAR_16 = FUNC_1( VAR_4, VAR_6 );
            VAR_15 = FUNC_4( VAR_4, VAR_16 );
            if ( VAR_15 )
            {
                VAR_10 = VAR_15->duration;
                FUNC_2( 2, "dvdnav: Found first-play title %d duration %02d:%02d:%02d",
                            VAR_6, VAR_15->hours, VAR_15->minutes, VAR_15->seconds );
            }
        }
        else
        {
            FUNC_2( 2, "dvdnav: No first-play menu title found" );
        }
    }

    if ( VAR_6 < 0 ||
         (float)VAR_12 * 0.7 > VAR_10)
    {
        VAR_6 = FUNC_6( VAR_5, VAR_4, VAR_1, VAR_12 );
        if ( VAR_6 >= 0 )
        {
            VAR_16 = FUNC_1( VAR_4, VAR_6 );
            VAR_15 = FUNC_4( VAR_4, VAR_16 );
            if ( VAR_15 )
            {
                VAR_10 = VAR_15->duration;
                FUNC_2( 2, "dvdnav: Found root title %d duration %02d:%02d:%02d",
                            VAR_6, VAR_15->hours, VAR_15->minutes, VAR_15->seconds );
            }
        }
        else
        {
            FUNC_2( 2, "dvdnav: No root menu title found" );
        }
    }

    if ( VAR_6 < 0 ||
         (float)VAR_12 * 0.7 > VAR_10)
    {
        VAR_7 = FUNC_6( VAR_5, VAR_4, VAR_2, VAR_12 );
        if ( VAR_7 >= 0 )
        {
            VAR_16 = FUNC_1( VAR_4, VAR_7 );
            VAR_15 = FUNC_4( VAR_4, VAR_16 );
            if ( VAR_15 )
            {
                VAR_11 = VAR_15->duration;
                FUNC_2( 2, "dvdnav: found title %d duration %02d:%02d:%02d",
                            VAR_7, VAR_15->hours, VAR_15->minutes,
                            VAR_15->seconds );
            }
        }
        else
        {
            FUNC_2( 2, "dvdnav: No title menu title found" );
        }
    }

    uint64_t VAR_17;
    int VAR_18;

    if ( VAR_10 > VAR_11 )
    {
        VAR_17 = VAR_10;
        VAR_18 = VAR_6;
    }
    else
    {
        VAR_17 = VAR_11;
        VAR_18 = VAR_7;
    }
    if ((float)VAR_12 * 0.7 > VAR_17 &&
        VAR_17 < 90000LL * 60 * 30 )
    {
        float VAR_19 = (float)VAR_13 / VAR_17;
        if ( VAR_19 > 1 )
            VAR_19 = 1 / VAR_19;
        if ( VAR_14 > 10 && VAR_19 < 0.7 )
        {
            VAR_18 = VAR_8;
            FUNC_2( 2, "dvdnav: Using longest title %d", VAR_18 );
        }
    }
    return VAR_18;
}
