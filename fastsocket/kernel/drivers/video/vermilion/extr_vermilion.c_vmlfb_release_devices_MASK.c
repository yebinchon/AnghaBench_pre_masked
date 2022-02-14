
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vml_par {int vdc; int gpu; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct vml_par *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount)) {
  FUNC_2(VAR_0->vdc, ((void*)0));
  FUNC_1(VAR_0->gpu);
  FUNC_1(VAR_0->vdc);
 }
}
