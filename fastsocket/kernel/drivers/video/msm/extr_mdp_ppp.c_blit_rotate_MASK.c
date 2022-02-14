
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp_regs {int op; } ;
struct mdp_blit_req {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mdp_blit_req*,struct mdp_regs*) ;
 int FUNC_1 (struct mdp_blit_req*,struct mdp_regs*) ;

__attribute__((used)) static void FUNC_2(struct mdp_blit_req *VAR_8,
   struct mdp_regs *VAR_9)
{
 if (VAR_8->flags == VAR_3)
  return;

 VAR_9->op |= VAR_7;
 if ((VAR_8->flags & VAR_2 || VAR_8->flags & VAR_0) &&
     !(VAR_8->flags & VAR_2 && VAR_8->flags & VAR_0))
  FUNC_0(VAR_8, VAR_9);
 if (VAR_8->flags & VAR_2)
  VAR_9->op |= VAR_6;
 if (VAR_8->flags & VAR_1) {
  VAR_9->op |= VAR_5;
  FUNC_1(VAR_8, VAR_9);
 }
 if (VAR_8->flags & VAR_0)
  VAR_9->op |= VAR_4;
}
