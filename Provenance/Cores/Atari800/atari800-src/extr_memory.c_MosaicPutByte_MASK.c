
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(UWORD VAR_4, UBYTE VAR_5)
{
 int VAR_6;
 if (VAR_4 < 0xffc0) return;



 VAR_6 = VAR_4 - 0xffc0;
 if (VAR_6 == VAR_1 || (VAR_6 >= VAR_2 && VAR_1 >= VAR_2)) return;
 if (VAR_6 >= VAR_2 && VAR_1 < VAR_2) {

  FUNC_4(VAR_3 + VAR_1*0x1000, VAR_0 + 0xc000,0x1000);
  FUNC_3(0xc000, 0xff, 0x1000);
  FUNC_2(0xc000, 0xcfff);
 }
 else if (VAR_6 < VAR_2 && VAR_1 >= VAR_2) {

  FUNC_4(VAR_0 + 0xc000, VAR_3+VAR_6*0x1000,0x1000);
  FUNC_1(0xc000, 0xcfff);
 }
 else {

  FUNC_4(VAR_3 + VAR_1*0x1000, VAR_0 + 0xc000, 0x1000);
  FUNC_4(VAR_0 + 0xc000, VAR_3 + VAR_6*0x1000, 0x1000);
  FUNC_1(0xc000, 0xcfff);
 }
 VAR_1 = VAR_6;
}
