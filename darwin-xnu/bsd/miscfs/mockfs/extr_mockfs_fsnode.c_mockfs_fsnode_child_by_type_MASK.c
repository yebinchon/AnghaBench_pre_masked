
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef TYPE_1__* mockfs_fsnode_t ;
struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* child_b; struct TYPE_4__* child_a; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(mockfs_fsnode_t VAR_2, uint8_t VAR_3, mockfs_fsnode_t * VAR_4)
{
 int VAR_5;

 VAR_5 = 0;

 if (!VAR_2 || !VAR_4) {
  VAR_5 = VAR_0;
  goto done;
 }

 if ((VAR_2->child_a) && (VAR_2->child_a->type == VAR_3))
  *VAR_4 = VAR_2->child_a;
 else if ((VAR_2->child_b) && (VAR_2->child_b->type == VAR_3))
  *VAR_4 = VAR_2->child_b;
 else
  VAR_5 = VAR_1;

done:
 return VAR_5;
}
