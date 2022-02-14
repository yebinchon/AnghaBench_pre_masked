
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fs_info; } ;
struct cifs_mnt_data {int cifs_sb; } ;


 int FUNC_0 (struct super_block*,int *) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 struct cifs_mnt_data *VAR_2 = VAR_1;
 VAR_0->s_fs_info = VAR_2->cifs_sb;
 return FUNC_0(VAR_0, ((void*)0));
}
