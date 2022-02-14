
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,size_t) ;
 int VAR_8 ;
 int FUNC_3 (int,int,int,char*) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(void)
{
 if (!FUNC_0(VAR_5))
  FUNC_2("fpu_module_init: invalid extended state %u\n",
   VAR_5);





 VAR_6[VAR_5] = FUNC_3(VAR_3[VAR_5],
           VAR_8 * VAR_3[VAR_5],
           64 * VAR_3[VAR_5],
           "x86 fpsave state");





 FUNC_4(VAR_6[VAR_5], VAR_2, VAR_1);






 if (VAR_4 == VAR_0) {
  VAR_6[VAR_0] = FUNC_3(VAR_3[VAR_0],
       VAR_8 * VAR_3[VAR_0],
       32 * VAR_3[VAR_0],
       "x86 avx512 save state");
  FUNC_4(VAR_6[VAR_0], VAR_2, VAR_1);
 }



 FUNC_1(&VAR_7);
}
