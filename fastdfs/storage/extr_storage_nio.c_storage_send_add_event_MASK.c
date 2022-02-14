
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct fast_task_info {TYPE_1__ event; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct fast_task_info*) ;

int FUNC_1(struct fast_task_info *VAR_1)
{
 VAR_1->offset = 0;


 FUNC_0(VAR_1->event.fd, VAR_0, VAR_1);

 return 0;
}
