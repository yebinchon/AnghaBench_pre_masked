
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {scalar_t__ type; int index; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_minor*) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_minor*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct drm_minor*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct drm_minor*) ;

int FUNC_6(struct drm_minor **VAR_3)
{
 struct drm_minor *VAR_4 = *VAR_3;

 FUNC_0("release secondary minor %d\n", VAR_4->index);

 if (VAR_4->type == VAR_0)
  FUNC_2(VAR_4, VAR_2);




 FUNC_3(VAR_4);

 FUNC_4(&VAR_1, VAR_4->index);

 FUNC_5(VAR_4);
 *VAR_3 = ((void*)0);
 return 0;
}
