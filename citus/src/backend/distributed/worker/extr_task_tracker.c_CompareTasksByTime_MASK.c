
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int assignedAt; } ;
typedef TYPE_1__ WorkerTask ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 WorkerTask *VAR_2 = (WorkerTask *) VAR_0;
 WorkerTask *VAR_3 = (WorkerTask *) VAR_1;


 int VAR_4 = VAR_2->assignedAt - VAR_3->assignedAt;
 return VAR_4;
}
