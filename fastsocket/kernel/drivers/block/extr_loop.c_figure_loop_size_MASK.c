
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_disk; int lo_backing_file; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct loop_device*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct loop_device *VAR_1)
{
 loff_t VAR_2 = FUNC_0(VAR_1, VAR_1->lo_backing_file);
 sector_t VAR_3 = (sector_t)VAR_2;

 if (FUNC_2((loff_t)VAR_3 != VAR_2))
  return -VAR_0;

 FUNC_1(VAR_1->lo_disk, VAR_3);
 return 0;
}
