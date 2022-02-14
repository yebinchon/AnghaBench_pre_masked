
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int entitynum; struct TYPE_10__* next; struct TYPE_10__* original; int brushnum; } ;
typedef TYPE_1__ bspbrush_t ;
struct TYPE_13__ {int contents; int maxs; int mins; int detail; } ;
struct TYPE_12__ {int origin; } ;
struct TYPE_11__ {TYPE_1__* brushes; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,char*,char*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*,double,scalar_t__*) ;
 int FUNC_8 (char*,int,int ) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*,char*,int,int,int) ;

bspbrush_t *FUNC_10( void ) {
 bspbrush_t *VAR_11;


 FUNC_0();


 if ( !FUNC_3( VAR_4 ) ) {

  return ((void*)0);
 }


 if ( VAR_4->contents & (VAR_3|VAR_1) )
 {
  VAR_4->detail = VAR_10;
  VAR_5++;
 }
 if ( VAR_4->contents & VAR_2 )
 {
  char VAR_12[32];
  vec3_t VAR_13;

  if (VAR_9 == 1) {
   FUNC_8 ("Entity %i, Brush %i: origin brushes not allowed in world\n"
    , VAR_9 - 1, VAR_7);
   return ((void*)0);
  }

  FUNC_5 (VAR_4->mins, VAR_4->maxs, VAR_13);
  FUNC_7 (VAR_13, 0.5, VAR_13);

  FUNC_9 (VAR_12, "%i %i %i", (int)VAR_13[0], (int)VAR_13[1], (int)VAR_13[2]);
  FUNC_4 (&VAR_6[VAR_9 - 1], "origin", VAR_12);

  FUNC_6 (VAR_13, VAR_6[VAR_9 - 1].origin);


  return ((void*)0);
 }

 if ( VAR_4->contents & VAR_0 ) {
  if (VAR_9 != 1) {
   FUNC_8 ("Entity %i, Brush %i: areaportals only allowed in world\n"
    , VAR_9 - 1, VAR_7);
   return ((void*)0);
  }
 }

 FUNC_1 ();


 VAR_11 = FUNC_2( VAR_4 );

 VAR_11->entitynum = VAR_9-1;
 VAR_11->brushnum = VAR_7;

 VAR_11->original = VAR_11;

 VAR_11->next = VAR_8->brushes;
 VAR_8->brushes = VAR_11;

 return VAR_11;
}
