
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tag; } ;
typedef TYPE_1__ line_t ;
struct TYPE_5__ {scalar_t__ tag; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int
FUNC_0
( line_t* VAR_2,
  int VAR_3 )
{
    int VAR_4;

    for (VAR_4=VAR_3+1;VAR_4<VAR_0;VAR_4++)
 if (VAR_1[VAR_4].tag == VAR_2->tag)
     return VAR_4;

    return -1;
}
