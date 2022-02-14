
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ SCTPContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0)
{
    SCTPContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(VAR_1->fd);
    return 0;
}
