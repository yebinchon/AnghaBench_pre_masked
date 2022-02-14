
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int wait_barrier; } ;
struct mddev {struct r1conf* private; } ;


 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (struct r1conf*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mddev *VAR_0, int VAR_1)
{
 struct r1conf *VAR_2 = VAR_0->private;

 switch(VAR_1) {
 case 2:
  FUNC_2(&VAR_2->wait_barrier);
  break;
 case 1:
  FUNC_1(VAR_2);
  break;
 case 0:
  FUNC_0(VAR_2);
  break;
 }
}
