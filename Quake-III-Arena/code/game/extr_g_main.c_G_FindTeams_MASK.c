
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * targetname; struct TYPE_4__* teammaster; struct TYPE_4__* teamchain; int team; int inuse; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {int num_entities; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( void ) {
 gentity_t *VAR_3, *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_8 = 0;
 for ( VAR_5=1, VAR_3=VAR_1+VAR_5 ; VAR_5 < VAR_2.num_entities ; VAR_5++,VAR_3++ ){
  if (!VAR_3->inuse)
   continue;
  if (!VAR_3->team)
   continue;
  if (VAR_3->flags & VAR_0)
   continue;
  VAR_3->teammaster = VAR_3;
  VAR_7++;
  VAR_8++;
  for (VAR_6=VAR_5+1, VAR_4=VAR_3+1 ; VAR_6 < VAR_2.num_entities ; VAR_6++,VAR_4++)
  {
   if (!VAR_4->inuse)
    continue;
   if (!VAR_4->team)
    continue;
   if (VAR_4->flags & VAR_0)
    continue;
   if (!FUNC_1(VAR_3->team, VAR_4->team))
   {
    VAR_8++;
    VAR_4->teamchain = VAR_3->teamchain;
    VAR_3->teamchain = VAR_4;
    VAR_4->teammaster = VAR_3;
    VAR_4->flags |= VAR_0;


    if ( VAR_4->targetname ) {
     VAR_3->targetname = VAR_4->targetname;
     VAR_4->targetname = ((void*)0);
    }
   }
  }
 }

 FUNC_0 ("%i teams with %i entities\n", VAR_7, VAR_8);
}
