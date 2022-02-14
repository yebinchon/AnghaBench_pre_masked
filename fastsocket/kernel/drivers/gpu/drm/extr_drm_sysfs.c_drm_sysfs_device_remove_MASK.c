
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct drm_minor {TYPE_1__ kdev; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct drm_minor *VAR_0)
{
 if (VAR_0->kdev.parent)
  FUNC_0(&VAR_0->kdev);
 VAR_0->kdev.parent = ((void*)0);
}
