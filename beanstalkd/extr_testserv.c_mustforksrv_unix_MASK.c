
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int path ;
typedef int name ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ sock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int,char*,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static char *
FUNC_15(void)
{
    static char VAR_3[90];
    char VAR_4[95];
    FUNC_11(VAR_3, sizeof(VAR_3), "%s/socket", FUNC_2());
    FUNC_11(VAR_4, sizeof(VAR_4), "unix:%s", VAR_3);
    VAR_1.sock.fd = FUNC_6(VAR_4, ((void*)0));
    if (VAR_1.sock.fd == -1) {
        FUNC_9("mustforksrv_unix failed");
        FUNC_4(1);
    }

    VAR_2 = FUNC_5();
    if (VAR_2 < 0) {
        FUNC_14("fork");
        FUNC_4(1);
    }

    if (VAR_2 > 0) {

        FUNC_1(VAR_0);
        FUNC_7("start server socket=%s\n", VAR_3);
        FUNC_0(FUNC_3(VAR_3));
        return VAR_3;
    }



    FUNC_10();
    FUNC_8();

    FUNC_12(&VAR_1);

    FUNC_13(&VAR_1);
    FUNC_4(1);
}
