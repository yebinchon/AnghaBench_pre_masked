
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {unsigned int i_size; struct super_block* i_sb; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {unsigned int f_pos; TYPE_2__ f_path; } ;
struct cramfs_inode {int namelen; int mode; } ;
typedef int mode_t ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,int,unsigned int,int ,int) ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cramfs_inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct cramfs_inode* FUNC_2 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, void *VAR_7, filldir_t VAR_8)
{
 struct inode *VAR_9 = VAR_6->f_path.dentry->d_inode;
 struct super_block *VAR_10 = VAR_9->i_sb;
 char *VAR_11;
 unsigned int VAR_12;
 int VAR_13;


 VAR_12 = VAR_6->f_pos;
 if (VAR_12 >= VAR_9->i_size)
  return 0;

 if (VAR_12 & 3)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_0, VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_13 = 0;
 while (VAR_12 < VAR_9->i_size) {
  struct cramfs_inode *VAR_14;
  unsigned long VAR_15;
  char *VAR_16;
  ino_t VAR_17;
  mode_t VAR_18;
  int VAR_19, VAR_20;

  FUNC_6(&VAR_5);
  VAR_14 = FUNC_2(VAR_10, FUNC_1(VAR_9) + VAR_12, sizeof(*VAR_14)+VAR_0);
  VAR_16 = (char *)(VAR_14+1);






  VAR_19 = VAR_14->namelen << 2;
  FUNC_5(VAR_11, VAR_16, VAR_19);
  VAR_17 = FUNC_0(VAR_14);
  VAR_18 = VAR_14->mode;
  FUNC_7(&VAR_5);
  VAR_15 = VAR_12 + sizeof(*VAR_14) + VAR_19;
  for (;;) {
   if (!VAR_19) {
    FUNC_3(VAR_11);
    return -VAR_2;
   }
   if (VAR_11[VAR_19-1])
    break;
   VAR_19--;
  }
  VAR_20 = VAR_8(VAR_7, VAR_11, VAR_19, VAR_12, VAR_17, VAR_18 >> 12);
  if (VAR_20)
   break;

  VAR_12 = VAR_15;
  VAR_6->f_pos = VAR_12;
  VAR_13++;
 }
 FUNC_3(VAR_11);
 return 0;
}
