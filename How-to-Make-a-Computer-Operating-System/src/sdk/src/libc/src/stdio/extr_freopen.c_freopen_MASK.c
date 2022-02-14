
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,int,int) ;

FILE* FUNC_4( const char* VAR_4, const char* VAR_5, FILE* VAR_6 ) {
    int VAR_7;

    if ( VAR_6 == ((void*)0) ) {
        VAR_3 = -VAR_0;
        return ((void*)0);
    }

    VAR_7 = FUNC_0( VAR_5 );

    FUNC_2( VAR_6 );
    FUNC_1( VAR_6->fd );

    VAR_6->fd = FUNC_3( VAR_4, VAR_7, 0666 );

    if ( VAR_6->fd != -1 ) {
        VAR_6->flags = 0;

        switch ( VAR_7 & 3 ) {
          case 129 : VAR_6->flags |= ( VAR_1 | VAR_2 ); break;
          case 130 : VAR_6->flags |= VAR_1; break;
          case 128 : VAR_6->flags |= VAR_2; break;
        }
    }

    return VAR_6;
}
