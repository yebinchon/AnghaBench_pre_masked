
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port_operations {int postreset; int softreset; int prereset; int * hardreset; } ;
struct ata_port {int link; struct ata_port_operations* ops; } ;
typedef int * ata_reset_fn_t ;


 int FUNC_0 (struct ata_port*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ata_port *VAR_0)
{
 struct ata_port_operations *VAR_1 = VAR_0->ops;
 ata_reset_fn_t VAR_2 = VAR_1->hardreset;


 if (FUNC_1(VAR_2) && !FUNC_2(&VAR_0->link))
  VAR_2 = ((void*)0);

 FUNC_0(VAR_0, VAR_1->prereset, VAR_1->softreset, VAR_2, VAR_1->postreset);
}
