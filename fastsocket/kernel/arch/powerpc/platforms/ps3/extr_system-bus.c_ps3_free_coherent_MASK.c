
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int d_region; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (size_t) ;
 struct ps3_system_bus_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, size_t VAR_1, void *VAR_2,
 dma_addr_t VAR_3)
{
 struct ps3_system_bus_device *VAR_4 = FUNC_2(VAR_0);

 FUNC_3(VAR_4->d_region, VAR_3, VAR_1);
 FUNC_0((unsigned long)VAR_2, FUNC_1(VAR_1));
}
