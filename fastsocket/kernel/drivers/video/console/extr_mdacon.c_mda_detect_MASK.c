
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_9=0;
 u16 *VAR_10, VAR_11;
 u16 *VAR_12, VAR_13;



 VAR_10 = (u16 *) VAR_7;
 VAR_12 = (u16 *) (VAR_7 + 0x01000);

 VAR_11 = FUNC_2(VAR_10); VAR_13 = FUNC_2(VAR_12);

 FUNC_3(0xAA55, VAR_10); if (FUNC_2(VAR_10) == 0xAA55) VAR_9++;
 FUNC_3(0x55AA, VAR_10); if (FUNC_2(VAR_10) == 0x55AA) VAR_9++;
 FUNC_3(VAR_11, VAR_10);

 if (VAR_9 != 2) {
  return 0;
 }



 FUNC_3(0xA55A, VAR_12); FUNC_3(0x0000, VAR_10);
 if (FUNC_2(VAR_12) == 0xA55A) VAR_9++;

 FUNC_3(0x5AA5, VAR_12); FUNC_3(0x0000, VAR_10);
 if (FUNC_2(VAR_12) == 0x5AA5) VAR_9++;

 FUNC_3(VAR_11, VAR_10); FUNC_3(VAR_13, VAR_12);

 if (VAR_9 == 4) {
  VAR_8 = 0x02000;
 }
 VAR_11 = VAR_13 = FUNC_1(VAR_4) & VAR_0;

 for (VAR_9=0; VAR_9 < 50000 && VAR_11 == VAR_13; VAR_9++) {
  VAR_13 = FUNC_0(VAR_4) & VAR_0;
  FUNC_5(2);
 }

 if (VAR_11 != VAR_13) {
  switch (FUNC_1(VAR_4) & 0x70) {
   case 0x10:
    VAR_5 = VAR_3;
    VAR_6 = "HerculesPlus";
    break;
   case 0x50:
    VAR_5 = VAR_2;
    VAR_6 = "HerculesColor";
    break;
   default:
    VAR_5 = VAR_1;
    VAR_6 = "Hercules";
    break;
  }
 }

 return 1;
}
