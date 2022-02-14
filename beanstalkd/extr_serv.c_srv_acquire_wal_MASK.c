
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int dir; scalar_t__ use; } ;
struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* prev; } ;
struct TYPE_9__ {TYPE_3__ wal; } ;
typedef TYPE_1__ Server ;
typedef TYPE_2__ Job ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;

void FUNC_5(Server *VAR_0) {
    if (VAR_0->wal.use) {



        if (!FUNC_3(&VAR_0->wal)) {
            FUNC_2("failed to lock wal dir %s", VAR_0->wal.dir);
            FUNC_0(10);
        }

        Job VAR_1 = {.prev=((void*)0), .next=((void*)0)};
        VAR_1.prev = VAR_1.next = &VAR_1;
        FUNC_4(&VAR_0->wal, &VAR_1);
        int VAR_2 = FUNC_1(VAR_0, &VAR_1);
        if (!VAR_2) {
            FUNC_2("failed to replay log");
            FUNC_0(1);
        }
    }
}
