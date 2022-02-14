
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndrv_multiaddr {int ifma; struct ndrv_multiaddr* next; } ;
struct ndrv_cb {struct ndrv_multiaddr* nd_multiaddrs; int * nd_if; } ;


 int FUNC_0 (struct ndrv_multiaddr*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ndrv_cb* VAR_1)
{
    struct ndrv_multiaddr* VAR_2;

    if (VAR_1->nd_if != ((void*)0))
    {
        while (VAR_1->nd_multiaddrs != ((void*)0))
        {
            VAR_2 = VAR_1->nd_multiaddrs;
            VAR_1->nd_multiaddrs = VAR_2->next;

            FUNC_2(VAR_2->ifma);
            FUNC_1(VAR_2->ifma);
            FUNC_0(VAR_2, VAR_0);
        }
    }
}
