
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_dirent {int length; scalar_t__ last; } ;
struct dnode {int first_free; int self; } ;


 int FUNC_0 (struct hpfs_dirent*) ;
 int FUNC_1 (struct super_block*,char*,int ) ;
 int FUNC_2 (struct hpfs_dirent*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, struct dnode *VAR_1,
      struct hpfs_dirent *VAR_2)
{
 if (VAR_2->last) {
  FUNC_1(VAR_0, "attempt to delete last dirent in dnode %08x", VAR_1->self);
  return;
 }
 VAR_1->first_free -= VAR_2->length;
 FUNC_2(VAR_2, FUNC_0(VAR_2), VAR_1->first_free + (char *)VAR_1 - (char *)VAR_2);
}
