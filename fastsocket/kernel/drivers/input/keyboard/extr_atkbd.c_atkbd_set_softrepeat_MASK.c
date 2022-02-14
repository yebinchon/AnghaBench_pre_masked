
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atkbd {unsigned long softrepeat; unsigned char softraw; struct input_dev* dev; int write; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atkbd*) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct atkbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct input_dev *VAR_6, *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 unsigned char VAR_10, VAR_11;

 if (!VAR_3->write)
  return -VAR_1;

 if (FUNC_5(VAR_4, 10, &VAR_8) || VAR_8 > 1)
  return -VAR_0;

 if (VAR_3->softrepeat != VAR_8) {
  VAR_6 = VAR_3->dev;
  VAR_10 = VAR_3->softrepeat;
  VAR_11 = VAR_3->softraw;

  VAR_7 = FUNC_1();
  if (!VAR_7)
   return -VAR_2;

  VAR_3->dev = VAR_7;
  VAR_3->softrepeat = VAR_8;
  if (VAR_3->softrepeat)
   VAR_3->softraw = 1;
  FUNC_0(VAR_3);

  VAR_9 = FUNC_3(VAR_3->dev);
  if (VAR_9) {
   FUNC_2(VAR_7);

   VAR_3->dev = VAR_6;
   VAR_3->softrepeat = VAR_10;
   VAR_3->softraw = VAR_11;
   FUNC_0(VAR_3);

   return VAR_9;
  }
  FUNC_4(VAR_6);
 }
 return VAR_5;
}
