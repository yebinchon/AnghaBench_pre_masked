
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int DistTableCacheEntry ;


 int * FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 int * FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *,int *) ;

List *
FUNC_13(Oid VAR_1)
{
 DistTableCacheEntry *VAR_2 = FUNC_0(VAR_1);

 List *VAR_3 = VAR_0;
 List *VAR_4 = VAR_0;
 List *VAR_5 = VAR_0;
 List *VAR_6 = VAR_0;
 List *VAR_7 = VAR_0;
 List *VAR_8 = VAR_0;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 bool VAR_12 = 1;


 VAR_7 = FUNC_7(VAR_1);
 VAR_4 = FUNC_12(VAR_4, VAR_7);


 VAR_8 = FUNC_3(VAR_1, VAR_12);
 VAR_4 = FUNC_12(VAR_4, VAR_8);


 VAR_9 = FUNC_9(VAR_1);
 VAR_4 = FUNC_11(VAR_4, VAR_9);


 VAR_10 = FUNC_1(VAR_2);
 VAR_4 = FUNC_11(VAR_4, VAR_10);


 VAR_11 = FUNC_10(VAR_1);
 VAR_4 = FUNC_11(VAR_4, VAR_11);


 VAR_3 = FUNC_5(VAR_1);
 VAR_6 = FUNC_8(VAR_3);
 VAR_4 = FUNC_12(VAR_4, VAR_6);


 VAR_5 = FUNC_4(VAR_1);
 VAR_4 = FUNC_12(VAR_4, VAR_5);


 if (FUNC_6(VAR_1))
 {
  char *VAR_13 =
   FUNC_2(VAR_1);
  VAR_4 = FUNC_11(VAR_4, VAR_13);
 }

 return VAR_4;
}
