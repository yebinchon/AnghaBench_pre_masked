
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* dir; char* name; int (* func ) (char*,int*) ;} ;
typedef TYPE_1__ case_t ;


 scalar_t__ FUNC_0 (char*,char const* const) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (scalar_t__*,char*) ;
 int FUNC_7 (char*,int*) ;

__attribute__((used)) static void FUNC_8(case_t* VAR_1, const char* const VAR_2, int VAR_3, int VAR_4, int* VAR_5, int* VAR_6, int* VAR_7)
{

 if (VAR_1->dir && VAR_1->dir[0] != 0 && FUNC_6(VAR_1->dir, ".") != 0)
  FUNC_1(VAR_1->dir);
 int VAR_8 = 0;
 if (FUNC_4(FUNC_3(VAR_0)))
 {
  VAR_8 += FUNC_5("\033[0;34m[%d/%d]\033[0;0m \033[1;33m[RUN]\033[0;0m ", VAR_3 + 1, VAR_4);
  VAR_8 += FUNC_0(VAR_1->name, VAR_2);
  VAR_8 += FUNC_5(" ...");
 } else
  VAR_8 += FUNC_5("[%d/%d] [RUN] %s ...", VAR_3 + 1, VAR_4, VAR_1->name);
 FUNC_2(VAR_0);
 int VAR_9 = 0;
 VAR_1->func(VAR_1->name, &VAR_9);
 if (VAR_9 == 0)
 {
  (*VAR_5)++;
  for (; VAR_8 > 0; --VAR_8)
   FUNC_5("\b");
  if (FUNC_4(FUNC_3(VAR_0)))
  {
   FUNC_5("\r\033[0;34m[%d/%d]\033[0;0m \033[1;32m[PASS]\033[0;0m ", VAR_3 + 1, VAR_4);
   FUNC_0(VAR_1->name, VAR_2);
   FUNC_5("    \n");
  } else
   FUNC_5("\r[%d/%d] [PASS] %s    \n", VAR_3 + 1, VAR_4, VAR_1->name);
 } else if (VAR_9 == -2) {
  (*VAR_6)++;
  if (FUNC_4(FUNC_3(VAR_0)))
  {
   FUNC_5("\n\033[0;34m[%d/%d]\033[0;0m \033[1;32m[SKIP]\033[0;0m ", VAR_3 + 1, VAR_4);
   FUNC_0(VAR_1->name, VAR_2);
   FUNC_5("\n");
  } else
   FUNC_5("\n[%d/%d] [SKIP] %s\n", VAR_3 + 1, VAR_4, VAR_1->name);
 } else {
  (*VAR_7)++;
  if (FUNC_4(FUNC_3(VAR_0)))
  {
   FUNC_5("\n\033[0;34m[%d/%d]\033[0;0m \033[1;31m[FAIL]\033[0;0m ", VAR_3 + 1, VAR_4);
   FUNC_0(VAR_1->name, VAR_2);
   FUNC_5("\n");
  } else
   FUNC_5("\n[%d/%d] [FAIL] %s\n", VAR_3 + 1, VAR_4, VAR_1->name);
 }
}
