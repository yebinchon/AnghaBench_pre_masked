
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_fast_reg_page_list {int max_page_list_len; struct ib_device* device; } ;
struct ib_device {struct ib_fast_reg_page_list* (* alloc_fast_reg_page_list ) (struct ib_device*,int) ;} ;


 int VAR_0 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_fast_reg_page_list*) ;
 struct ib_fast_reg_page_list* FUNC_2 (struct ib_device*,int) ;

struct ib_fast_reg_page_list *FUNC_3(struct ib_device *VAR_1,
         int VAR_2)
{
 struct ib_fast_reg_page_list *VAR_3;

 if (!VAR_1->alloc_fast_reg_page_list)
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1->alloc_fast_reg_page_list(VAR_1, VAR_2);

 if (!FUNC_1(VAR_3)) {
  VAR_3->device = VAR_1;
  VAR_3->max_page_list_len = VAR_2;
 }

 return VAR_3;
}
