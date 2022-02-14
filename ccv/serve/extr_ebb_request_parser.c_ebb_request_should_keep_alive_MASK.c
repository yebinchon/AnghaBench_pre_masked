
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keep_alive; int version_major; scalar_t__ version_minor; } ;
typedef TYPE_1__ ebb_request ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(ebb_request *VAR_2)
{
  if(VAR_2->keep_alive == -1)
    if(VAR_2->version_major == 1)
      return (VAR_2->version_minor != 0);
    else if(VAR_2->version_major == 0)
      return VAR_0;
    else
      return VAR_1;
  else
    return VAR_2->keep_alive;
}
