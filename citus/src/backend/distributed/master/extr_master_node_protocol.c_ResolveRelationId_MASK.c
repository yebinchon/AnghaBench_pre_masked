
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int RangeVar ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

Oid
FUNC_3(text *VAR_3, bool VAR_4)
{
 List *VAR_5 = VAR_1;
 RangeVar *VAR_6 = ((void*)0);
 Oid VAR_7 = VAR_0;


 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_4);

 return VAR_7;
}
