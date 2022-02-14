
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4(void)
{
 static UBYTE VAR_5[16] = {
  0x20,
  0x00,
  0xff, 0xff,
  0xff, 0xff,
  'H', 'D', 'I', 'S', 'K', '1' , ' ', ' ',
  1,
  1
 };
 int VAR_6;

 if (VAR_4)
  FUNC_1("Get Disk Information Command");

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  return;

 VAR_5[11] = (UBYTE) ('1' + VAR_6);
 VAR_5[15] = (UBYTE) (1 + VAR_6);
 FUNC_2(VAR_5, (UWORD) FUNC_3(VAR_2), 16);

 VAR_1 = 1;
 VAR_0;
}
