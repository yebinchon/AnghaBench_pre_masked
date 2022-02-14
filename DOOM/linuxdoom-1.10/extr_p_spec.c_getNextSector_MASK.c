
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sector_t ;
struct TYPE_3__ {int flags; int * frontsector; int * backsector; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;

sector_t*
FUNC_0
( line_t* VAR_1,
  sector_t* VAR_2 )
{
    if (!(VAR_1->flags & VAR_0))
 return ((void*)0);

    if (VAR_1->frontsector == VAR_2)
 return VAR_1->backsector;

    return VAR_1->frontsector;
}
