
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_5__ {int fd; scalar_t__ f; TYPE_1__* x; } ;
struct TYPE_4__ {TYPE_2__ sock; int * srv; } ;
typedef int Server ;
typedef scalar_t__ Handle ;
typedef TYPE_1__ Conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (short const) ;
 int FUNC_1 (int const,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,int ,int) ;
 TYPE_1__* FUNC_5 (int,int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (TYPE_2__*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_9 ;

void
FUNC_10(const int VAR_10, const short VAR_11, Server *VAR_12)
{
    FUNC_0(VAR_11);
    struct sockaddr_storage VAR_13;

    socklen_t VAR_14 = sizeof VAR_13;
    int VAR_15 = FUNC_1(VAR_10, (struct sockaddr *)&VAR_13, &VAR_14);
    if (VAR_15 == -1) {
        if (VAR_7 != VAR_0 && VAR_7 != VAR_1) FUNC_8("accept()");
        FUNC_3();
        return;
    }
    if (VAR_9) {
        FUNC_6("accept %d\n", VAR_15);
    }

    int VAR_16 = FUNC_4(VAR_15, VAR_2, 0);
    if (VAR_16 < 0) {
        FUNC_8("getting flags");
        FUNC_2(VAR_15);
        if (VAR_9) {
            FUNC_6("close %d\n", VAR_15);
        }
        FUNC_3();
        return;
    }

    int VAR_17 = FUNC_4(VAR_15, VAR_3, VAR_16 | VAR_4);
    if (VAR_17 < 0) {
        FUNC_8("setting O_NONBLOCK");
        FUNC_2(VAR_15);
        if (VAR_9) {
            FUNC_6("close %d\n", VAR_15);
        }
        FUNC_3();
        return;
    }

    Conn *VAR_18 = FUNC_5(VAR_15, VAR_5, VAR_6, VAR_6);
    if (!VAR_18) {
        FUNC_9("make_conn() failed");
        FUNC_2(VAR_15);
        if (VAR_9) {
            FUNC_6("close %d\n", VAR_15);
        }
        FUNC_3();
        return;
    }
    VAR_18->srv = VAR_12;
    VAR_18->sock.x = VAR_18;
    VAR_18->sock.f = (Handle)VAR_8;
    VAR_18->sock.fd = VAR_15;

    VAR_17 = FUNC_7(&VAR_18->sock, 'r');
    if (VAR_17 == -1) {
        FUNC_8("sockwant");
        FUNC_2(VAR_15);
        if (VAR_9) {
            FUNC_6("close %d\n", VAR_15);
        }
    }
    FUNC_3();
}
