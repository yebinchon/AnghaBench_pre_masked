
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; TYPE_1__* dev; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int keybit; } ;


 int FUNC_0 (unsigned char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_4, bool VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_4->ps2dev;
 unsigned char VAR_7[2];
 static const unsigned char VAR_8[] = { 20, 60, 40, 20, 20, 60, 40, 20, 20 };
 int VAR_9;

 VAR_7[0] = 10;
 FUNC_2(VAR_6, VAR_7, VAR_2);
 VAR_7[0] = 0;
 FUNC_2(VAR_6, VAR_7, VAR_3);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++) {
  VAR_7[0] = VAR_8[VAR_9];
  FUNC_2(VAR_6, VAR_7, VAR_2);
 }
 FUNC_2(VAR_6, VAR_7, VAR_1);

 if (VAR_7[0] != 2)
  return -1;

 if (VAR_5) {
  FUNC_1(VAR_0, VAR_4->dev->keybit);

  VAR_4->vendor = "Kensington";
  VAR_4->name = "ThinkingMouse";
 }

 return 0;
}
