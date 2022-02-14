
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_device {struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,char*,struct cxgbi_device*,struct cxgbi_ddp_info*) ;

int FUNC_2(struct cxgbi_device *VAR_2)
{
 struct cxgbi_ddp_info *VAR_3 = VAR_2->ddp;

 FUNC_1(1 << VAR_0,
  "cdev 0x%p, release ddp 0x%p.\n", VAR_2, VAR_3);
 VAR_2->ddp = ((void*)0);
 if (VAR_3)
  return FUNC_0(&VAR_3->refcnt, VAR_1);
 return 0;
}
