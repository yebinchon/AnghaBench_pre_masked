
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mxc_nand_host {scalar_t__ regs; int pagesize_2k; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mxc_nand_host*,int ,int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mxc_nand_host *VAR_7, uint8_t VAR_8,
   int VAR_9)
{
 FUNC_0(VAR_0, "send_prog_page (%d)\n", VAR_9);


 FUNC_3(VAR_8, VAR_7->regs + VAR_1);


 if (!VAR_7->pagesize_2k) {
  uint16_t VAR_10 = FUNC_1(VAR_7->regs + VAR_2);
  if (VAR_9)
   VAR_10 |= VAR_5;
  else
   VAR_10 &= ~(VAR_5);
  FUNC_3(VAR_10, VAR_7->regs + VAR_2);
 }

 FUNC_3(VAR_4, VAR_7->regs + VAR_3);


 FUNC_2(VAR_7, VAR_6, VAR_9, 1);
}
