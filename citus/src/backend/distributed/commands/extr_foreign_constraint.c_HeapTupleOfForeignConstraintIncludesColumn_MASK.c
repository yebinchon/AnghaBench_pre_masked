
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (int ,int ,int,int,char,int **,int *,int*) ;
 char* FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static bool
FUNC_6(HeapTuple VAR_3, Oid VAR_4,
             int VAR_5, char *VAR_6)
{
 Datum VAR_7 = 0;
 Datum *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 int VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_5, &VAR_11);
 FUNC_3(FUNC_0(VAR_7), VAR_1, 2, 1,
       's', &VAR_8, ((void*)0), &VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
 {
  AttrNumber VAR_12 = FUNC_1(VAR_8[VAR_10]);

  char *VAR_13 = FUNC_4(VAR_4, VAR_12, 0);
  if (FUNC_5(VAR_13, VAR_6, VAR_2) == 0)
  {
   return 1;
  }
 }

 return 0;
}
