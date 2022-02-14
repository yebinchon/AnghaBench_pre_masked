
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ,int) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * VAR_0 ;
 int * FUNC_4 (int *,int *) ;

List *
FUNC_5(Oid VAR_1, bool VAR_2)
{
 List *VAR_3 = VAR_0;
 List *VAR_4 = VAR_0;
 List *VAR_5 = VAR_0;
 List *VAR_6 = VAR_0;
 List *VAR_7 = VAR_0;

 VAR_4 = FUNC_1(VAR_1,
              VAR_2);
 VAR_3 = FUNC_4(VAR_3, VAR_4);

 VAR_5 = FUNC_2(VAR_1);
 VAR_3 = FUNC_4(VAR_3, VAR_5);

 VAR_6 = FUNC_3(VAR_1);
 VAR_3 = FUNC_4(VAR_3, VAR_6);

 VAR_7 = FUNC_0(VAR_1);
 VAR_3 = FUNC_4(VAR_3, VAR_7);

 return VAR_3;
}
