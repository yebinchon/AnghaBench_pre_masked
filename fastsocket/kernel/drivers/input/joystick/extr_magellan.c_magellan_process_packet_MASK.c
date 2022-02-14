
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magellan {unsigned char* data; int idx; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(struct magellan* VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->dev;
 unsigned char *VAR_4 = VAR_2->data;
 int VAR_5, VAR_6;

 if (!VAR_2->idx) return;

 switch (VAR_2->data[0]) {

  case 'd':
   if (VAR_2->idx != 25) return;
   if (FUNC_3(VAR_4, 24)) return;
   for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
    FUNC_0(VAR_3, VAR_0[VAR_5],
     (VAR_4[(VAR_5 << 2) + 1] << 12 | VAR_4[(VAR_5 << 2) + 2] << 8 |
      VAR_4[(VAR_5 << 2) + 3] << 4 | VAR_4[(VAR_5 << 2) + 4]) - 32768);
   break;

  case 'k':
   if (VAR_2->idx != 4) return;
   if (FUNC_3(VAR_4, 3)) return;
   VAR_6 = (VAR_4[1] << 1) | (VAR_4[2] << 5) | VAR_4[3];
   for (VAR_5 = 0; VAR_5 < 9; VAR_5++) FUNC_1(VAR_3, VAR_1[VAR_5], (VAR_6 >> VAR_5) & 1);
   break;
 }

 FUNC_2(VAR_3);
}
