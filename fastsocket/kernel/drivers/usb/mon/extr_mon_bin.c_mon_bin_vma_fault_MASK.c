
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; struct page* page; } ;
struct vm_area_struct {struct mon_reader_bin* vm_private_data; } ;
struct page {int dummy; } ;
struct mon_reader_bin {unsigned long b_size; TYPE_1__* b_vec; } ;
struct TYPE_2__ {struct page* pg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct mon_reader_bin *VAR_5 = VAR_3->vm_private_data;
 unsigned long VAR_6, VAR_7;
 struct page *VAR_8;

 VAR_6 = VAR_4->pgoff << VAR_1;
 if (VAR_6 >= VAR_5->b_size)
  return VAR_2;
 VAR_7 = VAR_6 / VAR_0;
 VAR_8 = VAR_5->b_vec[VAR_7].pg;
 FUNC_0(VAR_8);
 VAR_4->page = VAR_8;
 return 0;
}
