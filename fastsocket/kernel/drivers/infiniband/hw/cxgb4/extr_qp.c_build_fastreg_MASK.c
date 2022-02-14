
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* va_lo_fbo; void* va_hi; void* stag; void* len_lo; scalar_t__ len_hi; int mem_perms; int addr_type; scalar_t__ pgsz_shift; scalar_t__ qpbinde_to_dcacpu; } ;
union t4_wr {TYPE_1__ fr; } ;
typedef int u8 ;
typedef int u64 ;
struct t4_sq {size_t size; int * queue; } ;
struct TYPE_7__ {int page_list_len; int length; int rkey; int iova_start; TYPE_2__* page_list; int access_flags; scalar_t__ page_shift; } ;
struct TYPE_8__ {TYPE_3__ fast_reg; } ;
struct ib_send_wr {TYPE_4__ wr; } ;
struct fw_ri_immd {void* immdlen; scalar_t__ r2; scalar_t__ r1; int op; } ;
typedef scalar_t__ __be64 ;
struct TYPE_6__ {int * page_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct t4_sq *VAR_5, union t4_wr *VAR_6,
    struct ib_send_wr *VAR_7, u8 *VAR_8)
{

 struct fw_ri_immd *VAR_9;
 __be64 *VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_6(VAR_7->wr.fast_reg.page_list_len * sizeof(u64), 32);
 int VAR_13;

 if (VAR_7->wr.fast_reg.page_list_len > VAR_3)
  return -VAR_0;

 VAR_6->fr.qpbinde_to_dcacpu = 0;
 VAR_6->fr.pgsz_shift = VAR_7->wr.fast_reg.page_shift - 12;
 VAR_6->fr.addr_type = VAR_2;
 VAR_6->fr.mem_perms = FUNC_3(VAR_7->wr.fast_reg.access_flags);
 VAR_6->fr.len_hi = 0;
 VAR_6->fr.len_lo = FUNC_4(VAR_7->wr.fast_reg.length);
 VAR_6->fr.stag = FUNC_4(VAR_7->wr.fast_reg.rkey);
 VAR_6->fr.va_hi = FUNC_4(VAR_7->wr.fast_reg.iova_start >> 32);
 VAR_6->fr.va_lo_fbo = FUNC_4(VAR_7->wr.fast_reg.iova_start &
     0xffffffff);
 FUNC_2(VAR_12 > VAR_4);
 VAR_9 = (struct fw_ri_immd *)(&VAR_6->fr + 1);
 VAR_9->op = VAR_1;
 VAR_9->r1 = 0;
 VAR_9->r2 = 0;
 VAR_9->immdlen = FUNC_4(VAR_12);
 VAR_10 = (__be64 *)(VAR_9 + 1);
 VAR_13 = VAR_12;
 for (VAR_11 = 0; VAR_11 < VAR_7->wr.fast_reg.page_list_len; VAR_11++) {
  *VAR_10 = FUNC_5((u64)VAR_7->wr.fast_reg.page_list->page_list[VAR_11]);
  VAR_13 -= sizeof *VAR_10;
  if (++VAR_10 == (__be64 *)&VAR_5->queue[VAR_5->size])
   VAR_10 = (__be64 *)VAR_5->queue;
 }
 FUNC_0(VAR_13 < 0);
 while (VAR_13) {
  *VAR_10 = 0;
  VAR_13 -= sizeof *VAR_10;
  if (++VAR_10 == (__be64 *)&VAR_5->queue[VAR_5->size])
   VAR_10 = (__be64 *)VAR_5->queue;
 }
 *VAR_8 = FUNC_1(sizeof VAR_6->fr + sizeof *VAR_9 + VAR_12, 16);
 return 0;
}
