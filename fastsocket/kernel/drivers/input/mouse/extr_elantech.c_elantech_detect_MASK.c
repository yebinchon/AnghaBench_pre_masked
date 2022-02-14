
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct ps2dev*,unsigned char*,int ) ;
 scalar_t__ FUNC_2 (struct psmouse*,int ,unsigned char*) ;

int FUNC_3(struct psmouse *VAR_5, bool VAR_6)
{
 struct ps2dev *VAR_7 = &VAR_5->ps2dev;
 unsigned char VAR_8[3];

 FUNC_1(&VAR_5->ps2dev, ((void*)0), VAR_3);

 if (FUNC_1(VAR_7, ((void*)0), VAR_1) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, ((void*)0), VAR_4) ||
     FUNC_1(VAR_7, VAR_8, VAR_2)) {
  FUNC_0("elantech.c: sending Elantech magic knock failed.\n");
  return -1;
 }





 if (VAR_8[0] != 0x3c || VAR_8[1] != 0x03 || VAR_8[2] != 0xc8) {
  FUNC_0("elantech.c: "
    "unexpected magic knock result 0x%02x, 0x%02x, 0x%02x.\n",
    VAR_8[0], VAR_8[1], VAR_8[2]);
  return -1;
 }






 if (FUNC_2(VAR_5, VAR_0, VAR_8)) {
  FUNC_0("elantech.c: failed to query firmware version.\n");
  return -1;
 }

 FUNC_0("elantech.c: Elantech version query result 0x%02x, 0x%02x, 0x%02x.\n",
   VAR_8[0], VAR_8[1], VAR_8[2]);

 if (VAR_8[0] == 0 || VAR_8[1] != 0) {
  FUNC_0("elantech.c: Probably not a real Elantech touchpad. Aborting.\n");
  return -1;
 }

 if (VAR_6) {
  VAR_5->vendor = "Elantech";
  VAR_5->name = "Touchpad";
 }

 return 0;
}
