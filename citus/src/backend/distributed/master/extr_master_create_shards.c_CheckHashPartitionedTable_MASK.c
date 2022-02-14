
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char) ;

void
FUNC_4(Oid VAR_3)
{
 char VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != VAR_0)
 {
  FUNC_1(VAR_2, (FUNC_2(VAR_1),
      FUNC_3("unsupported table partition type: %c", VAR_4)));
 }
}
