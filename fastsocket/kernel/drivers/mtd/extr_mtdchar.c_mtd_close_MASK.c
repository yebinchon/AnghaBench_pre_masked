
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* sync ) (struct mtd_info*) ;} ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct mtd_file_info* private_data; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mtd_file_info*) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct mtd_file_info *VAR_4 = VAR_3->private_data;
 struct mtd_info *VAR_5 = VAR_4->mtd;

 FUNC_0(VAR_1, "MTD_close\n");


 if ((VAR_3->f_mode & VAR_0) && VAR_5->sync)
  VAR_5->sync(VAR_5);

 FUNC_2(VAR_5);
 VAR_3->private_data = ((void*)0);
 FUNC_1(VAR_4);

 return 0;
}
