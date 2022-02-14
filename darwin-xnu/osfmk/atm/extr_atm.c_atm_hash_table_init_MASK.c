
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash_list_lock; int hash_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2()
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1(&VAR_3[VAR_4].hash_list);
  FUNC_0(&VAR_3[VAR_4].hash_list_lock, &VAR_2, &VAR_1);
 }
}
