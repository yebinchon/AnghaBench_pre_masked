
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; int ctx_idr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device * VAR_4)
{
 int VAR_5;
 int VAR_6;

again:
 if (FUNC_2(&VAR_4->ctx_idr, VAR_3) == 0) {
  FUNC_0("Out of memory expanding drawable idr\n");
  return -VAR_2;
 }
 FUNC_3(&VAR_4->struct_mutex);
 VAR_6 = FUNC_1(&VAR_4->ctx_idr, ((void*)0),
    VAR_0, &VAR_5);
 FUNC_4(&VAR_4->struct_mutex);
 if (VAR_6 == -VAR_1)
  goto again;
 else if (VAR_6)
  return VAR_6;

 return VAR_5;
}
