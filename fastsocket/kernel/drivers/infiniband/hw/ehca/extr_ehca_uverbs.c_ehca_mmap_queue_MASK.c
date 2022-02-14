
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct vm_area_struct {scalar_t__ vm_start; int * vm_ops; int * vm_private_data; int vm_flags; } ;
struct page {int dummy; } ;
struct ipz_queue {scalar_t__ queue_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ipz_queue*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 struct page* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct vm_area_struct*,scalar_t__,struct page*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_3, struct ipz_queue *VAR_4,
      u32 *VAR_5)
{
 int VAR_6;
 u64 VAR_7, VAR_8;
 struct page *VAR_9;

 VAR_3->vm_flags |= VAR_1;
 VAR_7 = VAR_3->vm_start;
 for (VAR_8 = 0; VAR_8 < VAR_4->queue_length; VAR_8 += VAR_0) {
  u64 VAR_10 = (u64)FUNC_1(VAR_4, VAR_8);
  VAR_9 = FUNC_3(VAR_10);
  VAR_6 = FUNC_4(VAR_3, VAR_7, VAR_9);
  if (FUNC_2(VAR_6)) {
   FUNC_0("vm_insert_page() failed rc=%i", VAR_6);
   return VAR_6;
  }
  VAR_7 += VAR_0;
 }
 VAR_3->vm_private_data = VAR_5;
 (*VAR_5)++;
 VAR_3->vm_ops = &VAR_2;

 return 0;
}
