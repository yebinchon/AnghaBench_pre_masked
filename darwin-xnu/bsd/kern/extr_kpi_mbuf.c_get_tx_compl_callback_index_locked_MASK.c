
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef scalar_t__ mbuf_tx_compl_func ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static u_int32_t
FUNC_0(mbuf_tx_compl_func VAR_3)
{
 u_int32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] == VAR_3) {
   return (VAR_4);
  }
 }
 return (VAR_1);
}
