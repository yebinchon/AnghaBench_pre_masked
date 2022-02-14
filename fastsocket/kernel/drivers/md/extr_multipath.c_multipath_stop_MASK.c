
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpconf {struct mpconf* multipaths; int pool; } ;
struct mddev {struct mpconf* private; int queue; int thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpconf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (struct mddev *VAR_0)
{
 struct mpconf *VAR_1 = VAR_0->private;

 FUNC_2(&VAR_0->thread);
 FUNC_0(VAR_0->queue);
 FUNC_3(VAR_1->pool);
 FUNC_1(VAR_1->multipaths);
 FUNC_1(VAR_1);
 VAR_0->private = ((void*)0);
 return 0;
}
