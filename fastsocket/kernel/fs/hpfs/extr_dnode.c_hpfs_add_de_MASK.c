
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_dirent {unsigned int namelen; int down; unsigned int length; int name; int not_8x3; int last; } ;
struct dnode {unsigned int first_free; int self; } ;
typedef int secno ;


 struct hpfs_dirent* FUNC_0 (struct hpfs_dirent*) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct super_block*,unsigned char*,unsigned int,int ,unsigned int,int ) ;
 int FUNC_5 (struct super_block*,char*,unsigned char,unsigned int,int ) ;
 int FUNC_6 (unsigned char*,unsigned int) ;
 int FUNC_7 (int ,unsigned char*,unsigned int) ;
 int FUNC_8 (char*,struct hpfs_dirent*,int) ;
 int FUNC_9 (struct hpfs_dirent*,int ,unsigned int) ;

struct hpfs_dirent *FUNC_10(struct super_block *VAR_0, struct dnode *VAR_1, unsigned char *VAR_2,
    unsigned VAR_3, secno VAR_4)
{
 struct hpfs_dirent *VAR_5;
 struct hpfs_dirent *VAR_6 = FUNC_2(VAR_1);
 unsigned VAR_7 = FUNC_1(VAR_3, VAR_4);
 for (VAR_5 = FUNC_3(VAR_1); VAR_5 < VAR_6; VAR_5 = FUNC_0(VAR_5)) {
  int VAR_8 = FUNC_4(VAR_0, VAR_2, VAR_3, VAR_5->name, VAR_5->namelen, VAR_5->last);
  if (!VAR_8) {
   FUNC_5(VAR_0, "name (%c,%d) already exists in dnode %08x", *VAR_2, VAR_3, VAR_1->self);
   return ((void*)0);
  }
  if (VAR_8 < 0) break;
 }
 FUNC_8((char *)VAR_5 + VAR_7, VAR_5, (char *)VAR_6 - (char *)VAR_5);
 FUNC_9(VAR_5, 0, VAR_7);
 if (VAR_4) {
  *(int *)((char *)VAR_5 + VAR_7 - 4) = VAR_4;
  VAR_5->down = 1;
 }
 VAR_5->length = VAR_7;
 if (VAR_4) VAR_5->down = 1;
 VAR_5->not_8x3 = FUNC_6(VAR_2, VAR_3);
 VAR_5->namelen = VAR_3;
 FUNC_7(VAR_5->name, VAR_2, VAR_3);
 VAR_1->first_free += VAR_7;
 return VAR_5;
}
