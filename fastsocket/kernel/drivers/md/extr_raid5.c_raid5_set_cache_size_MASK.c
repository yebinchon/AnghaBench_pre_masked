
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int max_nr_stripes; } ;
struct mddev {struct r5conf* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct r5conf*) ;
 scalar_t__ FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct mddev*) ;

int
FUNC_3(struct mddev *VAR_1, int VAR_2)
{
 struct r5conf *VAR_3 = VAR_1->private;
 int VAR_4;

 if (VAR_2 <= 16 || VAR_2 > 32768)
  return -VAR_0;
 while (VAR_2 < VAR_3->max_nr_stripes) {
  if (FUNC_0(VAR_3))
   VAR_3->max_nr_stripes--;
  else
   break;
 }
 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;
 while (VAR_2 > VAR_3->max_nr_stripes) {
  if (FUNC_1(VAR_3))
   VAR_3->max_nr_stripes++;
  else break;
 }
 return 0;
}
