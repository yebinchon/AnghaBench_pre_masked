
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

DIR* FUNC_3( const char* VAR_1 ) {
    DIR* VAR_2;

    VAR_2 = ( DIR* )FUNC_1( sizeof( DIR ) );

    if ( VAR_2 == ((void*)0) ) {
        return ((void*)0);
    }

    VAR_2->fd = FUNC_2( VAR_1, VAR_0 );

    if ( VAR_2->fd < 0 ) {
        FUNC_0( VAR_2 );
        return ((void*)0);
    }

    return VAR_2;
}
