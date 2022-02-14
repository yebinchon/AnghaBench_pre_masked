
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp_regs {int op; } ;
struct TYPE_4__ {scalar_t__ format; } ;
struct TYPE_3__ {scalar_t__ format; } ;
struct mdp_blit_req {TYPE_2__ dst; TYPE_1__ src; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct mdp_blit_req *VAR_5, struct mdp_regs *VAR_6)
{
 if (VAR_5->src.format == VAR_5->dst.format)
  return;
 if (FUNC_0(VAR_5->src.format) && FUNC_1(VAR_5->dst.format)) {
  VAR_6->op |= VAR_3 | VAR_2;
 } else if (FUNC_1(VAR_5->src.format) && FUNC_0(VAR_5->dst.format)) {
  VAR_6->op |= VAR_4 | VAR_2;
  if (VAR_5->dst.format == VAR_0)
   VAR_6->op |= VAR_1;
 }
}
