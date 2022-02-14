
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mxc_nand_host {scalar_t__ regs; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mxc_nand_host*,int ,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxc_nand_host *VAR_5, uint16_t VAR_6, int VAR_7)
{
 FUNC_0(VAR_0, "send_cmd(host, 0x%x, %d)\n", VAR_6, VAR_7);

 FUNC_2(VAR_6, VAR_5->regs + VAR_3);
 FUNC_2(VAR_1, VAR_5->regs + VAR_2);


 FUNC_1(VAR_5, VAR_4, VAR_6, VAR_7);
}
