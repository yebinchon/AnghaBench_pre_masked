
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ sock; } ;
typedef TYPE_2__ Conn ;


 int FUNC_0 (int ,int,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(Conn *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0->sock.fd, VAR_1, VAR_0);
}
