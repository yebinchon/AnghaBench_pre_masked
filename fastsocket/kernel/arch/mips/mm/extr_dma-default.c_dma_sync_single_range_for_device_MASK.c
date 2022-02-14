
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,size_t,int) ;
 unsigned long FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

void FUNC_5(struct device *VAR_1, dma_addr_t VAR_2,
 unsigned long VAR_3, size_t VAR_4, enum dma_data_direction VAR_5)
{
 FUNC_0(VAR_5 == VAR_0);

 FUNC_4(VAR_1);
 if (!FUNC_3(VAR_1)) {
  unsigned long VAR_6;

  VAR_6 = FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_6 + VAR_3, VAR_4, VAR_5);
 }
}
