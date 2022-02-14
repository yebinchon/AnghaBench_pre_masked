
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
   int VAR_2;

   VAR_1[0] = 0;
   for (VAR_2=1; VAR_2<255; ++VAR_2)
      VAR_1[VAR_2] = FUNC_0(VAR_2/255.);
   VAR_1[255] = 1;

   VAR_0[0] = 0;
   for (VAR_2=1; VAR_2<255; ++VAR_2)
      VAR_0[VAR_2] = FUNC_1(VAR_2/255., 1/.45455);
   VAR_0[255] = 1;
}
