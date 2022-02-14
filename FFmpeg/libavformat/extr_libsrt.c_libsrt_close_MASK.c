
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int eid; int fd; } ;
typedef TYPE_2__ SRTContext ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    SRTContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_1->fd);

    FUNC_2(VAR_1->eid);

    FUNC_0();

    return 0;
}
