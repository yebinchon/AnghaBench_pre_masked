
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_driver {int flags; int name; scalar_t__ setpolicy; int target; int init; int verify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 struct cpufreq_driver* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(struct cpufreq_driver *VAR_12)
{
 unsigned long VAR_13;
 int VAR_14;

 if (!VAR_12 || !VAR_12->verify || !VAR_12->init ||
     ((!VAR_12->setpolicy) && (!VAR_12->target)))
  return -VAR_3;

 FUNC_2("trying to register driver %s\n", VAR_12->name);

 if (VAR_12->setpolicy)
  VAR_12->flags |= VAR_0;

 FUNC_7(&VAR_9, VAR_13);
 if (VAR_8) {
  FUNC_8(&VAR_9, VAR_13);
  return -VAR_2;
 }
 VAR_8 = VAR_12;
 FUNC_8(&VAR_9, VAR_13);

 VAR_14 = FUNC_5(&VAR_5,
     &VAR_10);

 if ((!VAR_14) && !(VAR_8->flags & VAR_1)) {
  int VAR_15;
  VAR_14 = -VAR_4;


  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
   if (FUNC_0(VAR_15) && FUNC_3(VAR_6, VAR_15)) {
    VAR_14 = 0;
    break;
   }


  if (VAR_14) {
   FUNC_2("no CPU initialized for driver %s\n",
       VAR_12->name);
   FUNC_6(&VAR_5,
      &VAR_10);

   FUNC_7(&VAR_9, VAR_13);
   VAR_8 = ((void*)0);
   FUNC_8(&VAR_9, VAR_13);
  }
 }

 if (!VAR_14) {
  FUNC_4(&VAR_7);
  FUNC_2("driver %s up and running\n", VAR_12->name);
  FUNC_1();
 }

 return VAR_14;
}
