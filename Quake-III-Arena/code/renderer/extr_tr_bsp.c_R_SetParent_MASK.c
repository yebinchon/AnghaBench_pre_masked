
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contents; struct TYPE_4__** children; struct TYPE_4__* parent; } ;
typedef TYPE_1__ mnode_t ;



__attribute__((used)) static void FUNC_0 (mnode_t *VAR_0, mnode_t *VAR_1)
{
 VAR_0->parent = VAR_1;
 if (VAR_0->contents != -1)
  return;
 FUNC_0 (VAR_0->children[0], VAR_0);
 FUNC_0 (VAR_0->children[1], VAR_0);
}
