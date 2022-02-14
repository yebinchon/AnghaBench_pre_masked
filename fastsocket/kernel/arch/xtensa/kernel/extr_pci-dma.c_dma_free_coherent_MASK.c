
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (long,int ) ;
 int FUNC_2 (size_t) ;

void FUNC_3(struct device *VAR_3, size_t VAR_4,
    void *VAR_5, dma_addr_t VAR_6)
{
 long VAR_7=(long)VAR_5+VAR_1-VAR_0;

 if (VAR_7 < 0 || VAR_7 >= VAR_2)
  FUNC_0();

 FUNC_1(VAR_7, FUNC_2(VAR_4));
}
