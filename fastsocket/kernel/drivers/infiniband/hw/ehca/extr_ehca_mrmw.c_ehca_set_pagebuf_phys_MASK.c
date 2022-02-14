
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ib_phys_buf {int addr; scalar_t__ size; } ;
struct TYPE_3__ {int next_buf; struct ib_phys_buf* phys_buf_array; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct ehca_mr_pginfo {int hwpage_size; int next_hwpage; scalar_t__ kpage_cnt; scalar_t__ num_kpages; scalar_t__ hwpage_cnt; scalar_t__ num_hwpages; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,scalar_t__,int,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ehca_mr_pginfo *VAR_2,
     u32 VAR_3, u64 *VAR_4)
{
 int VAR_5 = 0;
 struct ib_phys_buf *VAR_6;
 u64 VAR_7, VAR_8;
 u32 VAR_9 = 0;


 while (VAR_9 < VAR_3) {
  VAR_6 = VAR_2->u.phy.phys_buf_array + VAR_2->u.phy.next_buf;
  VAR_7 = FUNC_0((VAR_6->addr % VAR_2->hwpage_size) +
         VAR_6->size, VAR_2->hwpage_size);
  VAR_8 = (VAR_6->addr & ~(VAR_2->hwpage_size - 1)) /
   VAR_2->hwpage_size;
  while (VAR_2->next_hwpage < VAR_8 + VAR_7) {

   if ((VAR_2->kpage_cnt >= VAR_2->num_kpages) ||
       (VAR_2->hwpage_cnt >= VAR_2->num_hwpages)) {
    FUNC_1("kpage_cnt >= num_kpages, "
          "kpage_cnt=%llx num_kpages=%llx "
          "hwpage_cnt=%llx "
          "num_hwpages=%llx i=%x",
          VAR_2->kpage_cnt,
          VAR_2->num_kpages,
          VAR_2->hwpage_cnt,
          VAR_2->num_hwpages, VAR_9);
    return -VAR_0;
   }
   *VAR_4 = FUNC_2(
    (VAR_6->addr & ~(VAR_2->hwpage_size - 1)) +
    (VAR_2->next_hwpage * VAR_2->hwpage_size));
   if ( !(*VAR_4) && VAR_6->addr ) {
    FUNC_1("pbuf->addr=%llx pbuf->size=%llx "
          "next_hwpage=%llx", VAR_6->addr,
          VAR_6->size, VAR_2->next_hwpage);
    return -VAR_0;
   }
   (VAR_2->hwpage_cnt)++;
   (VAR_2->next_hwpage)++;
   if (VAR_1 >= VAR_2->hwpage_size) {
    if (VAR_2->next_hwpage %
        (VAR_1 / VAR_2->hwpage_size) == 0)
     (VAR_2->kpage_cnt)++;
   } else
    VAR_2->kpage_cnt += VAR_2->hwpage_size /
     VAR_1;
   VAR_4++;
   VAR_9++;
   if (VAR_9 >= VAR_3) break;
  }
  if (VAR_2->next_hwpage >= VAR_8 + VAR_7) {
   (VAR_2->u.phy.next_buf)++;
   VAR_2->next_hwpage = 0;
  }
 }
 return VAR_5;
}
