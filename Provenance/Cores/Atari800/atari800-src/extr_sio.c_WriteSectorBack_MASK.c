
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef char UBYTE ;


 int* VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (char,int,int ) ;
 char FUNC_1 (char,int ) ;

__attribute__((used)) static UBYTE FUNC_2(void)
{
 UWORD VAR_3;
 UBYTE VAR_4;

 VAR_3 = VAR_0[2] + (VAR_0[3] << 8);
 VAR_4 = VAR_0[0] - '1';
 if (VAR_4 >= VAR_2)
  return 0;
 switch (VAR_0[1]) {
 case 0x4f:
  return FUNC_1(VAR_4, VAR_1);
 case 0x50:
 case 0x57:
 case 0xD0:
 case 0xD7:
  return FUNC_0(VAR_4, VAR_3, VAR_1);
 default:
  return 'E';
 }
}
