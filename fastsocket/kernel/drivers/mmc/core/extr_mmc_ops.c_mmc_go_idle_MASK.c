
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {scalar_t__ use_spi_crc; } ;
struct mmc_command {int flags; scalar_t__ arg; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ) ;
 int FUNC_4 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_5(struct mmc_host *VAR_6)
{
 int VAR_7;
 struct mmc_command VAR_8;
 if (!FUNC_2(VAR_6)) {
  FUNC_3(VAR_6, VAR_2);
  FUNC_1(1);
 }

 FUNC_0(&VAR_8, 0, sizeof(struct mmc_command));

 VAR_8.opcode = VAR_3;
 VAR_8.arg = 0;
 VAR_8.flags = VAR_5 | VAR_4 | VAR_0;

 VAR_7 = FUNC_4(VAR_6, &VAR_8, 0);

 FUNC_1(1);

 if (!FUNC_2(VAR_6)) {
  FUNC_3(VAR_6, VAR_1);
  FUNC_1(1);
 }

 VAR_6->use_spi_crc = 0;

 return VAR_7;
}
