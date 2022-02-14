
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulptx_idata {int dummy; } ;
struct ulp_mem_io {int dummy; } ;
struct sk_buff {scalar_t__ head; } ;
struct cxgbi_pagepod_hdr {int dummy; } ;
struct cxgbi_pagepod {int dummy; } ;
struct cxgbi_gather_list {int dummy; } ;
struct cxgbi_device {int * ports; struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {unsigned int llimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct sk_buff* FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_pagepod*) ;
 int FUNC_3 (struct cxgbi_pagepod*,struct cxgbi_pagepod_hdr*,struct cxgbi_gather_list*,unsigned int) ;
 int FUNC_4 (char*,struct cxgbi_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int,int) ;
 int FUNC_6 (struct sk_buff*,int ,int *) ;
 int FUNC_7 (struct ulp_mem_io*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct cxgbi_device *VAR_5, unsigned int VAR_6,
    struct cxgbi_pagepod_hdr *VAR_7, unsigned int VAR_8,
    unsigned int VAR_9,
    struct cxgbi_gather_list *VAR_10,
    unsigned int VAR_11)
{
 struct cxgbi_ddp_info *VAR_12 = VAR_5->ddp;
 struct sk_buff *VAR_13;
 struct ulp_mem_io *VAR_14;
 struct ulptx_idata *VAR_15;
 struct cxgbi_pagepod *VAR_16;
 unsigned int VAR_17 = VAR_8 * VAR_4 + VAR_12->llimit;
 unsigned int VAR_18 = VAR_4 * VAR_9;
 unsigned int VAR_19 = FUNC_5(sizeof(struct ulp_mem_io) +
    sizeof(struct ulptx_idata) + VAR_18, 16);
 unsigned int VAR_20;

 VAR_13 = FUNC_0(VAR_19, 0, VAR_2);
 if (!VAR_13) {
  FUNC_4("cdev 0x%p, idx %u, npods %u, OOM.\n",
   VAR_5, VAR_8, VAR_9);
  return -VAR_1;
 }
 VAR_14 = (struct ulp_mem_io *)VAR_13->head;
 FUNC_6(VAR_13, VAR_0, ((void*)0));

 FUNC_7(VAR_14, VAR_19, VAR_18, VAR_17);
 VAR_15 = (struct ulptx_idata *)(VAR_14 + 1);
 VAR_16 = (struct cxgbi_pagepod *)(VAR_15 + 1);

 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++, VAR_16++, VAR_11 += VAR_3) {
  if (!VAR_7 && !VAR_10)
   FUNC_2(VAR_16);
  else
   FUNC_3(VAR_16, VAR_7, VAR_10, VAR_11);
 }

 FUNC_1(VAR_5->ports[VAR_6], VAR_13);
 return 0;
}
