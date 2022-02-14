
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulp_mem_io {int dummy; } ;
struct sk_buff {int priority; scalar_t__ head; } ;
struct cxgbi_sock {struct cxgbi_device* cdev; } ;
struct cxgbi_pagepod_hdr {int dummy; } ;
struct cxgbi_pagepod {int dummy; } ;
struct cxgbi_gather_list {int dummy; } ;
struct cxgbi_device {int lldev; struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {unsigned int llimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_pagepod*,struct cxgbi_pagepod_hdr*,struct cxgbi_gather_list*,int) ;
 int FUNC_3 (int,char*,struct cxgbi_sock*,unsigned int,unsigned int,struct cxgbi_gather_list*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct cxgbi_sock *VAR_7, struct cxgbi_pagepod_hdr *VAR_8,
   unsigned int VAR_9, unsigned int VAR_10,
    struct cxgbi_gather_list *VAR_11)
{
 struct cxgbi_device *VAR_12 = VAR_7->cdev;
 struct cxgbi_ddp_info *VAR_13 = VAR_12->ddp;
 unsigned int VAR_14 = (VAR_9 << VAR_6) + VAR_13->llimit;
 int VAR_15;

 FUNC_3(1 << VAR_1,
  "csk 0x%p, idx %u, npods %u, gl 0x%p.\n",
  VAR_7, VAR_9, VAR_10, VAR_11);

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++, VAR_9++, VAR_14 += VAR_5) {
  struct sk_buff *VAR_16 = FUNC_0(sizeof(struct ulp_mem_io) +
      VAR_5, 0, VAR_3);

  if (!VAR_16)
   return -VAR_2;

  FUNC_4(VAR_16, VAR_14);
  FUNC_2((struct cxgbi_pagepod *)(VAR_16->head +
     sizeof(struct ulp_mem_io)),
       VAR_8, VAR_11, VAR_15 * VAR_4);
  VAR_16->priority = VAR_0;
  FUNC_1(VAR_12->lldev, VAR_16);
 }
 return 0;
}
