
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
struct mptses {scalar_t__ mpte_associd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (struct mptses*) ;

__attribute__((used)) static int
FUNC_2(struct mptses *VAR_2, uint32_t *VAR_3, user_addr_t VAR_4)
{
 FUNC_1(VAR_2);


 *VAR_3 = (VAR_2->mpte_associd != VAR_0) ? 1 : 0;


 if (VAR_4 == VAR_1)
  return (0);

 return (FUNC_0(&VAR_2->mpte_associd, VAR_4,
     sizeof (VAR_2->mpte_associd)));
}
