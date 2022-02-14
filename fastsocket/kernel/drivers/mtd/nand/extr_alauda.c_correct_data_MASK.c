
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,void*,int *) ;
 int FUNC_1 (int *,void*,void*,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1,
  int *VAR_2, int *VAR_3)
{
 u8 VAR_4[3];
 int VAR_5;

 FUNC_0(((void*)0), VAR_0, VAR_4);
 VAR_5 = FUNC_1(((void*)0), VAR_0, VAR_1, VAR_4);
 if (VAR_5) {
  if (VAR_5 > 0)
   (*VAR_2)++;
  else
   (*VAR_3)++;
 }
}
