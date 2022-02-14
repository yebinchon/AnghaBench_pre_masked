
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_tx_compl_func ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int ** VAR_4 ;
 int VAR_5 ;

errno_t
FUNC_3(mbuf_tx_compl_func VAR_6)
{
 int VAR_7;
 errno_t VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_1(VAR_5);

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 != -1) {
  VAR_8 = VAR_0;
  goto unlock;
 }


 VAR_8 = VAR_2;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_4[VAR_7] == ((void*)0)) {
   VAR_4[VAR_7] = VAR_6;
   VAR_8 = 0;
   goto unlock;
  }
 }
unlock:
 FUNC_2(VAR_5);

 return (VAR_8);
}
