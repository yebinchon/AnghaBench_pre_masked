
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int fpu_arg ;
struct TYPE_2__ {int cpuid_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,int) ;

uint64_t
FUNC_4(void)
{
 static int VAR_4 = 0;
 char VAR_5[20] = { 0 };

 (void) FUNC_1();
 if (!VAR_4) {

   if (FUNC_0("_fpu", &VAR_5[0], sizeof (VAR_5))) {
    FUNC_2("limiting fpu features to: %s\n", VAR_5);
    if (!FUNC_3("387", VAR_5, sizeof("387")) || !FUNC_3("mmx", VAR_5, sizeof("mmx"))) {
     FUNC_2("no sse or sse2\n");
     VAR_3->cpuid_features &= ~(VAR_1 | VAR_2 | VAR_0);
    } else if (!FUNC_3("sse", VAR_5, sizeof("sse"))) {
     FUNC_2("no sse2\n");
     VAR_3->cpuid_features &= ~(VAR_2);
    }
   }
   VAR_4 = 1;
 }
 return VAR_3->cpuid_features;
}
