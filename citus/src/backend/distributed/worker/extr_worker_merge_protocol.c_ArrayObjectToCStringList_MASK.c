
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;
typedef int List ;
typedef int Datum ;
typedef int ArrayType ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int * VAR_0 ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (int *,char*) ;

__attribute__((used)) static List *
FUNC_5(ArrayType *VAR_1)
{
 List *VAR_2 = VAR_0;
 Datum *VAR_3 = FUNC_2(VAR_1);
 int32 VAR_4 = FUNC_0(VAR_1);

 int32 VAR_5 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  Datum VAR_6 = VAR_3[VAR_5];
  char *VAR_7 = FUNC_3(VAR_6);

  VAR_2 = FUNC_4(VAR_2, VAR_7);
 }

 FUNC_1(VAR_2 != VAR_0);
 return VAR_2;
}
