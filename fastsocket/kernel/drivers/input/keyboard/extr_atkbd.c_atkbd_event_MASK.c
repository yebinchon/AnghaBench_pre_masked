
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atkbd {int softrepeat; int write; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct atkbd*,int ) ;
 struct atkbd* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct atkbd *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_6->write)
  return -1;

 switch (VAR_3) {

  case 129:
   FUNC_0(VAR_6, VAR_0);
   return 0;

  case 128:
   if (!VAR_6->softrepeat)
    FUNC_0(VAR_6, VAR_1);
   return 0;
 }

 return -1;
}
