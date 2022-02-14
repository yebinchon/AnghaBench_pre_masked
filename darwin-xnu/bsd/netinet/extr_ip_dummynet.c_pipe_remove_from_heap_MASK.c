
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_pipe {int dummy; } ;
struct dn_heap {scalar_t__ elements; TYPE_1__* p; } ;
struct TYPE_2__ {struct dn_pipe* object; } ;


 int FUNC_0 (struct dn_heap*) ;

__attribute__((used)) static void
FUNC_1(struct dn_heap *VAR_0, struct dn_pipe *VAR_1)
{
    if (VAR_0->elements > 0) {
 int VAR_2 = 0 ;
 for (VAR_2=0; VAR_2 < VAR_0->elements ; VAR_2++ ) {
     if (VAR_0->p[VAR_2].object == VAR_1) {
  VAR_0->elements-- ;
  VAR_0->p[VAR_2] = VAR_0->p[VAR_0->elements] ;
  FUNC_0(VAR_0);
  break ;
     }
 }
    }
}
