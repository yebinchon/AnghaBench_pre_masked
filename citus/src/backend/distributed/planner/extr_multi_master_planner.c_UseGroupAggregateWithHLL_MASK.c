
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Query ;
typedef int Oid ;


 char* FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_5(Query *VAR_2)
{
 Oid VAR_3 = FUNC_3(VAR_0, 1);
 const char *VAR_4 = ((void*)0);


 if (!FUNC_1(VAR_3))
 {
  return 0;
 }


 VAR_4 = FUNC_0(VAR_1, 1, 0);
 if (VAR_4 == ((void*)0) || FUNC_4(VAR_4, "off") == 0)
 {
  return 0;
 }

 return FUNC_2(VAR_2);
}
