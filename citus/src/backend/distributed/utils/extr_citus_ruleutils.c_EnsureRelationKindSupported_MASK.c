
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;
 char FUNC_7 (int ) ;

void
FUNC_8(Oid VAR_3)
{
 char VAR_4 = FUNC_7(VAR_3);
 bool VAR_5 = 0;

 VAR_5 = FUNC_2(VAR_3) ||
       VAR_4 == VAR_2;





 VAR_5 = VAR_5 && !(FUNC_0(VAR_3) ||
                FUNC_1(VAR_3));

 if (!VAR_5)
 {
  char *VAR_6 = FUNC_6(VAR_3);

  FUNC_3(VAR_1, (FUNC_4(VAR_0),
      FUNC_5("%s is not a regular, foreign or partitioned table",
          VAR_6)));
 }
}
