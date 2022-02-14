
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; int pktsize; TYPE_1__* dev; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int keybit; int relbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct psmouse*,int ) ;
 int FUNC_2 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_7, bool VAR_8)
{
 struct ps2dev *VAR_9 = &VAR_7->ps2dev;
 unsigned char VAR_10[2];

 FUNC_1(VAR_7, 0);

 VAR_10[0] = 200;
 FUNC_2(VAR_9, VAR_10, VAR_4);
 VAR_10[0] = 200;
 FUNC_2(VAR_9, VAR_10, VAR_4);
 VAR_10[0] = 80;
 FUNC_2(VAR_9, VAR_10, VAR_4);
 FUNC_2(VAR_9, VAR_10, VAR_3);

 if (VAR_10[0] != 4)
  return -1;


 VAR_10[0] = 200;
 FUNC_2(VAR_9, VAR_10, VAR_4);
 VAR_10[0] = 80;
 FUNC_2(VAR_9, VAR_10, VAR_4);
 VAR_10[0] = 40;
 FUNC_2(VAR_9, VAR_10, VAR_4);

 if (VAR_8) {
  FUNC_0(VAR_1, VAR_7->dev->keybit);
  FUNC_0(VAR_6, VAR_7->dev->relbit);
  FUNC_0(VAR_5, VAR_7->dev->relbit);
  FUNC_0(VAR_2, VAR_7->dev->keybit);
  FUNC_0(VAR_0, VAR_7->dev->keybit);

  if (!VAR_7->vendor) VAR_7->vendor = "Generic";
  if (!VAR_7->name) VAR_7->name = "Explorer Mouse";
  VAR_7->pktsize = 4;
 }

 return 0;
}
