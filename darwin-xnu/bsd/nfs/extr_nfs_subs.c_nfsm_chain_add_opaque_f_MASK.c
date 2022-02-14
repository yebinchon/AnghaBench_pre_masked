
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct nfsm_chain {scalar_t__ nmc_left; int nmc_ptr; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int const*,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct nfsm_chain*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int
FUNC_5(struct nfsm_chain *VAR_0, const u_char *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_2);

 while (VAR_3) {
  if (!VAR_0->nmc_left) {
   VAR_5 = FUNC_3(VAR_0, VAR_3);
   if (VAR_5)
    return (VAR_5);
  }
  VAR_4 = FUNC_0(VAR_0->nmc_left, VAR_3);
  if (VAR_4) {
   if (VAR_2) {
    if (VAR_4 > VAR_2)
     VAR_4 = VAR_2;
    FUNC_1(VAR_1, VAR_0->nmc_ptr, VAR_4);
   } else {
    FUNC_2(VAR_0->nmc_ptr, VAR_4);
   }
   VAR_0->nmc_ptr += VAR_4;
   VAR_0->nmc_left -= VAR_4;
   VAR_3 -= VAR_4;
   if (VAR_2) {
    VAR_1 += VAR_4;
    VAR_2 -= VAR_4;
   }
  }
 }
 return (0);
}
