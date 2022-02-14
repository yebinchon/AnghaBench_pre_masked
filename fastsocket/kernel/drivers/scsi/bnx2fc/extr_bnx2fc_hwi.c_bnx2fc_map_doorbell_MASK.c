
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct bnx2fc_rport {int context_id; int ctx_base; struct fcoe_port* port; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {int pcidev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct bnx2fc_rport *VAR_4)
{
 u32 VAR_5 = VAR_4->context_id;
 struct fcoe_port *VAR_6 = VAR_4->port;
 u32 VAR_7;
 resource_size_t VAR_8;
 struct bnx2fc_interface *VAR_9 = VAR_6->priv;
 struct bnx2fc_hba *VAR_10 = VAR_9->hba;

 VAR_8 = FUNC_1(VAR_10->pcidev,
     VAR_1);
 VAR_7 = VAR_0 *
   (VAR_5 & 0x1FFFF) + VAR_2;
 VAR_4->ctx_base = FUNC_0(VAR_8 + VAR_7, 4);
 if (!VAR_4->ctx_base)
  return -VAR_3;
 return 0;
}
