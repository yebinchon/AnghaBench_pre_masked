
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; int status; scalar_t__ f; } ;
typedef TYPE_1__ Test ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char) ;
 int VAR_2 ;
 int FUNC_5 (int*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(Test *VAR_3)
{
    Test *VAR_4;
    int VAR_5, VAR_6;

    VAR_5 = FUNC_5(&VAR_6, 0, 0);
    if (VAR_5 == -1) {
        FUNC_0(3, VAR_1, "wait");
    }
    FUNC_3(VAR_5, VAR_0);

    for (VAR_4=VAR_3; VAR_4->f; VAR_4++) {
        if (VAR_4->pid == VAR_5) {
            VAR_4->status = VAR_6;
            if (!VAR_4->status) {
                FUNC_4('.');
            } else if (FUNC_1(VAR_4->status)) {
                FUNC_4('F');
            } else {
                FUNC_4('E');
            }
            FUNC_2(VAR_2);
        }
    }
}
