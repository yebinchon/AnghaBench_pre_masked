
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, size_t VAR_2,
         struct page *VAR_3, dma_addr_t VAR_4)
{
 struct page *VAR_5 = VAR_3 + (FUNC_0(VAR_2) >> VAR_0);

 while (VAR_3 < VAR_5)
  FUNC_1(VAR_3++);
}
