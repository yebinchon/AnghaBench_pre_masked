
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_session {struct ft_sess* fabric_sess_ptr; } ;
struct ft_sess {int port_name; } ;


 int FUNC_0 (unsigned char*,int ,int ) ;

u32 FUNC_1(struct se_session *VAR_0,
     unsigned char *VAR_1, u32 VAR_2)
{
 struct ft_sess *VAR_3 = VAR_0->fabric_sess_ptr;

 return FUNC_0(VAR_1, VAR_2, VAR_3->port_name);
}
