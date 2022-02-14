
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_5__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__**) ;

int
FUNC_2 (pthread_attr_t * VAR_1)
{
  if (FUNC_1 (VAR_1) != 0)
    {
      return VAR_0;
    }




  (*VAR_1)->valid = 0;
  FUNC_0 (*VAR_1);
  *VAR_1 = ((void*)0);

  return 0;
}
