
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int*) ;
 int* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 const int *VAR_4;
 int VAR_5, VAR_6 = 0;
 int VAR_7 = 0;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == ((void*)0))
  return 0;

 FUNC_1(VAR_1, VAR_0, &VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
 {
  if (VAR_4[FUNC_0(VAR_5, VAR_3)] & VAR_2)
   VAR_6++;
 }

 return VAR_6;
}
