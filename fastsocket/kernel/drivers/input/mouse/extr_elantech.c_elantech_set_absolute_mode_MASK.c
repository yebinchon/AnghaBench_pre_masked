
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; } ;
struct elantech_data {int hw_version; int reg_10; int reg_11; int reg_21; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct psmouse*,int,unsigned char*) ;
 int FUNC_2 (struct psmouse*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_3)
{
 struct elantech_data *VAR_4 = VAR_3->private;
 unsigned char VAR_5;
 int VAR_6 = VAR_2;
 int VAR_7 = 0;

 switch (VAR_4->hw_version) {
 case 1:
  VAR_4->reg_10 = 0x16;
  VAR_4->reg_11 = 0x8f;
  if (FUNC_2(VAR_3, 0x10, VAR_4->reg_10) ||
      FUNC_2(VAR_3, 0x11, VAR_4->reg_11)) {
   VAR_7 = -1;
  }
  break;

 case 2:

  VAR_4->reg_10 = 0x54;
  VAR_4->reg_11 = 0x88;
  VAR_4->reg_21 = 0x60;
  if (FUNC_2(VAR_3, 0x10, VAR_4->reg_10) ||
      FUNC_2(VAR_3, 0x11, VAR_4->reg_11) ||
      FUNC_2(VAR_3, 0x21, VAR_4->reg_21)) {
   VAR_7 = -1;
   break;
  }
 }

 if (VAR_7 == 0) {






  do {
   VAR_7 = FUNC_1(VAR_3, 0x10, &VAR_5);
   if (VAR_7 == 0)
    break;
   VAR_6--;
   FUNC_0("elantech.c: retrying read (%d).\n",
     VAR_6);
   FUNC_3(VAR_1);
  } while (VAR_6 > 0);

  if (VAR_7) {
   FUNC_4("elantech.c: failed to read back register 0x10.\n");
  } else if (VAR_4->hw_version == 1 &&
      !(VAR_5 & VAR_0)) {
   FUNC_4("elantech.c: touchpad refuses "
    "to switch to absolute mode.\n");
   VAR_7 = -1;
  }
 }

 if (VAR_7)
  FUNC_4("elantech.c: failed to initialise registers.\n");

 return VAR_7;
}
