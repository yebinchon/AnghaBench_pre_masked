
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_tx_compl_func ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int ** VAR_3 ;
 int VAR_4 ;

errno_t
FUNC_2(mbuf_tx_compl_func VAR_5)
{
 int VAR_6;
 errno_t VAR_7;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_4);


 VAR_7 = VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_3[VAR_6] == VAR_5) {
   VAR_3[VAR_6] = ((void*)0);
   VAR_7 = 0;
   goto unlock;
  }
 }
unlock:
 FUNC_1(VAR_4);

 return (VAR_7);
}
