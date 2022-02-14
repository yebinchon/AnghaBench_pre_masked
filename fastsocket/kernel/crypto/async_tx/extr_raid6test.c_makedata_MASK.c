
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_0/sizeof(u32); VAR_5 += sizeof(u32)) {
   u32 *VAR_6 = FUNC_0(VAR_1[VAR_4]) + VAR_5;

   *VAR_6 = FUNC_1();
  }

  VAR_2[VAR_4] = VAR_1[VAR_4];
 }
}
