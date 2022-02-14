
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cxgbi_hba {struct cxgbi_device* cdev; } ;
struct cxgbi_gather_list {int nelem; } ;
struct cxgbi_device {int (* csk_ddp_clear ) (struct cxgbi_hba*,size_t,size_t,unsigned int) ;struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {size_t idx_mask; size_t nppods; int pdev; struct cxgbi_gather_list** gl_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_gather_list*,int ) ;
 int FUNC_1 (struct cxgbi_ddp_info*,size_t,unsigned int) ;
 int FUNC_2 (int,char*,size_t,size_t,unsigned int) ;
 int FUNC_3 (char*,size_t,size_t,...) ;
 int FUNC_4 (struct cxgbi_hba*,size_t,size_t,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct cxgbi_hba *VAR_4, u32 VAR_5)
{
 struct cxgbi_device *VAR_6 = VAR_4->cdev;
 struct cxgbi_ddp_info *VAR_7 = VAR_6->ddp;
 u32 VAR_8;

 VAR_8 = (VAR_5 >> VAR_1) & VAR_7->idx_mask;
 if (VAR_8 < VAR_7->nppods) {
  struct cxgbi_gather_list *VAR_9 = VAR_7->gl_map[VAR_8];
  unsigned int VAR_10;

  if (!VAR_9 || !VAR_9->nelem) {
   FUNC_3("tag 0x%x, idx %u, gl 0x%p, %u.\n",
    VAR_5, VAR_8, VAR_9, VAR_9 ? VAR_9->nelem : 0);
   return;
  }
  VAR_10 = (VAR_9->nelem + VAR_2 - 1) >> VAR_3;
  FUNC_2(1 << VAR_0,
   "tag 0x%x, release idx %u, npods %u.\n",
   VAR_5, VAR_8, VAR_10);
  VAR_6->csk_ddp_clear(VAR_4, VAR_5, VAR_8, VAR_10);
  FUNC_1(VAR_7, VAR_8, VAR_10);
  FUNC_0(VAR_9, VAR_7->pdev);
 } else
  FUNC_3("tag 0x%x, idx %u > max %u.\n", VAR_5, VAR_8, VAR_7->nppods);
}
