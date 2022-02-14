
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmp_spi {TYPE_1__* master_dev; scalar_t__ clk; } ;
struct TYPE_2__ {void* platform_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*,int ) ;

__attribute__((used)) static void FUNC_5(struct stmp_spi *VAR_0)
{
 void *VAR_1 = VAR_0->master_dev->platform_data;

 if (VAR_0->clk && !FUNC_0(VAR_0->clk)) {
  FUNC_1(VAR_0->clk);
  FUNC_2(VAR_0->clk);
 }
 FUNC_4(VAR_1, FUNC_3(VAR_0->master_dev));
}
