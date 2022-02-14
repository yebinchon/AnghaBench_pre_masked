
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vml_info {int num_areas; int * vram; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vml_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_areas; ++VAR_1) {
  FUNC_0(&VAR_0->vram[VAR_1]);
 }
 VAR_0->num_areas = 0;
}
