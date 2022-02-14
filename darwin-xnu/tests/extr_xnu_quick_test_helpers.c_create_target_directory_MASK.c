
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int,int ) ;
 int FUNC_1 (size_t,unsigned long,char*,char const*,...) ;
 int VAR_5 ;
 char* VAR_6 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int) ;
 size_t FUNC_8 (char const*) ;

void FUNC_9( const char * VAR_7 )
{
    int VAR_8;
    const char * VAR_9;

    VAR_9 = FUNC_2("TMPDIR");
    if ( VAR_9 == ((void*)0) )
        VAR_9 = "/tmp";

    FUNC_1( FUNC_8( VAR_7 ), (unsigned long)( VAR_1 - 1 ),
        "check target path too long - \"%s\"", VAR_7 );

    for ( ;; ) {
        int VAR_10;
        char VAR_11[64];

        VAR_10 = FUNC_4( );
        FUNC_5( &VAR_11[0], "xnu_quick_test-%d", VAR_10 );
        FUNC_1( FUNC_8( &VAR_11[0] ) + FUNC_8( VAR_7 ) + 2, (unsigned long)VAR_1,
            "check target path plus our test directory name is too long: "
            "target path - \"%s\" test directory name - \"%s\"",
            VAR_7, &VAR_11[0] );


        VAR_6[0] = 0x00;
        FUNC_6( &VAR_6[0], VAR_7 );
        if ( VAR_6[ (FUNC_8(VAR_7) - 1) ] != '/' ) {
            FUNC_6( &VAR_6[0], "/" );
        }
        FUNC_6( &VAR_6[0], &VAR_11[0] );


        VAR_8 = FUNC_3( &VAR_6[0], (VAR_4 | VAR_3 | VAR_2) );
        if ( VAR_8 == 0 ) {
            break;
        }
        VAR_8 = VAR_5;
        if ( VAR_0 != VAR_8 ) {
            FUNC_0( "test directory creation failed - \"%s\" \n"
                "mkdir call failed with error %d - \"%s\"",
                &VAR_6[0], VAR_5, FUNC_7( VAR_8) );
        }
    }

}
