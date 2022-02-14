
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,size_t,void*,unsigned long) ;
 scalar_t__ FUNC_3 (struct device*,int,void*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;

void FUNC_8(struct device *VAR_1, size_t VAR_2,
    void *VAR_3, dma_addr_t VAR_4)
{
 int VAR_5 = FUNC_4(VAR_2);
 unsigned long VAR_6 = VAR_4 >> VAR_0;
 int VAR_7;

 FUNC_0(FUNC_6());

 if (FUNC_3(VAR_1, VAR_5, VAR_3))
  return;

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 for (VAR_7 = 0; VAR_7 < (1 << VAR_5); VAR_7++)
  FUNC_1(FUNC_7(VAR_6 + VAR_7), 0);
 FUNC_5(VAR_3);
}
