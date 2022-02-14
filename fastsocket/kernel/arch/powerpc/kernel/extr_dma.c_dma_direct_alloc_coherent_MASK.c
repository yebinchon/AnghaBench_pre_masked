
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (struct device*,size_t,scalar_t__*,int ) ;
 struct page* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (void*,int ,size_t) ;
 void* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (void*) ;

void *FUNC_8(struct device *VAR_1, size_t VAR_2,
    dma_addr_t *VAR_3, gfp_t VAR_4)
{
 void *VAR_5;







 struct page *VAR_6;
 int VAR_7 = FUNC_2(VAR_1);


 VAR_4 &= ~(VAR_0);

 VAR_6 = FUNC_1(VAR_7, VAR_4, FUNC_4(VAR_2));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_6(VAR_6);
 FUNC_5(VAR_5, 0, VAR_2);
 *VAR_3 = FUNC_7(VAR_5) + FUNC_3(VAR_1);

 return VAR_5;

}
