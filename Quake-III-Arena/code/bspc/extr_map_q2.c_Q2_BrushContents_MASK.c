
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int contents; size_t texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_6__ {int numsides; int brushnum; int entitynum; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_7__ {int flags; int texture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

int FUNC_1 (mapbrush_t *VAR_6)
{
 int VAR_7;
 side_t *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = &VAR_6->original_sides[0];
 VAR_7 = VAR_8->contents;
 VAR_10 = VAR_5[VAR_8->texinfo].flags;
 for (VAR_9 = 1; VAR_9 < VAR_6->numsides; VAR_9++, VAR_8++)
 {
  VAR_8 = &VAR_6->original_sides[VAR_9];
  VAR_10 |= VAR_5[VAR_8->texinfo].flags;
  if (VAR_8->contents != VAR_7)
  {
   FUNC_0("Entity %i, Brush %i: mixed face contents\n"
    , VAR_6->entitynum, VAR_6->brushnum);
   FUNC_0("texture name = %s\n", VAR_5[VAR_8->texinfo].texture);
   break;
  }
 }



 if ( VAR_10 & (VAR_3|VAR_4) )
 {
  VAR_7 |= VAR_0;
  if (VAR_7 & VAR_1)
  {
   VAR_7 &= ~VAR_1;
   VAR_7 |= VAR_2;
  }
 }

 return VAR_7;
}
