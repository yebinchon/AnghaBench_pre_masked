
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct dirent {char* d_name; scalar_t__ d_ino; } ;
typedef scalar_t__ ino_t ;
typedef int dots ;
typedef scalar_t__ dev_t ;
typedef int DIR ;


 int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct dirent*) ;
 size_t FUNC_2 (struct dirent*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 char* FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,char*,int) ;
 void* FUNC_8 (char*,char const*,int) ;
 int * FUNC_9 (char const*) ;
 struct dirent* FUNC_10 (int *) ;
 char* FUNC_11 (char*,size_t) ;
 scalar_t__ FUNC_12 (char const*,struct stat*) ;
 int FUNC_13 (char*,char*) ;

char* FUNC_14( char* VAR_1, size_t VAR_2 ) {
    static const char VAR_3[] = "../../../../../../../../../../../../../../../../../../../../../../../        ../../../../../../../../../../../../../../../../../../../../../../../../../../        ../../../../../../../../../../../../../../../../../../../../../../../../../..";


    const char* VAR_4 = &VAR_3[ sizeof( VAR_3 ) ];
    const char* VAR_5 = VAR_3;
    size_t VAR_6 = sizeof( VAR_3 ) - 1;
    dev_t VAR_7, VAR_8;
    ino_t VAR_9, VAR_10;
    char* VAR_11;
    register char* VAR_12;
    struct stat VAR_13;
    size_t VAR_14 = VAR_2;

    if ( VAR_2 == 0 ) {
        if ( VAR_1 != ((void*)0) ) {
            return ((void*)0);
        }

        VAR_14 = VAR_0 + 1;
    }

    if ( VAR_1 != ((void*)0) ) {
        VAR_11 = VAR_1;
    } else {
        VAR_11 = FUNC_5( VAR_14 );

        if ( VAR_11 == ((void*)0) ) {
            return ((void*)0);
        }
    }

    VAR_12 = VAR_11 + VAR_14;
    *--VAR_12 = '\0';

    if ( FUNC_12( ".", &VAR_13 ) < 0 ) {
        goto lose2;
    }

    VAR_8 = VAR_13.st_dev;
    VAR_10 = VAR_13.st_ino;

    if ( FUNC_12( "/", &VAR_13 ) < 0 ) {
        goto lose2;
    }

    VAR_7 = VAR_13.st_dev;
    VAR_9 = VAR_13.st_ino;

    while ( !( VAR_8 == VAR_7 && VAR_10 == VAR_9 ) ) {
        register DIR *VAR_15;
        struct dirent* VAR_16;
        dev_t VAR_17;
        ino_t VAR_18;
        char VAR_19;



        if ( VAR_4 == VAR_5 ) {


            char* VAR_20;

            if ( VAR_5 == VAR_3 ) {
                VAR_20 = FUNC_5( VAR_6 * 2 + 1 );

                if ( VAR_20 == ((void*)0) ) {
                    goto lose;
                }




                FUNC_6( VAR_20, VAR_3, VAR_6 );
                VAR_4 = &VAR_20[ VAR_6 ];

            } else {
                VAR_20 = FUNC_11( ( void* )VAR_5, VAR_6 * 2 + 1 );

                if ( VAR_20 == ((void*)0) ) {
                    goto lose;
                }

                VAR_4 = &VAR_20[ VAR_6 ];
            }




            FUNC_6( ( char* )VAR_4, VAR_20, VAR_6 );
            VAR_6 *= 2;
            VAR_20[ VAR_6 ] = '\0';

            VAR_5 = VAR_20;
        }

        VAR_4 -= 3;



        if ( FUNC_12( VAR_4, &VAR_13 ) < 0 ) {
            goto lose;
        }

        VAR_17 = VAR_13.st_dev;
        VAR_18 = VAR_13.st_ino;
        VAR_19 = VAR_17 != VAR_8;



        VAR_15 = FUNC_9( VAR_4 );

        if ( VAR_15 == ((void*)0) ) {
            goto lose;
        }

        while ( ( VAR_16 = FUNC_10( VAR_15 ) ) != ((void*)0) ) {
            if ( VAR_16->d_name[ 0 ] == '.' &&
                 ( VAR_16->d_name[ 1 ] == '\0' || (VAR_16->d_name[ 1 ] == '.' && VAR_16->d_name[ 2 ] == '\0' ) ) ) {
                continue;
            }

            if ( VAR_19 || ( ino_t )VAR_16->d_ino == VAR_10 ) {
                char VAR_21[ VAR_5 + VAR_6 - VAR_4 + 1 + FUNC_1( VAR_16 ) ];






                FUNC_6( VAR_21, VAR_4, VAR_5 + VAR_6 - VAR_4 );
                VAR_21[ VAR_5 + VAR_6 - VAR_4 ] = '/';
                FUNC_13( &VAR_21[ VAR_5 + VAR_6 - VAR_4 + 1 ], VAR_16->d_name );
                if ( FUNC_12( VAR_21, &VAR_13 ) >= 0 &&
                     VAR_13.st_dev == VAR_8 && VAR_13.st_ino == VAR_10 ) {
                    break;
                }
            }
        }

        if ( VAR_16 == ((void*)0) ) {
            ( void )FUNC_3( VAR_15 );

            goto lose;
        } else {
            size_t VAR_22 = FUNC_2( VAR_16 );

            if ( ( size_t )( VAR_12 - VAR_11 ) <= VAR_22 ) {
                if (VAR_2 != 0) {
                    ( void )FUNC_3( VAR_15 );
                    goto lose;
                } else {
                    char* VAR_23;
                    size_t VAR_24 = VAR_14;

                    VAR_14 = 2 * FUNC_0( VAR_14, VAR_22 );
                    VAR_23 = FUNC_11( VAR_11, VAR_14 );

                    if ( VAR_23 == ((void*)0) ) {
                        ( void )FUNC_3( VAR_15 );
                        goto lose;
                    }




                    VAR_12 = FUNC_6(
                        VAR_23 + VAR_14 - ( VAR_11 + VAR_24 - VAR_12 ),
                        VAR_23 + ( VAR_12 - VAR_11 ),
                        VAR_11 + VAR_24 - VAR_12
                    );

                    VAR_11 = VAR_23;
                }
            }

            VAR_12 -= VAR_22;
            ( void )FUNC_6( VAR_12, VAR_16->d_name, VAR_22 );
            *--VAR_12 = '/';
            ( void )FUNC_3( VAR_15 );
        }

        VAR_8 = VAR_17;
        VAR_10 = VAR_18;
    }

    if ( VAR_12 == &VAR_11[ VAR_14 - 1 ] ) {
        *--VAR_12 = '/';
    }

    if ( VAR_5 != VAR_3 ) {
        FUNC_4( ( void* )VAR_5 );
    }

    FUNC_7( VAR_11, VAR_12, VAR_11 + VAR_14 - VAR_12 );

    return VAR_11;

lose:
    if ( VAR_5 != VAR_3 ) {
        FUNC_4( ( void* )VAR_5 );
    }

lose2:
    if ( VAR_1 == ((void*)0) ) {
        FUNC_4( VAR_11 );
    }

    return ((void*)0);
}
