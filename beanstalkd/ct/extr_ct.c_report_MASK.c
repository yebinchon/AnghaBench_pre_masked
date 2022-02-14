
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int fd; int status; int dir; scalar_t__ f; } ;
typedef TYPE_1__ Test ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(Test *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0;

    FUNC_8('\n');
    for (; VAR_2->f; VAR_2++) {
        FUNC_9(VAR_2->dir);
        if (!VAR_2->status) {
            continue;
        }

        FUNC_7("\n%s: ", VAR_2->name);
        if (FUNC_5(VAR_2->status)) {
            VAR_3++;
            FUNC_7("failure");
        } else {
            VAR_4++;
            FUNC_7("error");
            if (FUNC_1(VAR_2->status)) {
                FUNC_7(" (exit status %d)", FUNC_0(VAR_2->status));
            }
            if (FUNC_2(VAR_2->status)) {
                FUNC_7(" (signal %d)", FUNC_3(VAR_2->status));
            }
        }

        FUNC_8('\n');
        FUNC_6(VAR_2->fd, 0, VAR_0);
        FUNC_4(VAR_1, VAR_2->fd);
    }

    if (VAR_3 || VAR_4) {
        FUNC_7("\n%d failures; %d errors.\n", VAR_3, VAR_4);
    } else {
        FUNC_7("\nPASS\n");
    }
    return VAR_3 || VAR_4;
}
