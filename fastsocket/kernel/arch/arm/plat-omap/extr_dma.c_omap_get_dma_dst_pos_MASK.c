
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;

dma_addr_t FUNC_6(int VAR_0)
{
 dma_addr_t VAR_1 = 0;

 if (FUNC_4())
  VAR_1 = FUNC_5(FUNC_2(VAR_0));
 else
  VAR_1 = FUNC_5(FUNC_0(VAR_0));





 if (!FUNC_4() && VAR_1 == 0)
  VAR_1 = FUNC_5(FUNC_0(VAR_0));

 if (FUNC_3())
  VAR_1 |= (FUNC_5(FUNC_1(VAR_0)) << 16);

 return VAR_1;
}
