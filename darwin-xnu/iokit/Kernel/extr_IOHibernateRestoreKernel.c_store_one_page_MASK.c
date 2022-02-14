
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int WK_word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static uint32_t
FUNC_6(uint32_t VAR_3, uint32_t * VAR_4, uint32_t VAR_5,
  uint32_t * VAR_6, uint32_t VAR_7)
{
 uint64_t VAR_8 = FUNC_5(VAR_7);
 uint8_t VAR_9[VAR_2] __attribute__ ((aligned (16)));

 if (VAR_5 != VAR_1)
 {
  VAR_8 = FUNC_4(VAR_0, VAR_8);
  if (VAR_5 != 4) FUNC_0((WK_word*) VAR_4, (WK_word*)(uintptr_t)VAR_8, (WK_word*) &VAR_9[0], VAR_5);
  else
  {
   size_t VAR_10;
   uint32_t VAR_11, *VAR_12;

   VAR_11 = *VAR_4;
   VAR_12 = (uint32_t *)(uintptr_t)VAR_8;
            if (!VAR_11) FUNC_1((void *) VAR_8, VAR_1);
            else for (VAR_10 = 0; VAR_10 < (VAR_1 / sizeof(int32_t)); VAR_10++) *VAR_12++ = VAR_11;
  }
 }
 else
 {
  VAR_8 = FUNC_2((uint64_t) (uintptr_t) VAR_4, VAR_8, VAR_1, VAR_3);
 }

 return FUNC_3((uint8_t *)(uintptr_t)VAR_8, VAR_7);
}
