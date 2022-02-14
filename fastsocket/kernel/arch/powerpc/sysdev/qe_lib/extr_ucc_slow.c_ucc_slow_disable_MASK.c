
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ucc_slow_private {scalar_t__ enabled_rx; scalar_t__ enabled_tx; struct ucc_slow* us_regs; } ;
struct ucc_slow {int gumr_l; } ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct ucc_slow_private * VAR_4, enum comm_dir VAR_5)
{
 struct ucc_slow *VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_4->us_regs;


 VAR_7 = FUNC_0(&VAR_6->gumr_l);
 if (VAR_5 & VAR_1) {
  VAR_7 &= ~VAR_3;
  VAR_4->enabled_tx = 0;
 }
 if (VAR_5 & VAR_0) {
  VAR_7 &= ~VAR_2;
  VAR_4->enabled_rx = 0;
 }
 FUNC_1(&VAR_6->gumr_l, VAR_7);
}
