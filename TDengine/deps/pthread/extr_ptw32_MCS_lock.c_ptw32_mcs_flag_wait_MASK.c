
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTW32_INTERLOCKED_SIZEPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_SIZE ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;

void
FUNC_5 (HANDLE * VAR_2)
{
  if ((PTW32_INTERLOCKED_LONG)0 ==
        FUNC_3((PTW32_INTERLOCKED_SIZEPTR)VAR_2,
                                            (PTW32_INTERLOCKED_SIZE)0))
    {


      HANDLE VAR_3 = FUNC_1(((void*)0), VAR_1, VAR_1, ((void*)0));

      if ((PTW32_INTERLOCKED_SIZE)0 == FUNC_2(
                     (PTW32_INTERLOCKED_SIZEPTR)VAR_2,
                     (PTW32_INTERLOCKED_SIZE)VAR_3,
                     (PTW32_INTERLOCKED_SIZE)0))
 {

   FUNC_4(VAR_3, VAR_0);
 }

      FUNC_0(VAR_3);
    }
}
