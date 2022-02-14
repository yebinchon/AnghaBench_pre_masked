
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr364xx_camera {int lock; scalar_t__ resources; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct zr364xx_camera *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 VAR_0->resources = 0;
 FUNC_2(&VAR_0->lock);
 FUNC_0("res: put\n");
}
