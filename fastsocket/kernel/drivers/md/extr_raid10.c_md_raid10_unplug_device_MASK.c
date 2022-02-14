
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {struct mddev* mddev; } ;
struct mddev {int thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mddev*) ;

void FUNC_2(struct r10conf *VAR_0)
{
 struct mddev *VAR_1 = VAR_0->mddev;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->thread);
}
