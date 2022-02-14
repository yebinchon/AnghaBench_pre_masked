
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_fault_page {scalar_t__ count; struct kmmio_fault_page* release_next; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct kmmio_fault_page*) ;
 struct kmmio_fault_page* FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1,
    struct kmmio_fault_page **VAR_2)
{
 struct kmmio_fault_page *VAR_3;

 VAR_1 &= VAR_0;
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return;

 VAR_3->count--;
 FUNC_0(VAR_3->count < 0);
 if (!VAR_3->count) {
  FUNC_1(VAR_3);
  VAR_3->release_next = *VAR_2;
  *VAR_2 = VAR_3;
 }
}
