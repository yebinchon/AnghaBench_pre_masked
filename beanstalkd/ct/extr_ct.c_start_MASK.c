
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; scalar_t__ pid; int (* f ) () ;int dir; } ;
typedef TYPE_1__ Test ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(Test *VAR_4)
{
    VAR_4->fd = FUNC_11();
    FUNC_9(VAR_4->dir, VAR_0);
    if (FUNC_7(VAR_4->dir) == ((void*)0)) {
 FUNC_2(1, VAR_2, "mkdtemp");
    }
    FUNC_5(((void*)0));
    VAR_4->pid = FUNC_6();
    if (VAR_4->pid < 0) {
        FUNC_2(1, VAR_2, "fork");
    } else if (!VAR_4->pid) {
        FUNC_8(0, 0);
        if (FUNC_3(VAR_4->fd, 1) == -1) {
            FUNC_2(3, VAR_2, "dup2");
        }
        if (FUNC_0(VAR_4->fd) == -1) {
            FUNC_2(3, VAR_2, "fclose");
        }
        if (FUNC_3(1, 2) == -1) {
            FUNC_2(3, VAR_2, "dup2");
        }
        VAR_1 = VAR_4->dir;
        VAR_4->f();
        if (VAR_3) {
            FUNC_1();
        }
        FUNC_4(0);
    }
    FUNC_8(VAR_4->pid, VAR_4->pid);
}
