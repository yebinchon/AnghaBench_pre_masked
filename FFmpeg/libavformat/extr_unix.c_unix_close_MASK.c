
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sun_path; } ;
struct TYPE_6__ {int fd; TYPE_1__ addr; scalar_t__ listen; } ;
typedef TYPE_2__ UnixContext ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_3__ URLContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0)
{
    UnixContext *VAR_1 = VAR_0->priv_data;
    if (VAR_1->listen)
        FUNC_1(VAR_1->addr.sun_path);
    FUNC_0(VAR_1->fd);
    return 0;
}
