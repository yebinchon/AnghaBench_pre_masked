
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int Oid ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int,char,int **,int**,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,int*,char*) ;

Datum *
FUNC_7(ArrayType *VAR_3)
{
 Datum *VAR_4 = ((void*)0);
 bool *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 Oid VAR_7 = VAR_2;
 bool VAR_8 = 0;
 char VAR_9 = 0;
 int16 VAR_10 = 0;

 bool VAR_11 = FUNC_1(VAR_3);
 if (VAR_11)
 {
  FUNC_3(VAR_1, (FUNC_4(VAR_0),
      FUNC_5("worker array object cannot contain null values")));
 }

 VAR_7 = FUNC_0(VAR_3);
 FUNC_6(VAR_7, &VAR_10, &VAR_8, &VAR_9);

 FUNC_2(VAR_3, VAR_7, VAR_10, VAR_8, VAR_9,
       &VAR_4, &VAR_5, &VAR_6);

 return VAR_4;
}
