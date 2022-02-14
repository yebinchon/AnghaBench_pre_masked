
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {scalar_t__ user; TYPE_1__ sock; int port; int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,char**) ;
 int FUNC_5 (char*,int) ;
 char* VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_3 ;

int
FUNC_13(int VAR_4, char **VAR_5)
{
    FUNC_0(VAR_4);

    VAR_0 = VAR_5[0];
    FUNC_8(VAR_2);
    FUNC_4(&VAR_1, VAR_5+1);

    if (VAR_3) {
        FUNC_5("pid %d\n", FUNC_2());
    }

    int VAR_6 = FUNC_3(VAR_1.addr, VAR_1.port);
    if (VAR_6 == -1) {
        FUNC_12("make_server_socket()");
        FUNC_1(111);
    }

    VAR_1.sock.fd = VAR_6;

    FUNC_6();

    if (VAR_1.user)
        FUNC_11(VAR_1.user);
    FUNC_7();

    FUNC_9(&VAR_1);
    FUNC_10(&VAR_1);
    FUNC_1(0);
}
