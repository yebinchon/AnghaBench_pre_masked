
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int * private_data; } ;
typedef int drive_info_struct ;



__attribute__((used)) static inline drive_info_struct *FUNC_0(struct gendisk *VAR_0)
{
 return VAR_0->private_data;
}
