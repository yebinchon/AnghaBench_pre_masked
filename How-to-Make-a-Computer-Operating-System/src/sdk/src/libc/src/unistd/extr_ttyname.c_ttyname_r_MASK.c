
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; } ;
struct dirent {scalar_t__ d_ino; char* d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,struct dirent*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,size_t,char*,char*) ;

int FUNC_5( int VAR_1, char* VAR_2, size_t VAR_3 ) {
    int VAR_4;
    int VAR_5;
    int VAR_6;

    struct stat VAR_7;
    struct dirent VAR_8;

    VAR_5 = FUNC_1( VAR_1, &VAR_7 );

    if ( VAR_5 < 0 ) {
        return -1;
    }

    VAR_4 = FUNC_3( "/device/terminal", VAR_0 );

    if ( VAR_4 < 0 ) {
        return -1;
    }

    VAR_6 = 0;

    while ( FUNC_2( VAR_4, &VAR_8, sizeof( struct dirent ) ) == 1 ) {
        if ( VAR_8.d_ino == VAR_7.st_ino ) {
            FUNC_4( VAR_2, VAR_3, "/device/terminal/%s", VAR_8.d_name );
            VAR_6 = 1;
            break;
        }
    }

    FUNC_0( VAR_4 );

    if ( !VAR_6 ) {
        return -1;
    }

    return 0;
}
