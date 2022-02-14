
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_cnt; scalar_t__ start_page; } ;
union dm_mem_page_range {TYPE_1__ finfo; } ;
struct page {int dummy; } ;
struct hv_dynmem_device {int num_pages_ballooned; } ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hv_dynmem_device *VAR_0,
    union dm_mem_page_range *VAR_1)
{
 int VAR_2 = VAR_1->finfo.page_cnt;
 __u64 VAR_3 = VAR_1->finfo.start_page;
 struct page *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_5 + VAR_3);
  FUNC_0(VAR_4);
  VAR_0->num_pages_ballooned--;
 }
}
