
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dvdnav; int path; } ;
typedef TYPE_1__ hb_dvdnav_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9( hb_dvdnav_t * VAR_2 )
{
    char * VAR_3 = FUNC_8( VAR_2->path );
    if ( VAR_2->dvdnav )
        FUNC_0( VAR_2->dvdnav );


    if( FUNC_2(&VAR_2->dvdnav, VAR_3) != VAR_0 )
    {



        FUNC_7( "dvd: not a dvd - trying as a stream/file instead" );
        goto fail;
    }

    if (FUNC_4(VAR_2->dvdnav, VAR_1) !=
        VAR_0)
    {
        FUNC_6("Error: dvdnav_set_readahead_flag: %s\n",
                 FUNC_1(VAR_2->dvdnav));
        goto fail;
    }






    if (FUNC_3(VAR_2->dvdnav, 1) != VAR_0)
    {
        FUNC_6("Error: dvdnav_set_PGC_positioning_flag: %s\n",
                 FUNC_1(VAR_2->dvdnav));
        goto fail;
    }

    FUNC_5( VAR_3 );

    return 1;

fail:
    if( VAR_2->dvdnav ) FUNC_0( VAR_2->dvdnav );
    FUNC_5( VAR_3 );
    return 0;
}
