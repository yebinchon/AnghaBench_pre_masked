
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct gendisk {int disk_name; } ;
struct dm_table {int integrity_supported; int md; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct gendisk*,struct gendisk*) ;
 scalar_t__ FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*,int *) ;
 int FUNC_4 (int ) ;
 struct gendisk* FUNC_5 (struct mapped_device*) ;
 struct gendisk* FUNC_6 (struct dm_table*,int) ;

__attribute__((used)) static int FUNC_7(struct dm_table *VAR_0, struct mapped_device *VAR_1)
{
 struct gendisk *VAR_2 = ((void*)0);

 VAR_2 = FUNC_6(VAR_0, 0);
 if (!VAR_2)
  return 0;

 if (!FUNC_2(FUNC_5(VAR_1))) {
  VAR_0->integrity_supported = 1;
  return FUNC_3(FUNC_5(VAR_1), ((void*)0));
 }





 if (FUNC_2(VAR_2) &&
     FUNC_1(FUNC_5(VAR_1), VAR_2) < 0) {
  FUNC_0("%s: conflict with existing integrity profile: "
         "%s profile mismatch",
         FUNC_4(VAR_0->md),
         VAR_2->disk_name);
  return 1;
 }


 VAR_0->integrity_supported = 1;
 return 0;
}
