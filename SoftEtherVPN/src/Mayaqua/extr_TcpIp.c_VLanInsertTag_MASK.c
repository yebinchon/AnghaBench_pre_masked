
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int VAR_0 ;
 int* FUNC_3 (int) ;

void FUNC_4(void **VAR_1, UINT *VAR_2, UINT VAR_3, UINT VAR_4)
{
 UINT VAR_5;
 UCHAR *VAR_6;
 UINT VAR_7;
 UCHAR *VAR_8;
 USHORT VAR_9 = FUNC_1(((USHORT)VAR_3) & 0xFFF);
 USHORT VAR_10;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ||
  *VAR_2 < 14 || VAR_3 == 0)
 {
  return;
 }
 if (VAR_4 == 0)
 {
  VAR_4 = VAR_0;
 }

 VAR_10 = FUNC_1((USHORT)VAR_4);

 VAR_7 = *VAR_2;
 VAR_8 = (UCHAR *)(*VAR_1);

 VAR_5 = VAR_7 + 4;
 VAR_6 = FUNC_3(VAR_5);

 FUNC_0(&VAR_6[12], &VAR_10, sizeof(USHORT));
 FUNC_0(&VAR_6[14], &VAR_9, sizeof(USHORT));

 FUNC_0(&VAR_6[0], &VAR_8[0], 12);
 FUNC_0(&VAR_6[16], &VAR_8[12], VAR_7 - 12);

 *VAR_2 = VAR_5;
 *VAR_1 = VAR_6;

 FUNC_2(VAR_8);
}
