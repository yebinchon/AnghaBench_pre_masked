
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_setting_information {int h_active; int bpp; scalar_t__ iga_path; } ;
struct lvds_chip_information {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(
 struct lvds_setting_information *VAR_7,
       struct lvds_chip_information
       *VAR_8)
{
 unsigned char VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14 = 0;
 unsigned long VAR_15;

 VAR_15 = VAR_7->h_active * (VAR_7->bpp >> 3);
 if (VAR_15 & 0x1F) {
  VAR_14 = ((VAR_15 + 31) & ~31) >> 3;
  if (VAR_7->iga_path == VAR_5) {
   if (VAR_7->bpp > 8) {
    VAR_12 = (unsigned char)(VAR_14 & 0xFF);
    FUNC_1(VAR_3, VAR_6, VAR_12);
    VAR_13 = FUNC_0(VAR_6, VAR_4) & 0xFC;
    VAR_13 |=
        (unsigned
         char)((VAR_14 & 0x300) >> 8);
    FUNC_1(VAR_4, VAR_6, VAR_13);
   }


   VAR_13 = FUNC_0(VAR_6, VAR_4) & 0xF3;
   VAR_13 |= (unsigned char)((VAR_14 & 0x600) >> 7);
   FUNC_1(VAR_4, VAR_6, VAR_13);
   VAR_11 = (unsigned char)((VAR_14 >> 1) & 0xFF);
   VAR_11 += 2;
   FUNC_1(VAR_2, VAR_6, VAR_11);
  } else {
   if (VAR_7->bpp > 8) {
    VAR_9 = (unsigned char)(VAR_14 & 0xFF);
    FUNC_1(VAR_0, VAR_6, VAR_9);
    VAR_10 = FUNC_0(VAR_6, VAR_1) & 0x1F;
    VAR_10 |=
        (unsigned
         char)((VAR_14 & 0x700) >> 3);
    FUNC_1(VAR_1, VAR_6, VAR_10);
   }
  }
 }
}
