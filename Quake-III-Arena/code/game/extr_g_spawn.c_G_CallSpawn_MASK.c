
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* spawn ) (TYPE_3__*) ;scalar_t__ name; } ;
typedef TYPE_1__ spawn_t ;
typedef int qboolean ;
struct TYPE_11__ {scalar_t__ classname; } ;
typedef TYPE_2__ gitem_t ;
struct TYPE_12__ {int classname; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*) ;

qboolean FUNC_4( gentity_t *VAR_4 ) {
 spawn_t *VAR_5;
 gitem_t *VAR_6;

 if ( !VAR_4->classname ) {
  FUNC_0 ("G_CallSpawn: NULL classname\n");
  return VAR_1;
 }


 for ( VAR_6=VAR_0+1 ; VAR_6->classname ; VAR_6++ ) {
  if ( !FUNC_2(VAR_6->classname, VAR_4->classname) ) {
   FUNC_1( VAR_4, VAR_6 );
   return VAR_2;
  }
 }


 for ( VAR_5=VAR_3 ; VAR_5->name ; VAR_5++ ) {
  if ( !FUNC_2(VAR_5->name, VAR_4->classname) ) {

   VAR_5->spawn(VAR_4);
   return VAR_2;
  }
 }
 FUNC_0 ("%s doesn't have a spawn function\n", VAR_4->classname);
 return VAR_1;
}
