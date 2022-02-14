
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ entitynum; } ;
typedef TYPE_1__ mapbrush_t ;
struct TYPE_13__ {int numbrushes; int firstbrush; } ;
typedef TYPE_2__ entity_t ;
struct TYPE_14__ {int numbrushes; int firstbrush; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_8__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4 (entity_t *VAR_4)
{
 int VAR_5;
 int VAR_6;
 mapbrush_t *VAR_7;
 int VAR_8;




 VAR_5 = VAR_4->numbrushes;
 VAR_6 = VAR_0[0].numbrushes;

 VAR_7 = FUNC_1(VAR_5*sizeof(mapbrush_t));
 FUNC_2 (VAR_7, VAR_1 + VAR_4->firstbrush, VAR_5*sizeof(mapbrush_t));







 FUNC_3 (VAR_1 + VAR_6 + VAR_5,
  VAR_1 + VAR_6,
  sizeof(mapbrush_t) * (VAR_3 - VAR_6 - VAR_5) );


 FUNC_2 (VAR_1 + VAR_6, VAR_7, sizeof(mapbrush_t) * VAR_5);


 VAR_0[0].numbrushes += VAR_5;
 for (VAR_8=1 ; VAR_8<VAR_2 ; VAR_8++)
  VAR_0[VAR_8].firstbrush += VAR_5;
 FUNC_0(VAR_7);

 VAR_4->numbrushes = 0;
}
