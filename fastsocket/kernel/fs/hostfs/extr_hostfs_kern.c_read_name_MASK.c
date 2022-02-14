
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long long i_ino; int i_mode; int i_nlink; unsigned long long i_size; unsigned long long i_blocks; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;


 int FUNC_0 (char*,unsigned long long*,int*,int*,int *,int *,unsigned long long*,int *,int *,int *,int*,unsigned long long*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, char *VAR_1)
{





 int VAR_2;
 int VAR_3, VAR_4, VAR_5;
 unsigned long long VAR_6;
 unsigned long long VAR_7;
 unsigned long long VAR_8;

 VAR_2 = FUNC_0(VAR_1, &VAR_7, &VAR_3, &VAR_4, &VAR_0->i_uid,
   &VAR_0->i_gid, &VAR_6, &VAR_0->i_atime, &VAR_0->i_mtime,
   &VAR_0->i_ctime, &VAR_5, &VAR_8, -1);
 if (VAR_2)
  return VAR_2;

 VAR_0->i_ino = VAR_7;
 VAR_0->i_mode = VAR_3;
 VAR_0->i_nlink = VAR_4;
 VAR_0->i_size = VAR_6;
 VAR_0->i_blocks = VAR_8;
 return 0;
}
