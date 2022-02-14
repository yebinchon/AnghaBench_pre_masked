
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int partition_struct ;
struct TYPE_4__ {size_t condtrue; } ;
typedef TYPE_1__ filter_struct ;
struct TYPE_5__ {int * partition; } ;


 TYPE_3__* VAR_0 ;

partition_struct * FUNC_0(filter_struct * VAR_1)
{


  return &VAR_0->partition[VAR_1->condtrue];
}
