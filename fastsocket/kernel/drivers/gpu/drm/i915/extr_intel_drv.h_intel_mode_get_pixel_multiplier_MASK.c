
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int private_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(const struct drm_display_mode *VAR_2)
{
 return (VAR_2->private_flags & VAR_0) >> VAR_1;
}
