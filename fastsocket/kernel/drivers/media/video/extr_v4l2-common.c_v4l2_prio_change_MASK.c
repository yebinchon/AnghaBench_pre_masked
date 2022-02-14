
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_prio_state {int * prios; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct v4l2_prio_state *VAR_1, enum v4l2_priority *VAR_2,
       enum v4l2_priority VAR_3)
{
 if (!FUNC_0(VAR_3))
  return -VAR_0;
 if (*VAR_2 == VAR_3)
  return 0;

 FUNC_2(&VAR_1->prios[VAR_3]);
 if (FUNC_0(*VAR_2))
  FUNC_1(&VAR_1->prios[*VAR_2]);
 *VAR_2 = VAR_3;
 return 0;
}
