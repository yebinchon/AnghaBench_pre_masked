
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxaohci_platform_data {int (* exit ) (struct device*) ;} ;
struct pxa27x_ohci {int clk; scalar_t__ mmio_base; } ;
struct device {struct pxaohci_platform_data* platform_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa27x_ohci*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct pxa27x_ohci *VAR_1, struct device *VAR_2)
{
 struct pxaohci_platform_data *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_2->platform_data;

 if (VAR_3->exit)
  VAR_3->exit(VAR_2);

 FUNC_3(VAR_1);


 VAR_4 = FUNC_0(VAR_1->mmio_base + VAR_0) | 0x01;
 FUNC_1(VAR_4, VAR_1->mmio_base + VAR_0);
 FUNC_5(10);

 FUNC_2(VAR_1->clk);
}
