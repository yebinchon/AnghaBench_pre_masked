
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_4__ {scalar_t__ bsd_info; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(task_t VAR_0)
{
 int VAR_1 = -1;

 if (VAR_0->bsd_info) {
  VAR_1 = FUNC_0(VAR_0->bsd_info);
 } else {
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
