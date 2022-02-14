
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; int pktsize; TYPE_1__* dev; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int relbit; int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_4, bool VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_4->ps2dev;
 unsigned char VAR_7[2];

 VAR_7[0] = 200;
 FUNC_1(VAR_6, VAR_7, VAR_2);
 VAR_7[0] = 100;
 FUNC_1(VAR_6, VAR_7, VAR_2);
 VAR_7[0] = 80;
 FUNC_1(VAR_6, VAR_7, VAR_2);
 FUNC_1(VAR_6, VAR_7, VAR_1);

 if (VAR_7[0] != 3)
  return -1;

 if (VAR_5) {
  FUNC_0(VAR_0, VAR_4->dev->keybit);
  FUNC_0(VAR_3, VAR_4->dev->relbit);

  if (!VAR_4->vendor) VAR_4->vendor = "Generic";
  if (!VAR_4->name) VAR_4->name = "Wheel Mouse";
  VAR_4->pktsize = 4;
 }

 return 0;
}
