
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rxd_desc {int va_hi; int va_lo; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct rxd_desc *VAR_0, u32 VAR_1, u16 VAR_2,
         u16 VAR_3)
{
 FUNC_0("ERROR: rxdd bc %d rxfq %d to %d type %d err %d rxp %d "
     "pkt_id %d vtag %d len %d vlan_id %d cfi %d prio %d "
     "va_lo %d va_hi %d\n",
     FUNC_1(VAR_1), FUNC_6(VAR_1), FUNC_8(VAR_1),
     FUNC_9(VAR_1), FUNC_3(VAR_1),
     FUNC_7(VAR_1), FUNC_4(VAR_1),
     FUNC_11(VAR_1), VAR_2, FUNC_10(VAR_3),
     FUNC_2(VAR_3), FUNC_5(VAR_3), VAR_0->va_lo,
     VAR_0->va_hi);
}
