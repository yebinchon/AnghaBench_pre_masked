
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct cxgbi_tag_format {int dummy; } ;
struct cxgbi_sock {int tid; struct cxgbi_device* cdev; } ;
struct cxgbi_gather_list {int dummy; } ;
struct cxgbi_device {int pdev; int ddp; struct cxgbi_tag_format tag_format; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxgbi_tag_format*,unsigned int) ;
 struct cxgbi_gather_list* FUNC_1 (unsigned int,struct scatterlist*,unsigned int,int ,int ) ;
 int FUNC_2 (struct cxgbi_gather_list*,int ) ;
 int FUNC_3 (struct cxgbi_sock*,int ,unsigned int,unsigned int*,struct cxgbi_gather_list*,int ) ;
 int FUNC_4 (int,char*,unsigned int,...) ;
 scalar_t__ VAR_5 ;

int FUNC_5(struct cxgbi_sock *VAR_6, unsigned int *VAR_7,
   unsigned int VAR_8, unsigned int VAR_9,
   struct scatterlist *VAR_10, unsigned int VAR_11, gfp_t VAR_12)
{
 struct cxgbi_device *VAR_13 = VAR_6->cdev;
 struct cxgbi_tag_format *VAR_14 = &VAR_13->tag_format;
 struct cxgbi_gather_list *VAR_15;
 int VAR_16;

 if (VAR_5 >= VAR_1 || !VAR_13->ddp ||
     VAR_9 < VAR_2) {
  FUNC_4(1 << VAR_0,
   "pgidx %u, xfer %u, NO ddp.\n", VAR_5, VAR_9);
  return -VAR_3;
 }

 if (!FUNC_0(VAR_14, VAR_8)) {
  FUNC_4(1 << VAR_0,
   "sw_tag 0x%x NOT usable.\n", VAR_8);
  return -VAR_3;
 }

 VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_13->pdev, VAR_12);
 if (!VAR_15)
  return -VAR_4;

 VAR_16 = FUNC_3(VAR_6, VAR_6->tid, VAR_8, VAR_7, VAR_15, VAR_12);
 if (VAR_16 < 0)
  FUNC_2(VAR_15, VAR_13->pdev);

 return VAR_16;
}
