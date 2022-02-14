
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,unsigned long,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;

int FUNC_10( char *VAR_11, int VAR_12 ) {
    int VAR_13, VAR_14;
    int VAR_15 = -1;

    for ( VAR_13 = 0; VAR_13 < 1; VAR_13++ ) {
        int VAR_16;
        char *VAR_17;
        char VAR_18[32];

        VAR_16 = FUNC_4( );
        FUNC_5( &VAR_18[0], "%d", VAR_16 );
        FUNC_0((FUNC_8( &VAR_18[0] ) + FUNC_8( VAR_11 ) + 2), (unsigned long)VAR_5,
            "check if path to test file is less than PATH_MAX");


        VAR_17 = FUNC_9( VAR_11, '/' );
        *(VAR_17 + 1) = 0x00;
        FUNC_7( VAR_11, &VAR_18[0] );
        if ( VAR_12 ) {

            VAR_15 = FUNC_3( VAR_11, (VAR_4 | VAR_2 | VAR_3),
                            (VAR_8 | VAR_9 | VAR_6 | VAR_7) );
            FUNC_1((VAR_15 != -1 || VAR_10 == VAR_0), "open file with name %s", VAR_11);

            if( VAR_10 == VAR_0 )
                continue;
        }
        else {

            struct stat VAR_19;
            VAR_14 = FUNC_6( VAR_11, &VAR_19 );
            FUNC_1((VAR_14 == 0 || VAR_10 == VAR_1), "make sure the name is unique");

            if(VAR_10 == VAR_1) break;

            VAR_13--;
            continue;
        }
    }

    if ( VAR_15 != -1 )
        FUNC_2( VAR_15 );

    if(VAR_12 && VAR_15 == -1)
        return 1;

    return 0;
}
