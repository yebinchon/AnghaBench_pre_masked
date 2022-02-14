
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*,unsigned long) ;
 struct page* FUNC_1 (int,unsigned long) ;
 scalar_t__ VAR_6 ;
 void* FUNC_2 (struct device*,size_t,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct device*,int ,size_t,int ,unsigned long) ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_5 (size_t) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void *
FUNC_8(struct device *VAR_8, size_t VAR_9, dma_addr_t *VAR_10,
      gfp_t VAR_11)
{
 dma_addr_t VAR_12;
 unsigned long VAR_13;
 struct page *VAR_14;

 if (VAR_7 && !(VAR_11 & VAR_1)) {
  VAR_11 &= ~(VAR_2 | VAR_4 | VAR_3);
  VAR_14 = FUNC_1(VAR_11 | VAR_5, FUNC_5(VAR_9));
  if (!VAR_14)
   return ((void*)0);

  VAR_13 = (1UL << FUNC_5(VAR_9)) - 1;
  VAR_12 = FUNC_3(VAR_8, FUNC_7(VAR_14), VAR_9,
         VAR_0, VAR_13);

  FUNC_4();
  if (VAR_12 != VAR_6) {
   *VAR_10 = VAR_12;
   return FUNC_6(VAR_14);
  }
  FUNC_0(VAR_14, FUNC_5(VAR_9));
 } else
  return FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);

 return ((void*)0);
}
