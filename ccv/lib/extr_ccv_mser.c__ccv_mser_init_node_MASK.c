
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; } ;
struct TYPE_5__ {int root; TYPE_1__ point; struct TYPE_5__* shortcut; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_2__ ccv_mser_node_t ;



__attribute__((used)) static void FUNC_0(ccv_mser_node_t* VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->prev = VAR_0->next = VAR_0->shortcut = VAR_0;
 VAR_0->point.x = VAR_1;
 VAR_0->point.y = VAR_2;
 VAR_0->root = -1;
}
