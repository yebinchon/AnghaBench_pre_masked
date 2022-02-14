
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct mtd_info {scalar_t__ type; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct file {struct mtd_file_info* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 return VAR_5->vm_flags & VAR_3 ? 0 : -VAR_0;

}
