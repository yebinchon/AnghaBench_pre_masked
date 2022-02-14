
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ehca_mr {int fmr_max_pages; int fmr_page_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;

int FUNC_1(struct ehca_mr *VAR_1,
        u64 *VAR_2,
        int VAR_3)
{
 u32 VAR_4;
 u64 *VAR_5;

 if ((VAR_3 == 0) || (VAR_3 > VAR_1->fmr_max_pages)) {
  FUNC_0("bad list_len, list_len=%x "
        "e_fmr->fmr_max_pages=%x fmr=%p",
        VAR_3, VAR_1->fmr_max_pages, VAR_1);
  return -VAR_0;
 }


 VAR_5 = VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (*VAR_5 % VAR_1->fmr_page_size) {
   FUNC_0("bad page, i=%x *page=%llx page=%p fmr=%p "
         "fmr_page_size=%x", VAR_4, *VAR_5, VAR_5, VAR_1,
         VAR_1->fmr_page_size);
   return -VAR_0;
  }
  VAR_5++;
 }

 return 0;
}
