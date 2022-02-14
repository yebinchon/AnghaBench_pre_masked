
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int smem_len; int smem_start; } ;
struct TYPE_4__ {TYPE_1__ fix; int screen_base; } ;
struct clcd_fb {TYPE_2__ fb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clcd_fb *VAR_0)
{
 FUNC_0(VAR_0->fb.screen_base);
 FUNC_1(VAR_0->fb.fix.smem_start, VAR_0->fb.fix.smem_len);
}
