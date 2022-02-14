
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 intptr_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,unsigned int) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(void *VAR_1, unsigned VAR_2)
{
   const intptr_t VAR_3 = (intptr_t)VAR_1 % VAR_0;
   VAR_1 = (char *)VAR_1 - VAR_3;
   VAR_2 = VAR_2 + VAR_3;
   int VAR_4 = FUNC_1(VAR_1, VAR_2);
   if (VAR_4 != 0) {
      FUNC_2("munmap error %d\n", VAR_4);
      FUNC_0 (-1);
   }
}
