
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EGLint ;
typedef int EGLDisplay ;
typedef int EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;

bool FUNC_1(void *VAR_3, EGLDisplay VAR_4, EGLConfig VAR_5)
{

   EGLint VAR_6, VAR_7, VAR_8;
   if (!FUNC_0(VAR_4, VAR_5, VAR_2, &VAR_6))
      return 0;
   if (!FUNC_0(VAR_4, VAR_5, VAR_1, &VAR_7))
      return 0;
   if (!FUNC_0(VAR_4, VAR_5, VAR_0, &VAR_8))
      return 0;

   if (VAR_6 != 8 || VAR_7 != 8 || VAR_8 != 8)
      return 0;

   return 1;
}
