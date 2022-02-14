
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct tgt_ring {int * tr_pages; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,struct page*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_2, unsigned long VAR_3,
      struct tgt_ring *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct page *VAR_7 = FUNC_0(VAR_4->tr_pages[VAR_5]);
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_7);
  if (VAR_6)
   return VAR_6;
  VAR_3 += VAR_0;
 }

 return 0;
}
