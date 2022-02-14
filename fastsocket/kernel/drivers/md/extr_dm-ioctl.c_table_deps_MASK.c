
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mapped_device*,struct dm_ioctl*) ;
 struct dm_table* FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct dm_table*) ;
 struct mapped_device* FUNC_4 (struct dm_ioctl*) ;
 int FUNC_5 (struct dm_table*,struct dm_ioctl*,size_t) ;

__attribute__((used)) static int FUNC_6(struct dm_ioctl *VAR_1, size_t VAR_2)
{
 struct mapped_device *VAR_3;
 struct dm_table *VAR_4;

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_1);

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_5(VAR_4, VAR_1, VAR_2);
  FUNC_3(VAR_4);
 }

 FUNC_2(VAR_3);

 return 0;
}
