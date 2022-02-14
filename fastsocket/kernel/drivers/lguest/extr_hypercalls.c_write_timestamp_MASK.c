
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct lg_cpu {TYPE_2__* lg; } ;
struct TYPE_4__ {TYPE_1__* lguest_data; } ;
struct TYPE_3__ {int time; } ;


 scalar_t__ FUNC_0 (int *,struct timespec*,int) ;
 int FUNC_1 (struct lg_cpu*,char*) ;
 int FUNC_2 (struct timespec*) ;

void FUNC_3(struct lg_cpu *VAR_0)
{
 struct timespec VAR_1;
 FUNC_2(&VAR_1);
 if (FUNC_0(&VAR_0->lg->lguest_data->time,
    &VAR_1, sizeof(struct timespec)))
  FUNC_1(VAR_0, "Writing timestamp");
}
