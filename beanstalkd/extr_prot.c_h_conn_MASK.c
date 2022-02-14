
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int const fd; } ;
struct TYPE_11__ {int halfclosed; scalar_t__ state; int cmd_read; int cmd; int cmd_len; TYPE_1__ sock; } ;
typedef TYPE_2__ Conn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(const int VAR_1, const short VAR_2, Conn *VAR_3)
{
    if (VAR_1 != VAR_3->sock.fd) {
        FUNC_9("Argh! event fd doesn't match conn fd.");
        FUNC_0(VAR_1);
        FUNC_3(VAR_3);
        FUNC_5();
        return;
    }

    if (VAR_2 == 'h') {
        VAR_3->halfclosed = 1;
    }

    FUNC_2(VAR_3);
    while (FUNC_1(VAR_3) && (VAR_3->cmd_len = FUNC_8(VAR_3->cmd, VAR_3->cmd_read))) {
        FUNC_4(VAR_3);
        FUNC_7(VAR_3);
    }
    if (VAR_3->state == VAR_0) {
        FUNC_6(VAR_3);
        FUNC_3(VAR_3);
    }
    FUNC_5();
}
