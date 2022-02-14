
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_interface {int fip_packet_type; int fcoe_packet_type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct bnx2fc_interface *VAR_0)
{

 FUNC_0(&VAR_0->fcoe_packet_type);
 FUNC_0(&VAR_0->fip_packet_type);
 FUNC_1();
}
