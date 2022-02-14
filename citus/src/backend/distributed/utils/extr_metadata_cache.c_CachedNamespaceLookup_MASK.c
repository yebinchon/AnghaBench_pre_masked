
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, Oid *VAR_3)
{

 FUNC_0();

 if (*VAR_3 == VAR_1)
 {
  *VAR_3 = FUNC_3(VAR_2, 1);

  if (*VAR_3 == VAR_1)
  {
   FUNC_1(VAR_0, (FUNC_2(
        "cache lookup failed for namespace %s, called too early?",
        VAR_2)));
  }
 }
}
