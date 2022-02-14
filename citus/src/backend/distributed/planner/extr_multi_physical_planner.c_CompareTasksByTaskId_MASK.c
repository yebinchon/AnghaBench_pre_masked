
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int taskId; } ;
typedef TYPE_1__ Task ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Task *VAR_2 = *((const Task **) VAR_0);
 const Task *VAR_3 = *((const Task **) VAR_1);

 uint32 VAR_4 = VAR_2->taskId;
 uint32 VAR_5 = VAR_3->taskId;

 int VAR_6 = VAR_4 - VAR_5;
 return VAR_6;
}
