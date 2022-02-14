
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char const*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 const char *VAR_9;

 if (VAR_5 < 200000) {
  VAR_9 = "1.0"; VAR_8 = 0xfff;
 } else if (VAR_5 < 300000) {
  VAR_9 = "1.1"; VAR_8 = 0xde5;
 } else {
  VAR_9 = "1.3"; VAR_8 = 0x325;
 }

 FUNC_1("viper: setting CPU core voltage to %sV at %d.%03dMHz\n",
   VAR_9, (int)VAR_5 / 1000, (int)VAR_5 % 1000);


 do {
  int VAR_10;

  if (VAR_6)
   VAR_10 = VAR_8;
  else if (VAR_4 < VAR_8 - 0x100)
   VAR_10 = VAR_4 + 0x100;
  else if (VAR_4 > VAR_8 + 0x100)
   VAR_10 = VAR_4 - 0x100;
  else
   VAR_10 = VAR_8;
  VAR_6 = 0;

  FUNC_0(VAR_1, 0);
  FUNC_0(VAR_3, 0);

  for (VAR_7 = 1 << 11 ; VAR_7 > 0 ; VAR_7 >>= 1) {
   FUNC_2(1);

   FUNC_0(VAR_2, VAR_10 & VAR_7);
   FUNC_2(1);

   FUNC_0(VAR_1, 1);
   FUNC_2(1);

   FUNC_0(VAR_1, 0);
  }
  FUNC_2(1);

  FUNC_0(VAR_3, 1);
  FUNC_2(1);

  FUNC_0(VAR_3, 0);

  VAR_4 = VAR_10;
 } while (VAR_4 != VAR_8);
}
