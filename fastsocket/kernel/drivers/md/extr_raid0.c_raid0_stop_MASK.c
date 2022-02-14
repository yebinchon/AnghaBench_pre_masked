
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r0conf {struct r0conf* devlist; struct r0conf* strip_zone; } ;
struct mddev {struct r0conf* private; int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct r0conf*) ;

__attribute__((used)) static int FUNC_2(struct mddev *VAR_0)
{
 struct r0conf *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0->queue);
 FUNC_1(VAR_1->strip_zone);
 FUNC_1(VAR_1->devlist);
 FUNC_1(VAR_1);
 VAR_0->private = ((void*)0);
 return 0;
}
