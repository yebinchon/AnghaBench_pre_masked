
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int IOHIDDeviceRef ;
typedef int CFStringRef ;
typedef scalar_t__ CFNumberRef ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int32_t FUNC_4(
      IOHIDDeviceRef VAR_1, CFStringRef VAR_2)
{
   CFNumberRef VAR_3 = (CFNumberRef)FUNC_3(VAR_1, VAR_2);

   if (VAR_3 && (FUNC_0(VAR_3) == FUNC_1()))
   {
      int32_t VAR_4 = 0;
      FUNC_2((CFNumberRef)VAR_3, VAR_0, &VAR_4);
      return VAR_4;
   }

   return 0;
}
