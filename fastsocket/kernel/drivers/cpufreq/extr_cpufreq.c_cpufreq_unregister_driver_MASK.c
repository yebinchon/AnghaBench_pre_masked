
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_driver {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct cpufreq_driver* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct cpufreq_driver *VAR_6)
{
 unsigned long VAR_7;

 FUNC_0();

 if (!VAR_3 || (VAR_6 != VAR_3)) {
  FUNC_1();
  return -VAR_0;
 }

 FUNC_2("unregistering driver %s\n", VAR_6->name);

 FUNC_3(&VAR_1, &VAR_5);
 FUNC_4(&VAR_2);

 FUNC_5(&VAR_4, VAR_7);
 VAR_3 = ((void*)0);
 FUNC_6(&VAR_4, VAR_7);

 return 0;
}
