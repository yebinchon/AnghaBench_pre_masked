
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct hpfs_dirent {int down; int length; } ;
struct dnode {int first_free; int self; } ;
typedef scalar_t__ dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct dnode*) ;
 int FUNC_2 (struct super_block*,char*,int ,...) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0, struct dnode *VAR_1, dnode_secno VAR_2)
{
 struct hpfs_dirent *VAR_3;
 if (!(VAR_3 = FUNC_1(VAR_1))) {
  FUNC_2(VAR_0, "set_last_pointer: empty dnode %08x", VAR_1->self);
  return;
 }
 if (FUNC_3(VAR_0)->sb_chk) {
  if (VAR_3->down) {
   FUNC_2(VAR_0, "set_last_pointer: dnode %08x has already last pointer %08x",
    VAR_1->self, FUNC_0(VAR_3));
   return;
  }
  if (VAR_3->length != 32) {
   FUNC_2(VAR_0, "set_last_pointer: bad last dirent in dnode %08x", VAR_1->self);
   return;
  }
 }
 if (VAR_2) {
  if ((VAR_1->first_free += 4) > 2048) {
   FUNC_2(VAR_0,"set_last_pointer: too long dnode %08x", VAR_1->self);
   VAR_1->first_free -= 4;
   return;
  }
  VAR_3->length = 36;
  VAR_3->down = 1;
  *(dnode_secno *)((char *)VAR_3 + 32) = VAR_2;
 }
}
