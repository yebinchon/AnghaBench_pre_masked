
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_dev {scalar_t__ addr; } ;
struct mmc_command {int* resp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmc_command *VAR_1, struct tifm_dev *VAR_2)
{
 VAR_1->resp[0] = (FUNC_0(VAR_2->addr + VAR_0 + 0x1c) << 16)
         | FUNC_0(VAR_2->addr + VAR_0 + 0x18);
 VAR_1->resp[1] = (FUNC_0(VAR_2->addr + VAR_0 + 0x14) << 16)
         | FUNC_0(VAR_2->addr + VAR_0 + 0x10);
 VAR_1->resp[2] = (FUNC_0(VAR_2->addr + VAR_0 + 0x0c) << 16)
         | FUNC_0(VAR_2->addr + VAR_0 + 0x08);
 VAR_1->resp[3] = (FUNC_0(VAR_2->addr + VAR_0 + 0x04) << 16)
         | FUNC_0(VAR_2->addr + VAR_0 + 0x00);
}
