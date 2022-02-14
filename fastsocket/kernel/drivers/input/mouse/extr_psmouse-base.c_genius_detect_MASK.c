
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_6, bool VAR_7)
{
 struct ps2dev *VAR_8 = &VAR_6->ps2dev;
 unsigned char VAR_9[4];

 VAR_9[0] = 3;
 FUNC_1(VAR_8, VAR_9, VAR_3);
 FUNC_1(VAR_8, ((void*)0), VAR_4);
 FUNC_1(VAR_8, ((void*)0), VAR_4);
 FUNC_1(VAR_8, ((void*)0), VAR_4);
 FUNC_1(VAR_8, VAR_9, VAR_2);

 if (VAR_9[0] != 0x00 || VAR_9[1] != 0x33 || VAR_9[2] != 0x55)
  return -1;

 if (VAR_7) {
  FUNC_0(VAR_0, VAR_6->dev->keybit);
  FUNC_0(VAR_1, VAR_6->dev->keybit);
  FUNC_0(VAR_5, VAR_6->dev->relbit);

  VAR_6->vendor = "Genius";
  VAR_6->name = "Mouse";
  VAR_6->pktsize = 4;
 }

 return 0;
}
