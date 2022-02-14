
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_heap {int elements; TYPE_1__* p; } ;
struct dn_flow_set {int dummy; } ;
struct dn_flow_queue {struct dn_flow_set* fs; } ;
struct TYPE_2__ {scalar_t__ object; } ;


 int FUNC_0 (struct dn_heap*) ;

__attribute__((used)) static void
FUNC_1(struct dn_heap *VAR_0, struct dn_flow_set *VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0 ;
    for (; VAR_2 < VAR_0->elements ;)
 if ( ((struct dn_flow_queue *)VAR_0->p[VAR_2].object)->fs == VAR_1) {
     VAR_0->elements-- ;
     VAR_0->p[VAR_2] = VAR_0->p[VAR_0->elements] ;
     VAR_3++ ;
 } else
     VAR_2++ ;
    if (VAR_3)
 FUNC_0(VAR_0);
}
