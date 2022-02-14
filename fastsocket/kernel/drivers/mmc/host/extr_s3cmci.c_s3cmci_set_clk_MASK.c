
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3cmci_host {int real_rate; int clk_rate; int clk_div; int prescaler; scalar_t__ base; } ;
struct mmc_ios {scalar_t__ clock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3cmci_host *VAR_1, struct mmc_ios *VAR_2)
{
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < 255; VAR_3++) {
  VAR_1->real_rate = VAR_1->clk_rate / (VAR_1->clk_div*(VAR_3+1));

  if (VAR_1->real_rate <= VAR_2->clock)
   break;
 }

 if (VAR_3 > 255)
  VAR_3 = 255;

 VAR_1->prescaler = VAR_3;
 FUNC_0(VAR_1->prescaler, VAR_1->base + VAR_0);


 if (VAR_2->clock == 0)
  VAR_1->real_rate = 0;
}
