
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pbl_addrs; } ;
struct TYPE_6__ {int * pbl_addrs; void* page_type_perms; void* va_base_lo_fbo; void* va_base_hi; void* len; void* stag; } ;
union t3_wr {TYPE_2__ pbl_frag; TYPE_1__ fastreg; } ;
typedef int u8 ;
typedef int u64 ;
struct t3_wq {int size_log2; scalar_t__ wptr; scalar_t__ queue; } ;
struct TYPE_9__ {int page_list_len; int rkey; int length; int iova_start; TYPE_3__* page_list; int access_flags; scalar_t__ page_shift; } ;
struct TYPE_10__ {TYPE_4__ fast_reg; } ;
struct ib_send_wr {TYPE_5__ wr; } ;
typedef int __be64 ;
struct TYPE_8__ {scalar_t__* page_list; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ,int ,int ,int ,int,int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(union t3_wr *VAR_6, struct ib_send_wr *VAR_7,
    u8 *VAR_8, int *VAR_9, struct t3_wq *VAR_10)
{
 int VAR_11;
 __be64 *VAR_12;

 if (VAR_7->wr.fast_reg.page_list_len > VAR_2)
  return -VAR_0;
 *VAR_9 = 1;
 VAR_6->fastreg.stag = FUNC_7(VAR_7->wr.fast_reg.rkey);
 VAR_6->fastreg.len = FUNC_7(VAR_7->wr.fast_reg.length);
 VAR_6->fastreg.va_base_hi = FUNC_7(VAR_7->wr.fast_reg.iova_start >> 32);
 VAR_6->fastreg.va_base_lo_fbo =
    FUNC_7(VAR_7->wr.fast_reg.iova_start & 0xffffffff);
 VAR_6->fastreg.page_type_perms = FUNC_7(
  FUNC_2(VAR_7->wr.fast_reg.page_list_len) |
  FUNC_3(VAR_7->wr.fast_reg.page_shift-12) |
  FUNC_5(VAR_5) |
  FUNC_4(FUNC_9(VAR_7->wr.fast_reg.access_flags)));
 VAR_12 = &VAR_6->fastreg.pbl_addrs[0];
 for (VAR_11 = 0; VAR_11 < VAR_7->wr.fast_reg.page_list_len; VAR_11++, VAR_12++) {


  if (VAR_11 == VAR_3) {
   *VAR_9 = 2;
   VAR_6 = (union t3_wr *)(VAR_10->queue +
    FUNC_1((VAR_10->wptr+1), VAR_10->size_log2));
   FUNC_6((void *)VAR_6, VAR_4, 0,
          FUNC_0(VAR_10->wptr + 1, VAR_10->size_log2),
          0, 1 + VAR_7->wr.fast_reg.page_list_len - VAR_3,
          VAR_1);

   VAR_12 = &VAR_6->pbl_frag.pbl_addrs[0];
  }
  *VAR_12 = FUNC_8((u64)VAR_7->wr.fast_reg.page_list->page_list[VAR_11]);
 }
 *VAR_8 = 5 + VAR_7->wr.fast_reg.page_list_len;
 if (*VAR_8 > 15)
  *VAR_8 = 15;
 return 0;
}
