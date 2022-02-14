
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* prot; } ;
struct TYPE_5__ {TYPE_3__* h; } ;
struct TYPE_4__ {int (* url_read_seek ) (TYPE_3__*,int,int ,int) ;} ;
typedef TYPE_2__ AVIOInternal ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int,int ,int) ;

__attribute__((used)) static int64_t FUNC_2(void *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVIOInternal *VAR_5 = VAR_1;
    if (!VAR_5->h->prot->url_read_seek)
        return FUNC_0(VAR_0);
    return VAR_5->h->prot->url_read_seek(VAR_5->h, VAR_2, VAR_3, VAR_4);
}
