
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prot; } ;
struct TYPE_5__ {TYPE_3__* h; } ;
struct TYPE_4__ {int (* url_read_pause ) (TYPE_3__*,int) ;} ;
typedef TYPE_2__ AVIOInternal ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2)
{
    AVIOInternal *VAR_3 = VAR_1;
    if (!VAR_3->h->prot->url_read_pause)
        return FUNC_0(VAR_0);
    return VAR_3->h->prot->url_read_pause(VAR_3->h, VAR_2);
}
