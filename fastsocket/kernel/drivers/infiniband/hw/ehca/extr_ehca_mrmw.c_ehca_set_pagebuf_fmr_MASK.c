
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int* page_list; int next_listelem; int fmr_pgsize; } ;
struct TYPE_4__ {TYPE_1__ fmr; } ;
struct ehca_mr_pginfo {int hwpage_size; int next_hwpage; TYPE_2__ u; scalar_t__ kpage_cnt; int hwpage_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ehca_mr_pginfo *VAR_2,
    u32 VAR_3, u64 *VAR_4)
{
 int VAR_5 = 0;
 u64 *VAR_6;
 u32 VAR_7;


 VAR_6 = VAR_2->u.fmr.page_list + VAR_2->u.fmr.next_listelem;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  *VAR_4 = FUNC_1((*VAR_6 & ~(VAR_2->hwpage_size - 1)) +
         VAR_2->next_hwpage * VAR_2->hwpage_size);
  if ( !(*VAR_4) ) {
   FUNC_0("*fmrlist=%llx fmrlist=%p "
         "next_listelem=%llx next_hwpage=%llx",
         *VAR_6, VAR_6,
         VAR_2->u.fmr.next_listelem,
         VAR_2->next_hwpage);
   return -VAR_0;
  }
  (VAR_2->hwpage_cnt)++;
  if (VAR_2->u.fmr.fmr_pgsize >= VAR_2->hwpage_size) {
   if (VAR_2->next_hwpage %
       (VAR_2->u.fmr.fmr_pgsize /
        VAR_2->hwpage_size) == 0) {
    (VAR_2->kpage_cnt)++;
    (VAR_2->u.fmr.next_listelem)++;
    VAR_6++;
    VAR_2->next_hwpage = 0;
   } else
    (VAR_2->next_hwpage)++;
  } else {
   unsigned int VAR_8 = VAR_2->hwpage_size /
    VAR_2->u.fmr.fmr_pgsize;
   unsigned int VAR_9;
   u64 VAR_10 = *VAR_4;

   for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++) {
    u64 VAR_11 = FUNC_1(VAR_6[VAR_9] &
          ~(VAR_2->hwpage_size - 1));
    if (VAR_10 + VAR_2->u.fmr.fmr_pgsize != VAR_11) {
     FUNC_0("uncontiguous fmr pages "
           "found prev=%llx p=%llx "
           "idx=%x", VAR_10, VAR_11, VAR_7 + VAR_9);
     return -VAR_1;
    }
    VAR_10 = VAR_11;
   }
   VAR_2->kpage_cnt += VAR_8;
   VAR_2->u.fmr.next_listelem += VAR_8;
   VAR_6 += VAR_8;
  }
  VAR_4++;
 }
 return VAR_5;
}
