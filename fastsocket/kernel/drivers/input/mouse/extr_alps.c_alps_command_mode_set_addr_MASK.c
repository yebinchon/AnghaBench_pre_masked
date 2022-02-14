
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct alps_data* private; struct ps2dev ps2dev; } ;
struct alps_data {int addr_command; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 scalar_t__ FUNC_1 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_0, int VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_0->ps2dev;
 struct alps_data *VAR_3 = VAR_0->private;
 int VAR_4, VAR_5;

 if (FUNC_1(VAR_2, ((void*)0), VAR_3->addr_command))
  return -1;

 for (VAR_4 = 12; VAR_4 >= 0; VAR_4 -= 4) {
  VAR_5 = (VAR_1 >> VAR_4) & 0xf;
  if (FUNC_0(VAR_0, VAR_5))
   return -1;
 }

 return 0;
}
