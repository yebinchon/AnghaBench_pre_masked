
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* socket; int events; int revents; int fd; } ;
typedef TYPE_1__ zmq_pollitem_t ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_7, void *VAR_8, int VAR_9)
{
    int VAR_10;
    int VAR_11 = VAR_9 ? VAR_5 : VAR_4;
    zmq_pollitem_t VAR_12 = { .socket = VAR_8, .fd = 0, .events = VAR_11, .revents = 0 };
    VAR_10 = FUNC_2(&VAR_12, 1, VAR_3);
    if (VAR_10 == -1) {
        FUNC_1(VAR_7, VAR_1, "Error occured during zmq_poll(): %s\n", VAR_6);
        return VAR_0;
    }
    return VAR_12.revents & VAR_11 ? 0 : FUNC_0(VAR_2);
}
