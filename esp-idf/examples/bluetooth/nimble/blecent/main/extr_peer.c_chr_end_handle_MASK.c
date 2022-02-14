
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ end_handle; } ;
struct peer_svc {TYPE_2__ svc; } ;
struct TYPE_3__ {scalar_t__ def_handle; } ;
struct peer_chr {TYPE_1__ chr; } ;


 struct peer_chr* FUNC_0 (struct peer_chr const*,int ) ;
 int VAR_0 ;

uint16_t
FUNC_1(const struct peer_svc *VAR_1, const struct peer_chr *VAR_2)
{
    const struct peer_chr *VAR_3;

    VAR_3 = FUNC_0(VAR_2, VAR_0);
    if (VAR_3 != ((void*)0)) {
        return VAR_3->chr.def_handle - 1;
    } else {
        return VAR_1->svc.end_handle;
    }
}
