
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_shutdown {int reason; } ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sched_shutdown*,int) ;

int
FUNC_2(unsigned long VAR_2)
{
 struct sched_shutdown VAR_3;

 VAR_3.reason = VAR_1;

 return FUNC_0(
  VAR_0, FUNC_1(&VAR_3, sizeof(VAR_3)));
}
