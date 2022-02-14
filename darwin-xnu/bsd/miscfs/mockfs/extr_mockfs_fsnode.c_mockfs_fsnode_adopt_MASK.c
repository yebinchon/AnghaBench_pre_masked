
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mockfs_fsnode_t ;
struct TYPE_4__ {scalar_t__ mnt; struct TYPE_4__* parent; struct TYPE_4__* child_b; struct TYPE_4__* child_a; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(mockfs_fsnode_t VAR_2, mockfs_fsnode_t VAR_3)
{
 int VAR_4;

 VAR_4 = 0;




 if ((!VAR_2 || !VAR_3 || VAR_3->parent) && (VAR_2 != VAR_3)) {
  VAR_4 = VAR_0;
  goto done;
 }




 if (VAR_2->mnt != VAR_3->mnt) {
  VAR_4 = VAR_0;
  goto done;
 }
 if (!VAR_2->child_a) {
  VAR_2->child_a = VAR_3;
  VAR_3->parent = VAR_2;
 }
 else if (!VAR_2->child_b) {
  VAR_2->child_b = VAR_3;
  VAR_3->parent = VAR_2;
 }
 else {
  VAR_4 = VAR_1;
 }

done:
 return VAR_4;
}
