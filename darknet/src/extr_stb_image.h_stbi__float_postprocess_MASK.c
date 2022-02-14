
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,int,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(float *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   if (VAR_0 && VAR_1 != ((void*)0)) {
      int VAR_6 = VAR_5 ? VAR_5 : *VAR_4;
      FUNC_0(VAR_1, *VAR_2, *VAR_3, VAR_6 * sizeof(float));
   }
}
