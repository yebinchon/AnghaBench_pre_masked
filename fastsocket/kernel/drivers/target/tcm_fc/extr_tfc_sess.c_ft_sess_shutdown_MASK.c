
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {struct ft_sess* fabric_sess_ptr; } ;
struct ft_sess {int port_id; } ;


 int FUNC_0 (char*,int ) ;

int FUNC_1(struct se_session *VAR_0)
{
 struct ft_sess *VAR_1 = VAR_0->fabric_sess_ptr;

 FUNC_0("port_id %x\n", VAR_1->port_id);
 return 1;
}
