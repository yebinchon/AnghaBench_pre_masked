
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ecryptfs_inode_info {int lower_file_mutex; TYPE_1__* lower_file; } ;
typedef int ssize_t ;
typedef int mm_segment_t ;
typedef int loff_t ;
struct TYPE_2__ {int f_pos; } ;


 int FUNC_0 (int) ;
 struct ecryptfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,size_t,int *) ;

int FUNC_8(char *VAR_0, loff_t VAR_1, size_t VAR_2,
   struct inode *VAR_3)
{
 struct ecryptfs_inode_info *VAR_4 =
  FUNC_1(VAR_3);
 mm_segment_t VAR_5;
 ssize_t VAR_6;

 FUNC_4(&VAR_4->lower_file_mutex);
 FUNC_0(!VAR_4->lower_file);
 VAR_4->lower_file->f_pos = VAR_1;
 VAR_5 = FUNC_3();
 FUNC_6(FUNC_2());
 VAR_6 = FUNC_7(VAR_4->lower_file, VAR_0, VAR_2,
        &VAR_4->lower_file->f_pos);
 FUNC_6(VAR_5);
 FUNC_5(&VAR_4->lower_file_mutex);
 return VAR_6;
}
