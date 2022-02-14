
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int side_t ;
struct TYPE_4__ {TYPE_1__** lines; } ;
struct TYPE_3__ {size_t* sidenum; } ;


 TYPE_2__* VAR_0 ;
 int * VAR_1 ;

side_t*
FUNC_0
( int VAR_2,
  int VAR_3,
  int VAR_4 )
{
    return &VAR_1[ (VAR_0[VAR_2].lines[VAR_3])->sidenum[VAR_4] ];
}
