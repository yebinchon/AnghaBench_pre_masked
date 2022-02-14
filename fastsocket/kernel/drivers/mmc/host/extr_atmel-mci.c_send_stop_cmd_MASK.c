
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int stop; } ;
struct atmel_mci {int stop_cmdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_mci*,int ,int ) ;
 int FUNC_1 (struct atmel_mci*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct atmel_mci *VAR_2, struct mmc_data *VAR_3)
{
 FUNC_0(VAR_2, VAR_3->stop, VAR_2->stop_cmdr);
 FUNC_1(VAR_2, VAR_0, VAR_1);
}
