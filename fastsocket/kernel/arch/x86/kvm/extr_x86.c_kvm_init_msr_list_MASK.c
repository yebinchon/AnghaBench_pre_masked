
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int * VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_3[2];
 unsigned VAR_4, VAR_5;


 for (VAR_4 = VAR_5 = VAR_0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (FUNC_1(VAR_1[VAR_4], &VAR_3[0], &VAR_3[1]) < 0)
   continue;
  if (VAR_5 < VAR_4)
   VAR_1[VAR_5] = VAR_1[VAR_4];
  VAR_5++;
 }
 VAR_2 = VAR_5;
}
