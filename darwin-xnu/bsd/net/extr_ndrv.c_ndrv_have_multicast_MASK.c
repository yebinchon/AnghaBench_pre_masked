
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_len; } ;
struct TYPE_2__ {scalar_t__ sa_len; } ;
struct ndrv_multiaddr {TYPE_1__ addr; struct ndrv_multiaddr* next; } ;
struct ndrv_cb {struct ndrv_multiaddr* nd_multiaddrs; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct sockaddr*,scalar_t__) ;

__attribute__((used)) static struct ndrv_multiaddr*
FUNC_1(struct ndrv_cb *VAR_0, struct sockaddr* VAR_1)
{
    struct ndrv_multiaddr* VAR_2;
    for (VAR_2 = VAR_0->nd_multiaddrs; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {

        if ((VAR_1->sa_len == VAR_2->addr.sa_len) &&
            (FUNC_0(&VAR_2->addr, VAR_1, VAR_1->sa_len) == 0))
        {

            return VAR_2;
        }
    }

    return ((void*)0);
}
