
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef int * mbuf_tx_compl_func ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int ** VAR_1 ;
 int VAR_2 ;

mbuf_tx_compl_func
FUNC_3(u_int32_t VAR_3)
{
 mbuf_tx_compl_func VAR_4;

 if (VAR_3 >= VAR_0) {
  FUNC_0(0);
  return (((void*)0));
 }
 FUNC_1(VAR_2);
 VAR_4 = VAR_1[VAR_3];
 FUNC_2(VAR_2);
 return (VAR_4);
}
