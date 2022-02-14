
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpufv_disabled; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 const char *VAR_2;
 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return;

 if (FUNC_2(VAR_2, "701") == 0 || FUNC_2(VAR_2, "702") == 0) {
  VAR_1->cpufv_disabled = 1;
  FUNC_1("model %s does not officially support setting cpu "
   "speed\n", VAR_2);
  FUNC_1("cpufv disabled to avoid instability\n");
 }
}
