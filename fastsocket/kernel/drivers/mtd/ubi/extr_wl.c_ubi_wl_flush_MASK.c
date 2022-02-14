
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {scalar_t__ works_count; int work_sem; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ubi_device *VAR_0)
{
 int VAR_1;





 FUNC_0("flush (%d pending works)", VAR_0->works_count);
 while (VAR_0->works_count) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   return VAR_1;
 }





 FUNC_2(&VAR_0->work_sem);
 FUNC_3(&VAR_0->work_sem);





 while (VAR_0->works_count) {
  FUNC_0("flush more (%d pending works)", VAR_0->works_count);
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
