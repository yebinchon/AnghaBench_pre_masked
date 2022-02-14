
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkt_gl {int nfrags; TYPE_1__* frags; } ;
struct TYPE_2__ {int page; } ;
typedef TYPE_1__ skb_frag_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct pkt_gl *VAR_0)
{
 int VAR_1;
 const skb_frag_t *VAR_2;

 for (VAR_2 = VAR_0->frags, VAR_1 = VAR_0->nfrags - 1; VAR_1--; VAR_2++)
  FUNC_0(VAR_2->page);
}
