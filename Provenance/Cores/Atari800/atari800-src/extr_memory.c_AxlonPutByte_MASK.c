
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 (char*,int,int) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(UWORD VAR_4, UBYTE VAR_5)
{
 int VAR_6;

 if ((VAR_4&0xff00) == 0x0f00) VAR_0[VAR_4] = VAR_5;
 if ((VAR_4&0xff) < 0xc0) return;



 VAR_6 = (VAR_5&VAR_2);
 if (VAR_6 == VAR_1) return;
 FUNC_1(VAR_3 + VAR_1*0x4000, VAR_0 + 0x4000, 0x4000);
 FUNC_1(VAR_0 + 0x4000, VAR_3 + VAR_6*0x4000, 0x4000);
 VAR_1 = VAR_6;
}
