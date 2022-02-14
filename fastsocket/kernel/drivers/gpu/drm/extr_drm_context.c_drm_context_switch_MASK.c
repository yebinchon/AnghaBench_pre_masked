
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int last_context; int context_flag; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct drm_device * VAR_1, int VAR_2, int VAR_3)
{
 if (FUNC_3(0, &VAR_1->context_flag)) {
  FUNC_1("Reentering -- FIXME\n");
  return -VAR_0;
 }

 FUNC_0("Context switch from %d to %d\n", VAR_2, VAR_3);

 if (VAR_3 == VAR_1->last_context) {
  FUNC_2(0, &VAR_1->context_flag);
  return 0;
 }

 return 0;
}
