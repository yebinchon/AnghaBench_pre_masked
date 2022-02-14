
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int * cls; scalar_t__ id; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sys_device*,int ) ;
 int FUNC_4 (struct sys_device*) ;
 int FUNC_5 (struct sys_device*,int ) ;
 int FUNC_6 (struct sys_device*) ;

__attribute__((used)) static int FUNC_7(struct sys_device *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_4 = FUNC_1(&VAR_1)))
  return VAR_4;

 VAR_2->id = 0;
 VAR_2->cls = &VAR_1;

 if ((VAR_4 = FUNC_4(VAR_2)))
  goto class_unregister;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if ((VAR_4 = FUNC_3(VAR_2, VAR_0[VAR_3])))
   goto fail;
 }

 return 0;

fail:
 while (--VAR_3 >= 0)
  FUNC_5(VAR_2, VAR_0[VAR_3]);
 FUNC_6(VAR_2);
class_unregister:
 FUNC_2(&VAR_1);
 return VAR_4;
}
