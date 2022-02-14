
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(Oid VAR_3, void *VAR_4)
{
 char VAR_5 = FUNC_0(VAR_3);
 char *VAR_6 = (char *) VAR_4;

 if (VAR_5 == VAR_2 || *VAR_6 == VAR_2)
 {
  *VAR_6 = VAR_2;
 }
 else if (VAR_5 == VAR_1 || *VAR_6 == VAR_1)
 {
  *VAR_6 = VAR_1;
 }
 else
 {
  *VAR_6 = VAR_0;
 }

 return (VAR_5 == VAR_2);
}
