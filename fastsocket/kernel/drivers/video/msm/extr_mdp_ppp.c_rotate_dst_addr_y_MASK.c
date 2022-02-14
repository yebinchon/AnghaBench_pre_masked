
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp_regs {int dst0; int dst_ystride; int dst1; } ;
struct TYPE_2__ {int h; } ;
struct mdp_blit_req {TYPE_1__ dst_rect; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct mdp_blit_req *VAR_0, struct mdp_regs *VAR_1)
{
 VAR_1->dst0 += (VAR_0->dst_rect.h -
         FUNC_0((uint32_t)16, VAR_0->dst_rect.h)) *
         VAR_1->dst_ystride;
 VAR_1->dst1 += (VAR_0->dst_rect.h -
         FUNC_0((uint32_t)16, VAR_0->dst_rect.h)) *
         VAR_1->dst_ystride;
}
