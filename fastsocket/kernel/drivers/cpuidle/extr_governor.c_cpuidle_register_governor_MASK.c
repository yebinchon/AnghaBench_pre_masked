
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_governor {scalar_t__ rating; int governor_list; int name; int select; } ;
struct TYPE_2__ {scalar_t__ rating; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cpuidle_governor*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cpuidle_governor *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (!VAR_5 || !VAR_5->select)
  return -VAR_1;

 FUNC_3(&VAR_4);
 if (FUNC_0(VAR_5->name) == ((void*)0)) {
  VAR_6 = 0;
  FUNC_2(&VAR_5->governor_list, &VAR_3);
  if (!VAR_2 ||
      VAR_2->rating < VAR_5->rating)
   FUNC_1(VAR_5);
 }
 FUNC_4(&VAR_4);

 return VAR_6;
}
