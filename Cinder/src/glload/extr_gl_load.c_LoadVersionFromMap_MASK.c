
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int majorVersion; int minorVersion; int compatibilityProfile; int (* LoadVersion ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 for(; VAR_5 < VAR_0; ++VAR_5)
 {
  if(
   (VAR_1[VAR_5].majorVersion == VAR_2) &&
   (VAR_1[VAR_5].minorVersion == VAR_3) &&
   (VAR_1[VAR_5].compatibilityProfile == VAR_4))
  {
   return VAR_1[VAR_5].LoadVersion();
  }
 }

 return -1;
}
