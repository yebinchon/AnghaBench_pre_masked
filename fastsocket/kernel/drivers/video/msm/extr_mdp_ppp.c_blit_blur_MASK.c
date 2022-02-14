
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp_regs {int op; } ;
struct mdp_info {int dummy; } ;
struct mdp_blit_req {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mdp_info const*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(const struct mdp_info *VAR_7, struct mdp_blit_req *VAR_8,
        struct mdp_regs *VAR_9)
{
 if (!(VAR_8->flags & VAR_0))
  return;

 if (!(VAR_4 == VAR_1 &&
       VAR_5 == VAR_1)) {
  FUNC_0(VAR_7, VAR_6, 128);
  VAR_4 = VAR_1;
  VAR_5 = VAR_1;
 }

 VAR_9->op |= (VAR_3 | VAR_2);
}
