
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int*) ;

char *
FUNC_2(Datum VAR_1, Oid VAR_2)
{
 char *VAR_3 = ((void*)0);
 Oid VAR_4 = VAR_0;
 bool VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4, &VAR_5);
 VAR_3 = FUNC_0(VAR_4, VAR_1);

 return VAR_3;
}
