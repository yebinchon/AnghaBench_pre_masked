
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;
struct adbhid {int id; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adbhid* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_3, unsigned int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct adbhid *VAR_7 = FUNC_0(VAR_3);
 unsigned char VAR_8;

 switch (VAR_4) {
 case 128:
  VAR_8 = (FUNC_2(VAR_2, VAR_3->led) ? 4 : 0) |
   (FUNC_2(VAR_1, VAR_3->led) ? 1 : 0) |
   (FUNC_2(VAR_0, VAR_3->led) ? 2 : 0);
  FUNC_1(VAR_8, VAR_7->id);
  return 0;
 }

 return -1;
}
