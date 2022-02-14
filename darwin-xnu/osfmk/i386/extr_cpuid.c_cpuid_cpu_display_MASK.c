
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cpuid_brand_string; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*,char*) ;

void
FUNC_1(
 const char *VAR_1)
{
    if (VAR_0->cpuid_brand_string[0] != '\0') {
 FUNC_0("%s: %s\n", VAR_1, VAR_0->cpuid_brand_string);
    }
}
