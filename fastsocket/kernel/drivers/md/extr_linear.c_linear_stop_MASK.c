
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int * private; int queue; int reconfig_mutex; } ;
struct linear_conf {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct linear_conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct linear_conf* FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5 (struct mddev *VAR_0)
{
 struct linear_conf *VAR_1 =
  FUNC_4(VAR_0->private,
       FUNC_2(
        &VAR_0->reconfig_mutex));
 FUNC_3();
 FUNC_0(VAR_0->queue);
 FUNC_1(VAR_1);
 VAR_0->private = ((void*)0);

 return 0;
}
