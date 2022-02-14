
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int * VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, u8 *VAR_2, int VAR_3)
{
 u8 VAR_4 = FUNC_1(((void*)0), 0x1C);

 while (VAR_3 != 0)
 {
  FUNC_2(((void*)0), 0x1C, VAR_4 | (VAR_2[0] & 4 ? 0x80 : 0));
  VAR_2[1] = FUNC_0(((void*)0), VAR_0[VAR_2[0] & 3]);
  VAR_3--;
  VAR_2 += 2;
 }

 FUNC_2(((void*)0), 0x1C, VAR_4);
}
