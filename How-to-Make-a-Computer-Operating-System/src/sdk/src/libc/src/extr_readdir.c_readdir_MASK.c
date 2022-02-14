
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int dummy; } ;
struct TYPE_3__ {struct dirent entry; int fd; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (int ,struct dirent*,int) ;

struct dirent* FUNC_1( DIR* VAR_0 ) {
    int VAR_1;

    if ( VAR_0 == ((void*)0) ) {
        return ((void*)0);
    }

    VAR_1 = FUNC_0( VAR_0->fd, &VAR_0->entry, sizeof( struct dirent ) );

    if ( VAR_1 == 0 ) {
        return ((void*)0);
    }

    return &VAR_0->entry;
}
