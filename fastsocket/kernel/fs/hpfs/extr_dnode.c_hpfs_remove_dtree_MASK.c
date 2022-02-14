
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {scalar_t__ down; scalar_t__ last; int first; } ;
struct dnode {int dummy; } ;
typedef int dnode_secno ;


 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 int FUNC_3 (struct quad_buffer_head*) ;
 int FUNC_4 (struct super_block*,char*,int) ;
 int FUNC_5 (struct super_block*,int) ;
 struct dnode* FUNC_6 (struct super_block*,int,struct quad_buffer_head*) ;

void FUNC_7(struct super_block *VAR_0, dnode_secno VAR_1)
{
 struct quad_buffer_head VAR_2;
 struct dnode *VAR_3;
 struct hpfs_dirent *VAR_4;
 dnode_secno VAR_5, VAR_6, VAR_7 = VAR_1;
 while (1) {
  if (!(VAR_3 = FUNC_6(VAR_0, VAR_1, &VAR_2))) return;
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4->last) {
   if (VAR_4->down) VAR_5 = FUNC_0(VAR_4);
   else goto error;
   FUNC_3(&VAR_2);
   FUNC_5(VAR_0, VAR_1);
   VAR_1 = VAR_5;
  } else break;
 }
 if (!VAR_4->first) goto error;
 VAR_5 = VAR_4->down ? FUNC_0(VAR_4) : 0;
 VAR_4 = FUNC_1(VAR_4);
 if (!VAR_4->last) goto error;
 VAR_6 = VAR_4->down ? FUNC_0(VAR_4) : 0;
 FUNC_3(&VAR_2);
 FUNC_5(VAR_0, VAR_1);
 do {
  while (VAR_5) {
   if (!(VAR_3 = FUNC_6(VAR_0, VAR_1 = VAR_5, &VAR_2))) return;
   VAR_4 = FUNC_2(VAR_3);
   if (!VAR_4->last) goto error;
   VAR_5 = VAR_4->down ? FUNC_0(VAR_4) : 0;
   FUNC_3(&VAR_2);
   FUNC_5(VAR_0, VAR_1);
  }
  VAR_5 = VAR_6;
  VAR_6 = 0;
 } while (VAR_5);
 return;
 error:
 FUNC_3(&VAR_2);
 FUNC_5(VAR_0, VAR_1);
 FUNC_4(VAR_0, "directory %08x is corrupted or not empty", VAR_7);
}
