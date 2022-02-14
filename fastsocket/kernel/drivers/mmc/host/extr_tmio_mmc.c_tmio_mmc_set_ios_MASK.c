
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct mmc_ios {int power_mode; int bus_width; int clock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_3 (struct tmio_mmc_host*) ;
 int FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (struct tmio_mmc_host*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct tmio_mmc_host *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->clock)
  FUNC_5(VAR_4, VAR_3->clock);


 switch (VAR_3->power_mode) {
 case 130:
  FUNC_1(VAR_4, VAR_0, 0x00);
  FUNC_4(VAR_4);
  break;
 case 129:

  FUNC_1(VAR_4, VAR_0, 0x02);
  break;
 case 128:
  FUNC_3(VAR_4);
  break;
 }

 switch (VAR_3->bus_width) {
 case 132:
  FUNC_2(VAR_4, VAR_1, 0x80e0);
 break;
 case 131:
  FUNC_2(VAR_4, VAR_1, 0x00e0);
 break;
 }


 FUNC_6(140);
}
