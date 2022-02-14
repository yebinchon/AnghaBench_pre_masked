
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*,struct input_dev*,int ,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_2,
     unsigned char VAR_3[],
     bool VAR_4)
{
 struct alps_data *VAR_5 = VAR_2->private;
 struct input_dev *VAR_6 = VAR_5->dev2;

 if (VAR_4)
  FUNC_0(VAR_2, VAR_6, VAR_2->dev,
    VAR_3[0] & 1, VAR_3[0] & 2, VAR_3[0] & 4);

 FUNC_1(VAR_6, VAR_0,
  VAR_3[1] ? VAR_3[1] - ((VAR_3[0] << 4) & 0x100) : 0);
 FUNC_1(VAR_6, VAR_1,
  VAR_3[2] ? ((VAR_3[0] << 3) & 0x100) - VAR_3[2] : 0);

 FUNC_2(VAR_6);
}
