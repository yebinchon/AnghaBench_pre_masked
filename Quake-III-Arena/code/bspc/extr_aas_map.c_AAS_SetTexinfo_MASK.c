
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int contents; int numsides; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_0(mapbrush_t *VAR_14)
{
 int VAR_15;
 side_t *VAR_16;

 if (VAR_14->contents & (VAR_4
         | VAR_0
         | VAR_1
         | VAR_8
         | VAR_3
         | VAR_2
         | VAR_9
         | VAR_5
         | VAR_7
         | VAR_10
         | VAR_6))
 {


  for (VAR_15 = 0; VAR_15 < VAR_14->numsides; VAR_15++)
  {
   VAR_16 = VAR_14->original_sides + VAR_15;

   VAR_16->texinfo = 0;
  }
 }
 else
 {


  for (VAR_15 = 0; VAR_15 < VAR_14->numsides; VAR_15++)
  {
   VAR_16 = VAR_14->original_sides + VAR_15;

   if (VAR_16->flags & (VAR_12|VAR_11)) VAR_16->texinfo = 0;
   else VAR_16->texinfo = VAR_13;
  }
 }
}
