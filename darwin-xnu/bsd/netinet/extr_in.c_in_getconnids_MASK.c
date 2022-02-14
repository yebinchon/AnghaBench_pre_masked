
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
struct socket {int so_state; } ;
struct inpcb {scalar_t__ inp_state; } ;
typedef int sae_connid_t ;
typedef scalar_t__ sae_associd_t ;
typedef int cid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int ,int) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_7, sae_associd_t VAR_8, uint32_t *VAR_9,
    user_addr_t VAR_10)
{
 struct inpcb *VAR_11 = FUNC_1(VAR_7);
 sae_connid_t VAR_12;

 if (VAR_11 == ((void*)0) || VAR_11->inp_state == VAR_1)
  return (VAR_0);

 if (VAR_8 != VAR_3 && VAR_8 != VAR_2)
  return (VAR_0);


 *VAR_9 = ((VAR_7->so_state & VAR_5) ? 1 : 0);


 if (VAR_10 == VAR_6)
  return (0);


 VAR_12 = ((*VAR_9 != 0) ? 1 : VAR_4);

 return (FUNC_0(&VAR_12, VAR_10, sizeof (VAR_12)));
}
