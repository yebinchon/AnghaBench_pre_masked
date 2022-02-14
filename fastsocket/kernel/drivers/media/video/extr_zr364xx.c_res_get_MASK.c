
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr364xx_camera {int resources; int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct zr364xx_camera *VAR_0)
{

 FUNC_1(&VAR_0->lock);
 if (VAR_0->resources) {

  FUNC_2(&VAR_0->lock);
  return 0;
 }

 VAR_0->resources = 1;
 FUNC_0("res: get\n");
 FUNC_2(&VAR_0->lock);
 return 1;
}
