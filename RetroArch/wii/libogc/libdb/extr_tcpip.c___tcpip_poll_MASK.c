
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef void* s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,void*) ;
 void* FUNC_1 () ;
 void* VAR_1 ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4()
{
 u32 VAR_5;
 s64 VAR_6;

 if(VAR_2==((void*)0)) return;

 FUNC_2(VAR_2);

 if(VAR_1 && (VAR_3 || VAR_4)) {
  VAR_6 = FUNC_1();
  VAR_5 = FUNC_0(VAR_1,VAR_6);
  if(VAR_5>=VAR_0) {
   FUNC_3();
   VAR_1 = FUNC_1();
  }
 } else
  VAR_1 = 0;
}
