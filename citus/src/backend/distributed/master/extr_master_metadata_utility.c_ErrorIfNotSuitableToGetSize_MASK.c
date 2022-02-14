
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(Oid VAR_4)
{
 if (!FUNC_0(VAR_4))
 {
  char *VAR_5 = FUNC_6(VAR_4);
  char *VAR_6 = FUNC_7(VAR_5);
  FUNC_3(VAR_3, (FUNC_4(VAR_2),
      FUNC_5("cannot calculate the size because relation %s is not "
          "distributed", VAR_6)));
 }

 if (FUNC_1(VAR_4) == VAR_0 &&
  !FUNC_2(VAR_4))
 {
  FUNC_3(VAR_3, (FUNC_4(VAR_1),
      FUNC_5("cannot calculate the size because replication factor "
          "is greater than 1")));
 }
}
