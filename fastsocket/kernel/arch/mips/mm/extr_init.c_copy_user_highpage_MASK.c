
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned long) ;
 void* FUNC_3 (struct page*,int ) ;
 void* FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 () ;

void FUNC_10(struct page *VAR_5, struct page *VAR_6,
 unsigned long VAR_7, struct vm_area_struct *VAR_8)
{
 void *VAR_9, *VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_1);
 if (VAR_3 &&
     FUNC_7(VAR_6) && !FUNC_0(VAR_6)) {
  VAR_9 = FUNC_4(VAR_6, VAR_7);
  FUNC_1(VAR_10, VAR_9);
  FUNC_6();
 } else {
  VAR_9 = FUNC_3(VAR_6, VAR_0);
  FUNC_1(VAR_10, VAR_9);
  FUNC_5(VAR_9, VAR_0);
 }
 if ((!VAR_4) ||
     FUNC_8((unsigned long)VAR_10, VAR_7 & VAR_2))
  FUNC_2((unsigned long)VAR_10);
 FUNC_5(VAR_10, VAR_1);

 FUNC_9();
}
