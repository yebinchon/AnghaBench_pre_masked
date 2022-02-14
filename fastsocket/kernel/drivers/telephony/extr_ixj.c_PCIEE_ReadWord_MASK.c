
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(WORD VAR_0, WORD VAR_1, WORD * VAR_2)
{
 BYTE VAR_3;
 WORD VAR_4 = VAR_0 + 3;
 DWORD VAR_5;
 BYTE VAR_6;
 *VAR_2 = 0;
 VAR_3 = FUNC_2(VAR_4);
 VAR_3 = VAR_3 | 0x02;
 VAR_3 = VAR_3 & 0xfe;
 FUNC_4(VAR_3, VAR_4);

 FUNC_3(1);

 FUNC_1(VAR_4, VAR_3, 1);
 FUNC_1(VAR_4, VAR_3, 1);
 FUNC_1(VAR_4, VAR_3, 0);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  FUNC_1(VAR_4, VAR_3, VAR_1 & 0x80 ? 1 : 0);
  VAR_1 <<= 1;
 }

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  *VAR_2 = (*VAR_2 << 1) | VAR_6;
 }

 FUNC_3(1);

 VAR_3 = VAR_3 & 0xfd;
 FUNC_4(VAR_3, VAR_4);

 return 0;
}
