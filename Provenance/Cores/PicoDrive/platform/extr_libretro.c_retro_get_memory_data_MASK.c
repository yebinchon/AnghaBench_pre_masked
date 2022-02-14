
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* bram; } ;
struct TYPE_3__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;

void *FUNC_0(unsigned VAR_5)
{
 if (VAR_5 != VAR_3)
  return ((void*)0);

 if (VAR_1 & VAR_0)
  return VAR_2->bram;
 else
  return VAR_4.data;
}
