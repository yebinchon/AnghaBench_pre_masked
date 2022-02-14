
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regbit {int bit; int name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, struct regbit *VAR_1)
{
 const char *VAR_2 = "";

 FUNC_0("<");
 for (; VAR_1->bit; ++VAR_1)
  if (VAR_0 & VAR_1->bit) {
   FUNC_0("%s%s", VAR_2, VAR_1->name);
   VAR_2 = ",";
  }
 FUNC_0(">");
}
