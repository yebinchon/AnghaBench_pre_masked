
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {int dummy; } ;
struct psmouse {struct alps_data* private; struct ps2dev ps2dev; } ;
struct alps_data {TYPE_1__* nibble_commands; } ;
struct TYPE_2__ {int command; int data; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ps2dev*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_0, int VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_0->ps2dev;
 struct alps_data *VAR_3 = VAR_0->private;
 int VAR_4;
 unsigned char *VAR_5;
 unsigned char VAR_6[4];

 FUNC_0(VAR_1 > 0xf);

 VAR_4 = VAR_3->nibble_commands[VAR_1].command;
 VAR_5 = (VAR_4 & 0x0f00) ?
  VAR_6 : (unsigned char *)&VAR_3->nibble_commands[VAR_1].data;

 if (FUNC_1(VAR_2, VAR_5, VAR_4))
  return -1;

 return 0;
}
