
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; int private_flags; } ;



__attribute__((used)) static inline void
FUNC_0(struct drm_display_mode *VAR_0,
    int VAR_1)
{
 VAR_0->clock *= VAR_1;
 VAR_0->private_flags |= VAR_1;
}
