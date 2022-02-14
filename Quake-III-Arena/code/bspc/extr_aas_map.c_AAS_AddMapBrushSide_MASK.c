
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int planenum; scalar_t__ texinfo; scalar_t__ surf; int contents; int * winding; int * original; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int numsides; int contents; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(mapbrush_t *VAR_4, int VAR_5)
{
 side_t *VAR_6;

 if (VAR_3 >= VAR_0)
  FUNC_0 ("MAX_MAPFILE_BRUSHSIDES");

 VAR_6 = VAR_4->original_sides + VAR_4->numsides;
 VAR_6->original = ((void*)0);
 VAR_6->winding = ((void*)0);
 VAR_6->contents = VAR_4->contents;
 VAR_6->flags &= ~(VAR_1|VAR_2);
 VAR_6->surf = 0;
 VAR_6->planenum = VAR_5;
 VAR_6->texinfo = 0;

 VAR_3++;
 VAR_4->numsides++;
}
