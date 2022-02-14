
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_mad {int dummy; } ;
struct cm_generic_msg {int local_comm_id; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ib_mad *VAR_0, u32 VAR_1)
{
 struct cm_generic_msg *VAR_2 = (struct cm_generic_msg *)VAR_0;
 VAR_2->local_comm_id = FUNC_0(VAR_1);
}
