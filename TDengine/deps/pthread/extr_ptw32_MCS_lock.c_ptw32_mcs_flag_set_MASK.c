
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTW32_INTERLOCKED_SIZEPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_SIZE ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2 (HANDLE * VAR_0)
{
  HANDLE VAR_1 = (HANDLE)(PTW32_INTERLOCKED_SIZE)FUNC_0(
      (PTW32_INTERLOCKED_SIZEPTR)VAR_0,
      (PTW32_INTERLOCKED_SIZE)-1,
      (PTW32_INTERLOCKED_SIZE)0);
  if ((HANDLE)0 != VAR_1)
    {

      FUNC_1(VAR_1);
    }
}
