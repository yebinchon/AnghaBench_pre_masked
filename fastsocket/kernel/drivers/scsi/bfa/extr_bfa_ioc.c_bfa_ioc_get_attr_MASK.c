
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int ad_cap_bm; int port_mode_cfg; int port_mode; } ;
struct TYPE_2__ {int chip_rev; scalar_t__ pcifn; int device_id; } ;
struct bfa_ioc_attr_s {int def_fn; TYPE_1__ pci_attr; int adapter_attr; int ioc_type; int cap_bm; int port_mode_cfg; int port_mode; scalar_t__ port_id; int state; } ;


 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (struct bfa_ioc_s*,int *) ;
 int FUNC_2 (struct bfa_ioc_s*,int ) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_5 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_6 (struct bfa_ioc_s*) ;
 int FUNC_7 (void*,int ,int) ;

void
FUNC_8(struct bfa_ioc_s *VAR_0, struct bfa_ioc_attr_s *VAR_1)
{
 FUNC_7((void *)VAR_1, 0, sizeof(struct bfa_ioc_attr_s));

 VAR_1->state = FUNC_3(VAR_0);
 VAR_1->port_id = FUNC_6(VAR_0);
 VAR_1->port_mode = VAR_0->port_mode;
 VAR_1->port_mode_cfg = VAR_0->port_mode_cfg;
 VAR_1->cap_bm = VAR_0->ad_cap_bm;

 VAR_1->ioc_type = FUNC_4(VAR_0);

 FUNC_1(VAR_0, &VAR_1->adapter_attr);

 VAR_1->pci_attr.device_id = FUNC_0(VAR_0);
 VAR_1->pci_attr.pcifn = FUNC_5(VAR_0);
 VAR_1->def_fn = (FUNC_5(VAR_0) == FUNC_6(VAR_0));
 FUNC_2(VAR_0, VAR_1->pci_attr.chip_rev);
}
