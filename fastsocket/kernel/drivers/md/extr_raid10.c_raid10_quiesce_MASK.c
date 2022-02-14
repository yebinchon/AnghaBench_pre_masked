
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {int dummy; } ;
struct mddev {struct r10conf* private; } ;


 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (struct r10conf*,int ) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_0, int VAR_1)
{
 struct r10conf *VAR_2 = VAR_0->private;

 switch(VAR_1) {
 case 1:
  FUNC_1(VAR_2, 0);
  break;
 case 0:
  FUNC_0(VAR_2);
  break;
 }
}
