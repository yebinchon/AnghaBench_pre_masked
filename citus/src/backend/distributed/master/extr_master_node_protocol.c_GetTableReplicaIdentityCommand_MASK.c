
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int * VAR_0 ;
 char VAR_1 ;
 char FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static List *
FUNC_3(Oid VAR_2)
{
 List *VAR_3 = VAR_0;
 char *VAR_4 = ((void*)0);





 char VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 != VAR_1)
 {
  return VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2);

 if (VAR_4)
 {
  VAR_3 = FUNC_1(VAR_3,
               VAR_4);
 }

 return VAR_3;
}
