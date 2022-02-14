
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int safemode; int thread; int sysfs_state; scalar_t__ external; int writes_pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct mddev *VAR_1 = (struct mddev *) VAR_0;

 if (!FUNC_0(&VAR_1->writes_pending)) {
  VAR_1->safemode = 1;
  if (VAR_1->external)
   FUNC_2(VAR_1->sysfs_state);
 }
 FUNC_1(VAR_1->thread);
}
