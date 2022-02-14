
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wantsync; } ;
struct TYPE_5__ {TYPE_1__ wal; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char**) ;
 TYPE_2__ VAR_0 ;

void
FUNC_2()
{
    char *VAR_1[] = {
        "-f1234",
        "-F",
        ((void*)0),
    };

    FUNC_1(&VAR_0, VAR_1);
    FUNC_0(VAR_0.wal.wantsync == 0);
}
