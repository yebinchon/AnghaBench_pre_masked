
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int,int,char*,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_4, int VAR_5)
{
 __u8 VAR_6, VAR_7, VAR_8;
 __u32 VAR_9;

 if (FUNC_0(VAR_5, VAR_3, &VAR_6) < 0) {
  FUNC_1("SPI rd_mode");
  return;
 }
 if (FUNC_0(VAR_5, VAR_1, &VAR_7) < 0) {
  FUNC_1("SPI rd_lsb_fist");
  return;
 }
 if (FUNC_0(VAR_5, VAR_0, &VAR_8) < 0) {
  FUNC_1("SPI bits_per_word");
  return;
 }
 if (FUNC_0(VAR_5, VAR_2, &VAR_9) < 0) {
  FUNC_1("SPI max_speed_hz");
  return;
 }

 FUNC_2("%s: spi mode %d, %d bits %sper word, %d Hz max\n",
  VAR_4, VAR_6, VAR_8, VAR_7 ? "(lsb first) " : "", VAR_9);
}
