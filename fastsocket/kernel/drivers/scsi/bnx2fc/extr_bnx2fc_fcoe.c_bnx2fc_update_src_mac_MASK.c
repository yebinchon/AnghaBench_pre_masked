
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fcoe_port {int data_src_addr; } ;
struct fc_lport {int dummy; } ;


 int VAR_0 ;
 struct fcoe_port* FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct fc_lport *VAR_1, u8 *VAR_2)
{
 struct fcoe_port *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3->data_src_addr, VAR_2, VAR_0);
}
