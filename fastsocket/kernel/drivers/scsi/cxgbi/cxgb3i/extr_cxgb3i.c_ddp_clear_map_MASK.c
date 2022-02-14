
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulp_mem_io {int dummy; } ;
struct sk_buff {int priority; } ;
struct cxgbi_hba {struct cxgbi_device* cdev; } ;
struct cxgbi_device {int lldev; struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {unsigned int llimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct cxgbi_hba *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, unsigned int VAR_8)
{
 struct cxgbi_device *VAR_9 = VAR_5->cdev;
 struct cxgbi_ddp_info *VAR_10 = VAR_9->ddp;
 unsigned int VAR_11 = (VAR_7 << VAR_4) + VAR_10->llimit;
 int VAR_12;

 FUNC_2(1 << VAR_1,
  "cdev 0x%p, idx %u, npods %u, tag 0x%x.\n",
  VAR_9, VAR_7, VAR_8, VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++, VAR_7++, VAR_11 += VAR_3) {
  struct sk_buff *VAR_13 = FUNC_0(sizeof(struct ulp_mem_io) +
      VAR_3, 0, VAR_2);

  if (!VAR_13) {
   FUNC_3("tag 0x%x, 0x%x, %d/%u, skb OOM.\n",
    VAR_6, VAR_7, VAR_12, VAR_8);
   continue;
  }
  FUNC_4(VAR_13, VAR_11);
  VAR_13->priority = VAR_0;
  FUNC_1(VAR_9->lldev, VAR_13);
 }
}
