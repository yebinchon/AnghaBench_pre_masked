
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct peer_svc {int dummy; } ;
struct TYPE_2__ {scalar_t__ val_handle; } ;
struct peer_chr {TYPE_1__ chr; } ;


 scalar_t__ FUNC_0 (struct peer_svc const*,struct peer_chr const*) ;

int
FUNC_1(const struct peer_svc *VAR_0, const struct peer_chr *VAR_1)
{
    return FUNC_0(VAR_0, VAR_1) <= VAR_1->chr.val_handle;
}
