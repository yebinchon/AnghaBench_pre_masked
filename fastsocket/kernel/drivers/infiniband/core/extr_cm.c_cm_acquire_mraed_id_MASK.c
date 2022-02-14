
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_mra_msg {int local_comm_id; int remote_comm_id; } ;
struct cm_id_private {int dummy; } ;





 struct cm_id_private* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cm_mra_msg*) ;

__attribute__((used)) static struct cm_id_private * FUNC_2(struct cm_mra_msg *VAR_0)
{
 switch (FUNC_1(VAR_0)) {
 case 128:
  return FUNC_0(VAR_0->remote_comm_id, 0);
 case 129:
 case 130:
  return FUNC_0(VAR_0->remote_comm_id,
         VAR_0->local_comm_id);
 default:
  return ((void*)0);
 }
}
