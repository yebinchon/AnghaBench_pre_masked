
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*,int) ;

__attribute__((used)) static struct page *FUNC_9(struct device *VAR_2, size_t VAR_3,
    dma_addr_t *VAR_4, gfp_t VAR_5)
{
 struct page *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;






 VAR_5 &= ~(VAR_1);

 VAR_3 = FUNC_0(VAR_3);
 VAR_9 = FUNC_3(VAR_3);

 VAR_6 = FUNC_2(VAR_5, VAR_9);
 if (!VAR_6)
  return ((void*)0);
 FUNC_8(VAR_6, VAR_9);
 FUNC_4(FUNC_7(FUNC_6(VAR_6)), VAR_3);

 *VAR_4 = FUNC_5(VAR_6);
 VAR_7 = VAR_6 + (VAR_3 >> VAR_0);
 VAR_8 = VAR_6 + (1 << VAR_9);




 while (VAR_7 < VAR_8) {
  FUNC_1(VAR_7);
  VAR_7++;
 }

 return VAR_6;
}
