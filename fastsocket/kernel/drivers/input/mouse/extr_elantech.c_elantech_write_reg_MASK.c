
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; struct elantech_data* private; } ;
struct elantech_data {int hw_version; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct psmouse*,int *,unsigned char) ;
 int FUNC_1 (char*,unsigned char,unsigned char) ;
 int FUNC_2 (int *,int *,unsigned char) ;
 int FUNC_3 (struct psmouse*,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_3, unsigned char VAR_4,
    unsigned char VAR_5)
{
 struct elantech_data *VAR_6 = VAR_3->private;
 int VAR_7 = 0;

 if (VAR_4 < 0x10 || VAR_4 > 0x26)
  return -1;

 if (VAR_4 > 0x11 && VAR_4 < 0x20)
  return -1;

 switch (VAR_6->hw_version) {
 case 1:
  if (FUNC_3(VAR_3, VAR_1) ||
      FUNC_3(VAR_3, VAR_4) ||
      FUNC_3(VAR_3, VAR_5) ||
      FUNC_2(&VAR_3->ps2dev, ((void*)0), VAR_2)) {
   VAR_7 = -1;
  }
  break;

 case 2:
  if (FUNC_0(VAR_3, ((void*)0), VAR_0) ||
      FUNC_0(VAR_3, ((void*)0), VAR_1) ||
      FUNC_0(VAR_3, ((void*)0), VAR_0) ||
      FUNC_0(VAR_3, ((void*)0), VAR_4) ||
      FUNC_0(VAR_3, ((void*)0), VAR_0) ||
      FUNC_0(VAR_3, ((void*)0), VAR_5) ||
      FUNC_0(VAR_3, ((void*)0), VAR_2)) {
   VAR_7 = -1;
  }
  break;
 }

 if (VAR_7)
  FUNC_1("elantech.c: failed to write register 0x%02x with value 0x%02x.\n",
   VAR_4, VAR_5);

 return VAR_7;
}
