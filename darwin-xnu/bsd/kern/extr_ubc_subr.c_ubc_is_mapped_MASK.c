
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_ubcinfo; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int ui_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vnode const*) ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t FUNC_2(const struct vnode *VAR_4, boolean_t *VAR_5)
{
 if (!FUNC_1(VAR_4) || !FUNC_0(VAR_4->v_ubcinfo->ui_flags, VAR_2))
  return VAR_0;
 if (VAR_5)
  *VAR_5 = FUNC_0(VAR_4->v_ubcinfo->ui_flags, VAR_3);
 return VAR_1;
}
