
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {scalar_t__ lastsync; scalar_t__ syncrate; TYPE_1__* cur; scalar_t__ wantsync; } ;
typedef TYPE_2__ Wal ;
struct TYPE_4__ {int fd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(Wal *VAR_0)
{
    int64 VAR_1;

    VAR_1 = FUNC_1();
    if (VAR_0->wantsync && VAR_1 >= VAR_0->lastsync+VAR_0->syncrate) {
        VAR_0->lastsync = VAR_1;
        if (FUNC_0(VAR_0->cur->fd) == -1) {
            FUNC_2("fsync");
        }
    }
}
