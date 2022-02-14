
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {scalar_t__ type; int flags; scalar_t__ backing_dev_info; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct mtd_file_info* private_data; TYPE_1__* f_mapping; } ;
struct TYPE_2__ {scalar_t__ backing_dev_info; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct mtd_info*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mtd_info*) ;
 struct mtd_info* FUNC_3 (int *,int) ;
 int FUNC_4 (struct inode*) ;
 struct mtd_file_info* FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct mtd_info*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = FUNC_4(VAR_9);
 int VAR_12 = VAR_11 >> 1;
 int VAR_13 = 0;
 struct mtd_info *VAR_14;
 struct mtd_file_info *VAR_15;

 FUNC_0(VAR_7, "MTD_open\n");

 if (VAR_12 >= VAR_5)
  return -VAR_1;


 if ((VAR_10->f_mode & VAR_3) && (VAR_11 & 1))
  return -VAR_0;

 FUNC_6();
 VAR_14 = FUNC_3(((void*)0), VAR_12);

 if (FUNC_1(VAR_14)) {
  VAR_13 = FUNC_2(VAR_14);
  goto out;
 }

 if (VAR_14->type == VAR_6) {
  FUNC_7(VAR_14);
  VAR_13 = -VAR_1;
  goto out;
 }

 if (VAR_14->backing_dev_info)
  VAR_10->f_mapping->backing_dev_info = VAR_14->backing_dev_info;


 if ((VAR_10->f_mode & VAR_3) && !(VAR_14->flags & VAR_8)) {
  FUNC_7(VAR_14);
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_4);
 if (!VAR_15) {
  FUNC_7(VAR_14);
  VAR_13 = -VAR_2;
  goto out;
 }
 VAR_15->mtd = VAR_14;
 VAR_10->private_data = VAR_15;

out:
 FUNC_8();
 return VAR_13;
}
