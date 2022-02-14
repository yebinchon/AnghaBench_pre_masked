
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int roles ;
struct TYPE_4__ {scalar_t__* coalition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int*,int ,int) ;

void
FUNC_4(task_t VAR_3, int VAR_4[VAR_0])
{
 int VAR_5;
 FUNC_3(VAR_4, 0, VAR_0 * sizeof(VAR_4[0]));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->coalition[VAR_5]) {
   FUNC_1(VAR_3->coalition[VAR_5]);
   VAR_4[VAR_5] = FUNC_0(VAR_3->coalition[VAR_5],
          VAR_2, VAR_3);
   FUNC_2(VAR_3->coalition[VAR_5]);
  } else {
   VAR_4[VAR_5] = VAR_1;
  }
 }
}
