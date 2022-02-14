
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hardware; scalar_t__ pal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*,char const*,int,char const*) ;

__attribute__((used)) static void FUNC_1(void)
{
 const char *VAR_6, *VAR_7, *VAR_8 = "";
 int VAR_9;

 if (VAR_5 & VAR_3) {
  VAR_6 = "Master System";



 } else if (VAR_5 & VAR_2) {
  VAR_6 = "Pico";
 } else if ((VAR_5 & (VAR_0|VAR_1)) == (VAR_0|VAR_1)) {
  VAR_6 = "32X + Mega CD";
  if ((VAR_4.m.hardware & 0xc0) == 0x80)
   VAR_6 = "32X + Sega CD";
 } else if (VAR_5 & VAR_1) {
  VAR_6 = "Mega CD";
  if ((VAR_4.m.hardware & 0xc0) == 0x80)
   VAR_6 = "Sega CD";
 } else if (VAR_5 & VAR_0) {
  VAR_6 = "32X";
 } else {
  VAR_6 = "MegaDrive";
  if ((VAR_4.m.hardware & 0xc0) == 0x80)
   VAR_6 = "Genesis";
 }
 VAR_7 = VAR_4.m.pal ? "PAL" : "NTSC";
 VAR_9 = VAR_4.m.pal ? 50 : 60;

 FUNC_0("%s %s / %dFPS%s", VAR_7, VAR_6, VAR_9, VAR_8);
}
