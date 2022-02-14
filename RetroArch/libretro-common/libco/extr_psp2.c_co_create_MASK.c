
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long* cothread_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int) ;

cothread_t FUNC_2(unsigned int VAR_3, void(*VAR_4)(void))
   {
      unsigned long* VAR_5 = 0;
      if (!VAR_2)
         FUNC_0();
      if (!VAR_1) VAR_1 = &VAR_0;
      VAR_3 += 256;
      VAR_3 &= ~15;

      if ((VAR_5 = (unsigned long*)FUNC_1(VAR_3)))
      {
         unsigned long* VAR_6 = (unsigned long*)((unsigned char*)VAR_5 + VAR_3);
         VAR_5[8] = (unsigned long)VAR_6;
         VAR_5[9] = (unsigned long)VAR_4;
      }

      return VAR_5;
   }
