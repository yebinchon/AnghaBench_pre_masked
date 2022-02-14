
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned VAR_3, unsigned VAR_4,
   unsigned *VAR_5)
{
 while (VAR_3 < VAR_4) {
  if (!(VAR_3 & (VAR_1 - 1)) &&
      FUNC_0(VAR_2, VAR_3)) {
   VAR_3 += VAR_1;
   continue;
  }

  if (!FUNC_1(VAR_2, VAR_3)) {
   *VAR_5 = VAR_3;
   return 0;
  }

  VAR_3++;
 }

 return -VAR_0;
}
