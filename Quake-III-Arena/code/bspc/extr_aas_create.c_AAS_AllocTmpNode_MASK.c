
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numnodes; int * nodes; struct TYPE_3__* next; } ;
typedef TYPE_1__ tmp_nodebuf_t ;
typedef int tmp_node_t ;
struct TYPE_4__ {TYPE_1__* nodebuffer; int numnodes; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

tmp_node_t *FUNC_1(void)
{
 tmp_nodebuf_t *VAR_2;

 if (!VAR_1.nodebuffer ||
   VAR_1.nodebuffer->numnodes >= VAR_0)
 {
  VAR_2 = (tmp_nodebuf_t *) FUNC_0(sizeof(tmp_nodebuf_t));
  VAR_2->next = VAR_1.nodebuffer;
  VAR_2->numnodes = 0;
  VAR_1.nodebuffer = VAR_2;
 }
 VAR_1.numnodes++;
 return &VAR_1.nodebuffer->nodes[VAR_1.nodebuffer->numnodes++];
}
