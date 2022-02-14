
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char) ;
 char FUNC_5 (int ) ;

char
FUNC_6(Oid VAR_6)
{
 char VAR_7 = 0;

 char VAR_8 = FUNC_5(VAR_6);
 if (FUNC_1(VAR_6))
 {
  VAR_7 = VAR_5;
 }
 else if (VAR_8 == VAR_2)
 {
  bool VAR_9 = FUNC_0(VAR_6);
  if (VAR_9)
  {
   VAR_7 = VAR_3;
  }
  else
  {
   VAR_7 = VAR_4;
  }
 }
 else
 {
  FUNC_2(VAR_1, (FUNC_3(VAR_0),
      FUNC_4("unexpected relation type: %c", VAR_8)));
 }

 return VAR_7;
}
