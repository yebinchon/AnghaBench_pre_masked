
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {unsigned short f_flags; struct coda_file_info* private_data; } ;
struct coda_file_info {struct file* cfi_container; scalar_t__ cfi_mapcount; int cfi_magic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_1 (unsigned short) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct coda_file_info*) ;
 struct coda_file_info* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,unsigned short,struct file**) ;

int FUNC_8(struct inode *VAR_7, struct file *VAR_8)
{
 struct file *VAR_9 = ((void*)0);
 int VAR_10;
 unsigned short VAR_11 = VAR_8->f_flags & (~VAR_5);
 unsigned short VAR_12 = FUNC_1(VAR_11);
 struct coda_file_info *VAR_13;

 VAR_13 = FUNC_4(sizeof(struct coda_file_info), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_5();

 VAR_10 = FUNC_7(VAR_7->i_sb, FUNC_2(VAR_7), VAR_12,
      &VAR_9);
 if (!VAR_9)
  VAR_10 = -VAR_1;

 if (VAR_10) {
  FUNC_3(VAR_13);
  FUNC_6();
  return VAR_10;
 }

 VAR_9->f_flags |= VAR_8->f_flags & (VAR_4 | VAR_6);

 VAR_13->cfi_magic = VAR_0;
 VAR_13->cfi_mapcount = 0;
 VAR_13->cfi_container = VAR_9;

 FUNC_0(VAR_8->private_data != ((void*)0));
 VAR_8->private_data = VAR_13;

 FUNC_6();
 return 0;
}
