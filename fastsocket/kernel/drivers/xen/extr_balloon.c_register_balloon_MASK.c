
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int kobj; int * cls; scalar_t__ id; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sys_device*,int ) ;
 int FUNC_4 (struct sys_device*) ;
 int FUNC_5 (struct sys_device*,int ) ;
 int FUNC_6 (struct sys_device*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct sys_device *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(&VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->id = 0;
 VAR_3->cls = &VAR_2;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_2);
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_5 = FUNC_3(VAR_3, VAR_0[VAR_4]);
  if (VAR_5)
   goto fail;
 }

 VAR_5 = FUNC_7(&VAR_3->kobj, &VAR_1);
 if (VAR_5)
  goto fail;

 return 0;

 fail:
 while (--VAR_4 >= 0)
  FUNC_5(VAR_3, VAR_0[VAR_4]);
 FUNC_6(VAR_3);
 FUNC_2(&VAR_2);
 return VAR_5;
}
