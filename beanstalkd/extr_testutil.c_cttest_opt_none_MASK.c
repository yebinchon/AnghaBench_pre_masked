
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ filesize; scalar_t__ wantsync; scalar_t__ use; int * dir; } ;
struct TYPE_5__ {TYPE_1__ wal; int * user; int * addr; int port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,char**) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_5 ;

void
FUNC_3()
{
    char *VAR_6[] = {
        ((void*)0),
    };

    FUNC_1(&VAR_4, VAR_6);
    FUNC_0(FUNC_2(VAR_4.port, VAR_2) == 0);
    FUNC_0(VAR_4.addr == ((void*)0));
    FUNC_0(VAR_3 == VAR_1);
    FUNC_0(VAR_4.wal.filesize == VAR_0);
    FUNC_0(VAR_4.wal.wantsync == 0);
    FUNC_0(VAR_4.user == ((void*)0));
    FUNC_0(VAR_4.wal.dir == ((void*)0));
    FUNC_0(VAR_4.wal.use == 0);
    FUNC_0(VAR_5 == 0);
}
