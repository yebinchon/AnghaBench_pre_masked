
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_11__ {int fd; scalar_t__ f; TYPE_3__* x; } ;
struct TYPE_8__ {int setpos; int less; } ;
struct TYPE_10__ {TYPE_5__ sock; TYPE_1__ conns; } ;
struct TYPE_9__ {int x; int (* f ) (int ,int) ;} ;
typedef TYPE_2__ Socket ;
typedef TYPE_3__ Server ;
typedef scalar_t__ Handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__**,int ) ;
 int FUNC_5 (TYPE_5__*,char) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

void
FUNC_9(Server *VAR_3)
{
    int VAR_4;
    Socket *VAR_5;

    if (FUNC_3() == -1) {
        FUNC_8("sockinit");
        FUNC_0(1);
    }

    VAR_3->sock.x = VAR_3;
    VAR_3->sock.f = (Handle)VAR_2;
    VAR_3->conns.less = VAR_0;
    VAR_3->conns.setpos = VAR_1;

    VAR_4 = FUNC_1(VAR_3->sock.fd, 1024);
    if (VAR_4 == -1) {
        FUNC_7("listen");
        return;
    }

    VAR_4 = FUNC_5(&VAR_3->sock, 'r');
    if (VAR_4 == -1) {
        FUNC_7("sockwant");
        FUNC_0(2);
    }


    for (;;) {
        int64 VAR_6 = FUNC_2(VAR_3);

        int VAR_7 = FUNC_4(&VAR_5, VAR_6);
        if (VAR_7 == -1) {
            FUNC_8("socknext");
            FUNC_0(1);
        }

        if (VAR_7) {
            VAR_5->f(VAR_5->x, VAR_7);
        }
    }
}
