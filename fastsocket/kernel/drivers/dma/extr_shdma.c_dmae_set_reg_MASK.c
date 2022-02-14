
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_dmae_regs {int sar; int dar; int tcr; } ;
struct sh_dmae_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_dmae_chan*) ;
 int FUNC_1 (struct sh_dmae_chan*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_dmae_chan *VAR_3, struct sh_dmae_regs VAR_4)
{
 FUNC_1(VAR_3, VAR_4.sar, VAR_1);
 FUNC_1(VAR_3, VAR_4.dar, VAR_0);
 FUNC_1(VAR_3,
  (VAR_4.tcr >> FUNC_0(VAR_3)), VAR_2);
}
