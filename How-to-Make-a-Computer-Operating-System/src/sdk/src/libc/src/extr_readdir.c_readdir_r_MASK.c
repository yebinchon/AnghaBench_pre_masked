
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int dummy; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dirent*,int) ;

int FUNC_1( DIR* VAR_2, struct dirent* VAR_3, struct dirent** VAR_4 ) {
    int VAR_5;

    if ( ( VAR_2 == ((void*)0) ) ||
         ( VAR_3 == ((void*)0) ) ) {
        VAR_1 = -VAR_0;
        return -1;
    }

    VAR_5 = FUNC_0( VAR_2->fd, VAR_3, sizeof( struct dirent ) );

    if ( VAR_5 == 0 ) {
        *VAR_4 = ((void*)0);
    } else {
        *VAR_4 = VAR_3;
    }

    return 0;
}
