
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int event_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mapped_device*,struct dm_ioctl*) ;
 struct dm_table* FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct dm_table*) ;
 scalar_t__ FUNC_4 (struct mapped_device*,int ) ;
 struct mapped_device* FUNC_5 (struct dm_ioctl*) ;
 int FUNC_6 (struct dm_table*,struct dm_ioctl*,size_t) ;

__attribute__((used)) static int FUNC_7(struct dm_ioctl *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 struct mapped_device *VAR_5;
 struct dm_table *VAR_6;

 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5)
  return -VAR_0;




 if (FUNC_4(VAR_5, VAR_2->event_nr)) {
  VAR_4 = -VAR_1;
  goto out;
 }






 FUNC_0(VAR_5, VAR_2);

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_6(VAR_6, VAR_2, VAR_3);
  FUNC_3(VAR_6);
 }

out:
 FUNC_2(VAR_5);

 return VAR_4;
}
