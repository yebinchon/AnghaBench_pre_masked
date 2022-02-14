
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int addr; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 () ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 int VAR_2 ;
 unsigned long FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (size_t) ;
 struct vm_struct* FUNC_7 (size_t,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (unsigned long,unsigned long,int ) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (void*) ;
 unsigned long FUNC_12 (void*) ;
 struct page* FUNC_13 (unsigned long) ;

void *FUNC_14(gfp_t VAR_3, size_t VAR_4, dma_addr_t *VAR_5)
{
 struct vm_struct *VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 void *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (FUNC_8())
  FUNC_0();


 VAR_4 = FUNC_1(VAR_4);
 VAR_11 = FUNC_6(VAR_4);

 VAR_7 = FUNC_3(VAR_3, VAR_11);
 if (!VAR_7) {
  FUNC_0();
  return ((void*)0);
 }


 VAR_6 = FUNC_7(VAR_4, VAR_2);
 if (VAR_6 == 0) {
  FUNC_4(VAR_7, VAR_11);
  return ((void*)0);
 }
 VAR_8 = FUNC_2(VAR_6->addr);
 VAR_10 = (void *) VAR_8;


 *VAR_5 = VAR_9 = FUNC_12((void *) VAR_7);




 if (VAR_11 > 0) {
  struct page *VAR_14 = FUNC_13(VAR_7);
  FUNC_10(VAR_14, VAR_11);
 }

 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_4 && VAR_12 == 0; VAR_13 += VAR_1)
  VAR_12 = FUNC_9(VAR_8 + VAR_13, VAR_9 + VAR_13, VAR_0);

 if (VAR_12) {
  FUNC_11((void *) VAR_8);
  return ((void*)0);
 }




 FUNC_5(VAR_8, VAR_8 + VAR_4);

 return VAR_10;
}
