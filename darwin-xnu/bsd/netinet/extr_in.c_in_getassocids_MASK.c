
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;
struct socket {int dummy; } ;
struct inpcb {scalar_t__ inp_state; } ;
typedef int sae_associd_t ;
typedef int aid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_4, uint32_t *VAR_5, user_addr_t VAR_6)
{
 struct inpcb *VAR_7 = FUNC_1(VAR_4);
 sae_associd_t VAR_8;

 if (VAR_7 == ((void*)0) || VAR_7->inp_state == VAR_1)
  return (VAR_0);


 VAR_8 = VAR_2;
 *VAR_5 = 0;


 if (VAR_6 == VAR_3)
  return (0);

 return (FUNC_0(&VAR_8, VAR_6, sizeof (VAR_8)));
}
