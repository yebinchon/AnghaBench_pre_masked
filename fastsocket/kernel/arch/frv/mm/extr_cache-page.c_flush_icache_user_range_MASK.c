
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;

void FUNC_6(struct vm_area_struct *VAR_2, struct page *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 void *VAR_7;

 VAR_6 = FUNC_0(2);

 VAR_7 = FUNC_4(VAR_3, VAR_1);

 VAR_4 = (VAR_4 & ~VAR_0) | (unsigned long) VAR_7;
 FUNC_3(VAR_4, VAR_4 + VAR_5);

 FUNC_5(VAR_7, VAR_1);

 if (VAR_6) {
  FUNC_1(2, VAR_6);
  FUNC_2(2, VAR_6);
 }

}
