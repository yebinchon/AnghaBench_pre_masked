
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

int
FUNC_2 (pthread_t VAR_5, int VAR_6,
         const struct sched_param *VAR_7)
{
  int VAR_8;


  VAR_8 = FUNC_0 (VAR_5, 0);
  if (0 != VAR_8)
    {
      return VAR_8;
    }


  if (VAR_6 < VAR_3 || VAR_6 > VAR_2)
    {
      return VAR_0;
    }


  if (VAR_6 != VAR_4)
    {
      return VAR_1;
    }

  return (FUNC_1 (VAR_5, VAR_6, VAR_7->sched_priority));
}
