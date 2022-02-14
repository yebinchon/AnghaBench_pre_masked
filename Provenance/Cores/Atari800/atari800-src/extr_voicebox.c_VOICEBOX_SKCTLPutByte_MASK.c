
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(int VAR_3)
{
 static int VAR_4;
 static int VAR_5;
 static int VAR_6;
 static int VAR_7;
 if (!VAR_1 || VAR_2) return;
 if (VAR_0&0x08) return;



 if (VAR_5 == 0xf7 && VAR_4 == 0x03 && (VAR_3 == 0xff || VAR_3 == 0x03)) {
  if (VAR_3 != 0x03) {
   VAR_6 += (1<< (7-VAR_7));
  }
  VAR_7++;
  if (VAR_7 > 7 ) {
   VAR_7 = 0;



   FUNC_0(VAR_6);
   VAR_6 = 0;
  }
 }
 VAR_5 = VAR_4;
 VAR_4 = VAR_3;
}
