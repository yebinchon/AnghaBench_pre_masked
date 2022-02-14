
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ sock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,struct sockaddr*,int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(void)
{
    struct sockaddr_in VAR_3;

    VAR_1.sock.fd = FUNC_4("127.0.0.1", "0");
    if (VAR_1.sock.fd == -1) {
        FUNC_8("mustforksrv failed");
        FUNC_1(1);
    }

    size_t VAR_4 = sizeof(VAR_3);
    int VAR_5 = FUNC_3(VAR_1.sock.fd, (struct sockaddr *)&VAR_3, (socklen_t *)&VAR_4);
    if (VAR_5 == -1 || VAR_4 > sizeof(VAR_3)) {
        FUNC_8("mustforksrv failed");
        FUNC_1(1);
    }

    int VAR_6 = FUNC_5(VAR_3.sin_port);
    VAR_2 = FUNC_2();
    if (VAR_2 < 0) {
        FUNC_12("fork");
        FUNC_1(1);
    }

    if (VAR_2 > 0) {

        FUNC_0(VAR_0);
        FUNC_6("start server port=%d pid=%d\n", VAR_6, VAR_2);
        return VAR_6;
    }



    FUNC_9();
    FUNC_7();

    FUNC_10(&VAR_1);

    FUNC_11(&VAR_1);
    FUNC_1(1);
}
