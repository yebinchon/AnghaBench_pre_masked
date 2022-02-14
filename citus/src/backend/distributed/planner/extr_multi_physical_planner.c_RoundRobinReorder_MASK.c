
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int TransactionId ;
typedef int Task ;
typedef int List ;


 int FUNC_0 () ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

List *
FUNC_3(Task *VAR_0, List *VAR_1)
{
 TransactionId VAR_2 = FUNC_0();
 uint32 VAR_3 = FUNC_2(VAR_1);
 uint32 VAR_4 = (VAR_2 % VAR_3);

 VAR_1 = FUNC_1(VAR_1, VAR_4);

 return VAR_1;
}
