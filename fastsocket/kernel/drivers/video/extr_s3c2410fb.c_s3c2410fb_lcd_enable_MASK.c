
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lcdcon1; } ;
struct s3c2410fb_info {scalar_t__ io; TYPE_1__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s3c2410fb_info *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_4);

 if (VAR_3)
  VAR_2->regs.lcdcon1 |= VAR_1;
 else
  VAR_2->regs.lcdcon1 &= ~VAR_1;

 FUNC_2(VAR_2->regs.lcdcon1, VAR_2->io + VAR_0);

 FUNC_0(VAR_4);
}
