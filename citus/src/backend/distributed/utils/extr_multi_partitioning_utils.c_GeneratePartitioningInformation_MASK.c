
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;
 int VAR_1 ;

char *
FUNC_7(Oid VAR_2)
{
 char *VAR_3 = "";
 Datum VAR_4 = 0;

 if (!FUNC_2(VAR_2))
 {
  char *VAR_5 = FUNC_6(VAR_2);

  FUNC_4(VAR_0, (FUNC_5("\"%s\" is not a parent table", VAR_5)));
 }

 VAR_4 = FUNC_0(VAR_1,
             FUNC_1(VAR_2));

 VAR_3 = FUNC_3(VAR_4);

 return VAR_3;
}
