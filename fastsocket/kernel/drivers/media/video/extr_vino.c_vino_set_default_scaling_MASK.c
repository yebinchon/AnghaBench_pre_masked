
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct vino_channel_settings {TYPE_1__ clipping; } ;


 int FUNC_0 (struct vino_channel_settings*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct vino_channel_settings *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->clipping.right - VAR_0->clipping.left,
    VAR_0->clipping.bottom - VAR_0->clipping.top);
}
