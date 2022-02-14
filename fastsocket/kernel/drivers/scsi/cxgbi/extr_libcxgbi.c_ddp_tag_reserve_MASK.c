
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int dummy; } ;
struct cxgbi_sock {struct cxgbi_device* cdev; } ;
struct cxgbi_pagepod_hdr {void* page_offset; void* max_offset; void* pgsz_tag_clr; void* vld_tid; scalar_t__ rsvd; } ;
struct cxgbi_gather_list {int nelem; int length; int offset; } ;
struct cxgbi_device {int (* csk_ddp_set ) (struct cxgbi_sock*,struct cxgbi_pagepod_hdr*,int,unsigned int,struct cxgbi_gather_list*) ;struct cxgbi_tag_format tag_format; struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {int idx_last; int nppods; int rsvd_tag_mask; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int FUNC_1 (struct cxgbi_tag_format*,int) ;
 int FUNC_2 (struct cxgbi_ddp_info*,int,int,unsigned int,struct cxgbi_gather_list*) ;
 int FUNC_3 (struct cxgbi_ddp_info*,int,unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,int,int,...) ;
 int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (struct cxgbi_sock*,struct cxgbi_pagepod_hdr*,int,unsigned int,struct cxgbi_gather_list*) ;

__attribute__((used)) static int FUNC_8(struct cxgbi_sock *VAR_6, unsigned int VAR_7,
      u32 VAR_8, u32 *VAR_9, struct cxgbi_gather_list *VAR_10,
      gfp_t VAR_11)
{
 struct cxgbi_device *VAR_12 = VAR_6->cdev;
 struct cxgbi_ddp_info *VAR_13 = VAR_12->ddp;
 struct cxgbi_tag_format *VAR_14 = &VAR_12->tag_format;
 struct cxgbi_pagepod_hdr VAR_15;
 unsigned int VAR_16;
 int VAR_17 = -1;
 int VAR_18 = -VAR_1;
 u32 VAR_19;

 VAR_16 = (VAR_10->nelem + VAR_3 - 1) >> VAR_4;
 if (VAR_13->idx_last == VAR_13->nppods)
  VAR_17 = FUNC_2(VAR_13, 0, VAR_13->nppods,
       VAR_16, VAR_10);
 else {
  VAR_17 = FUNC_2(VAR_13, VAR_13->idx_last + 1,
       VAR_13->nppods, VAR_16,
       VAR_10);
  if (VAR_17 < 0 && VAR_13->idx_last >= VAR_16) {
   VAR_17 = FUNC_2(VAR_13, 0,
    FUNC_6(VAR_13->idx_last + VAR_16, VAR_13->nppods),
       VAR_16, VAR_10);
  }
 }
 if (VAR_17 < 0) {
  FUNC_5(1 << VAR_0,
   "xferlen %u, gl %u, npods %u NO DDP.\n",
   VAR_10->length, VAR_10->nelem, VAR_16);
  return VAR_17;
 }

 VAR_19 = FUNC_1(VAR_14, VAR_8);
 VAR_19 |= VAR_17 << VAR_2;

 VAR_15.rsvd = 0;
 VAR_15.vld_tid = FUNC_4(VAR_5 | FUNC_0(VAR_7));
 VAR_15.pgsz_tag_clr = FUNC_4(VAR_19 & VAR_13->rsvd_tag_mask);
 VAR_15.max_offset = FUNC_4(VAR_10->length);
 VAR_15.page_offset = FUNC_4(VAR_10->offset);

 VAR_18 = VAR_12->csk_ddp_set(VAR_6, &VAR_15, VAR_17, VAR_16, VAR_10);
 if (VAR_18 < 0)
  goto unmark_entries;

 VAR_13->idx_last = VAR_17;
 FUNC_5(1 << VAR_0,
  "xfer %u, gl %u,%u, tid 0x%x, tag 0x%x->0x%x(%u,%u).\n",
  VAR_10->length, VAR_10->nelem, VAR_10->offset, VAR_7, VAR_8, VAR_19, VAR_17,
  VAR_16);
 *VAR_9 = VAR_19;
 return 0;

unmark_entries:
 FUNC_3(VAR_13, VAR_17, VAR_16);
 return VAR_18;
}
