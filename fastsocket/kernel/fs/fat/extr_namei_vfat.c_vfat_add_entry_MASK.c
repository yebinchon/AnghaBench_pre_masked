
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct qstr {int name; } ;
struct msdos_dir_slot {int dummy; } ;
struct inode {struct timespec i_atime; struct timespec i_mtime; struct timespec i_ctime; } ;
struct fat_slot_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,struct msdos_dir_slot*,int,struct fat_slot_info*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct msdos_dir_slot*) ;
 struct msdos_dir_slot* FUNC_4 (int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ,unsigned int,int,int,struct timespec*,struct msdos_dir_slot*,int*) ;
 unsigned int FUNC_7 (struct qstr*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct qstr *VAR_5, int VAR_6,
     int VAR_7, struct timespec *VAR_8,
     struct fat_slot_info *VAR_9)
{
 struct msdos_dir_slot *VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_7(VAR_5);
 if (VAR_11 == 0)
  return -VAR_0;

 VAR_10 = FUNC_4(sizeof(*VAR_10) * VAR_3, VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_4, VAR_5->name, VAR_11, VAR_6, VAR_7, VAR_8,
          VAR_10, &VAR_13);
 if (VAR_12)
  goto cleanup;

 VAR_12 = FUNC_1(VAR_4, VAR_10, VAR_13, VAR_9);
 if (VAR_12)
  goto cleanup;


 VAR_4->i_ctime = VAR_4->i_mtime = VAR_4->i_atime = *VAR_8;
 if (FUNC_0(VAR_4))
  (void)FUNC_2(VAR_4);
 else
  FUNC_5(VAR_4);
cleanup:
 FUNC_3(VAR_10);
 return VAR_12;
}
