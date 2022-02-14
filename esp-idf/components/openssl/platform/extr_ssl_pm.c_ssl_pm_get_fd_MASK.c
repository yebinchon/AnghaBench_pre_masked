
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct ssl_pm {TYPE_1__ fd; } ;
struct TYPE_5__ {scalar_t__ ssl_pm; } ;
typedef TYPE_2__ SSL ;



int FUNC_0(const SSL *VAR_0, int VAR_1)
{
    struct ssl_pm *VAR_2 = (struct ssl_pm *)VAR_0->ssl_pm;

    return VAR_2->fd.fd;
}
