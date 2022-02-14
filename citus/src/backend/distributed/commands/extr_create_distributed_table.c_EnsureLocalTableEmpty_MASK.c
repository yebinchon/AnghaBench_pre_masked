
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(Oid VAR_2)
{
 char *VAR_3 = FUNC_6(VAR_2);
 bool VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_5("cannot distribute relation \"%s\"", VAR_3),
      FUNC_3("Relation \"%s\" contains data.", VAR_3),
      FUNC_4("Empty your table before distributing it.")));
 }
}
