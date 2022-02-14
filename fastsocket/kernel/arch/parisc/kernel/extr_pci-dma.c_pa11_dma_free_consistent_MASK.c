
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (unsigned long,size_t) ;
 int FUNC_4 (unsigned long,size_t) ;

__attribute__((used)) static void FUNC_5 (struct device *VAR_1, size_t VAR_2, void *VAR_3, dma_addr_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 VAR_2 = 1 << (VAR_5 + VAR_0);
 FUNC_4((unsigned long)VAR_3, VAR_2);
 FUNC_3((unsigned long)VAR_3, VAR_2);
 FUNC_1((unsigned long)FUNC_0(VAR_4), VAR_5);
}
