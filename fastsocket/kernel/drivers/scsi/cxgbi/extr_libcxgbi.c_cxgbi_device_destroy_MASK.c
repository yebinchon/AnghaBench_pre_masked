
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_csk; scalar_t__ max_connect; } ;
struct cxgbi_device {TYPE_1__ pmap; scalar_t__ ddp; int (* dev_ddp_cleanup ) (struct cxgbi_device*) ;int nports; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (struct cxgbi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cxgbi_device*) ;
 int FUNC_4 (struct cxgbi_device*) ;
 int FUNC_5 (int,char*,struct cxgbi_device*,int ) ;
 int FUNC_6 (struct cxgbi_device*) ;

__attribute__((used)) static inline void FUNC_7(struct cxgbi_device *VAR_1)
{
 FUNC_5(1 << VAR_0,
  "cdev 0x%p, p# %u.\n", VAR_1, VAR_1->nports);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_1->dev_ddp_cleanup)
  VAR_1->dev_ddp_cleanup(VAR_1);
 else
  FUNC_0(VAR_1);
 if (VAR_1->ddp)
  FUNC_0(VAR_1);
 if (VAR_1->pmap.max_connect)
  FUNC_2(VAR_1->pmap.port_csk);
 FUNC_4(VAR_1);
}
