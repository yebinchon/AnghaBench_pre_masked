
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int IOHIDElementRef ;
typedef int CFComparisonResult ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

CFComparisonResult FUNC_3(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
   uint32_t VAR_3 = (uint32_t)FUNC_2((IOHIDElementRef)VAR_0);
   uint32_t VAR_4 = (uint32_t)FUNC_2((IOHIDElementRef)VAR_1);
   uint32_t VAR_5 = (uint32_t)FUNC_1((IOHIDElementRef)VAR_0);
   uint32_t VAR_6 = (uint32_t)FUNC_1((IOHIDElementRef)VAR_1);
   uint32_t VAR_7 = (uint32_t)FUNC_0((IOHIDElementRef)VAR_0);
   uint32_t VAR_8 = (uint32_t)FUNC_0((IOHIDElementRef)VAR_1);

   if (VAR_3 != VAR_4)
      return (CFComparisonResult)(VAR_3 > VAR_4);

   if (VAR_5 != VAR_6)
       return (CFComparisonResult)(VAR_5 > VAR_6);

   return (CFComparisonResult)(VAR_7 > VAR_8);
}
