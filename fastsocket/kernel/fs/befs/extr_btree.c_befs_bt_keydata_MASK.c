
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int befs_btree_nodehead ;
struct TYPE_3__ {scalar_t__ od_node; } ;
typedef TYPE_1__ befs_btree_node ;



__attribute__((used)) static char *
FUNC_0(befs_btree_node * VAR_0)
{
 return (char *) ((void *) VAR_0->od_node + sizeof (befs_btree_nodehead));
}
