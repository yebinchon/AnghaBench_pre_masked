
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_sas_port {int num_phys; int id; int oob_mode; int tproto; int iproto; int attached_sas_addr; int sas_addr; int class; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(struct asd_sas_port *VAR_0)
{
 FUNC_1("port%d: class:0x%x\n", VAR_0->id, VAR_0->class);
 FUNC_1("port%d: sas_addr:%llx\n", VAR_0->id,
      FUNC_0(VAR_0->sas_addr));
 FUNC_1("port%d: attached_sas_addr:%llx\n", VAR_0->id,
      FUNC_0(VAR_0->attached_sas_addr));
 FUNC_1("port%d: iproto:0x%x\n", VAR_0->id, VAR_0->iproto);
 FUNC_1("port%d: tproto:0x%x\n", VAR_0->id, VAR_0->tproto);
 FUNC_1("port%d: oob_mode:0x%x\n", VAR_0->id, VAR_0->oob_mode);
 FUNC_1("port%d: num_phys:%d\n", VAR_0->id, VAR_0->num_phys);
}
