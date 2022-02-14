
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int x86_vendor; int x86; int x86_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
      struct device_attribute *VAR_4,
      char *VAR_5)
{
 int VAR_6 = VAR_1;
 int VAR_7, VAR_8;
 char *VAR_9 = VAR_5;

 VAR_8 = FUNC_2(VAR_9, VAR_6, "x86cpu:vendor:%04X:family:"
       "%04X:model:%04X:feature:",
  VAR_2.x86_vendor,
  VAR_2.x86,
  VAR_2.x86_model);
 VAR_6 -= VAR_8;
 VAR_9 += VAR_8;
 VAR_6 -= 2;
 for (VAR_7 = 0; VAR_7 < VAR_0*32; VAR_7++) {
  if (FUNC_1(VAR_7)) {
   VAR_8 = FUNC_2(VAR_9, VAR_6, ",%04X", VAR_7);
   if (VAR_8 < 0) {
    FUNC_0(1, "x86 features overflow page\n");
    break;
   }
   VAR_6 -= VAR_8;
   VAR_9 += VAR_8;
  }
 }
 *VAR_9++ = ',';
 *VAR_9++ = '\n';
 return VAR_9 - VAR_5;
}
