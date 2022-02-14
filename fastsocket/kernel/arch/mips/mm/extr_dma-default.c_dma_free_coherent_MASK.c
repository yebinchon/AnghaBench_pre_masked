
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device*,int,void*) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,size_t,int ) ;

void FUNC_6(struct device *VAR_1, size_t VAR_2, void *VAR_3,
 dma_addr_t VAR_4)
{
 unsigned long VAR_5 = (unsigned long) VAR_3;
 int VAR_6 = FUNC_3(VAR_2);

 if (FUNC_1(VAR_1, VAR_6, VAR_3))
  return;

 FUNC_5(VAR_1, VAR_4, VAR_2, VAR_0);

 if (!FUNC_4(VAR_1))
  VAR_5 = FUNC_0(VAR_5);

 FUNC_2(VAR_5, FUNC_3(VAR_2));
}
