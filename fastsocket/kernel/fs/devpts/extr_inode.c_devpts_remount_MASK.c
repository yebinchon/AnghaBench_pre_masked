
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pts_mount_opts {int dummy; } ;
struct pts_fs_info {struct pts_mount_opts mount_opts; } ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,struct pts_mount_opts*) ;
 int FUNC_2 (struct pts_fs_info*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, int *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct pts_fs_info *VAR_5 = FUNC_0(VAR_1);
 struct pts_mount_opts *VAR_6 = &VAR_5->mount_opts;

 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_6);







 FUNC_2(VAR_5);

 return VAR_4;
}
