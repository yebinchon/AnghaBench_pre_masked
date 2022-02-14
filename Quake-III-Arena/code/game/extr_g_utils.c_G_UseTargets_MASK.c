
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int inuse; int (* use ) (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;int target; scalar_t__ targetShaderNewName; scalar_t__ targetShaderName; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_11__ {double time; } ;


 int FUNC_0 (scalar_t__,scalar_t__,float) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (char*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;

void FUNC_7( gentity_t *VAR_3, gentity_t *VAR_4 ) {
 gentity_t *VAR_5;

 if ( !VAR_3 ) {
  return;
 }

 if (VAR_3->targetShaderName && VAR_3->targetShaderNewName) {
  float VAR_6 = VAR_1.time * 0.001;
  FUNC_0(VAR_3->targetShaderName, VAR_3->targetShaderNewName, VAR_6);
  FUNC_6(VAR_0, FUNC_1());
 }

 if ( !VAR_3->target ) {
  return;
 }

 VAR_5 = ((void*)0);
 while ( (VAR_5 = FUNC_3 (VAR_5, FUNC_2(VAR_2), VAR_3->target)) != ((void*)0) ) {
  if ( VAR_5 == VAR_3 ) {
   FUNC_4 ("WARNING: Entity used itself.\n");
  } else {
   if ( VAR_5->use ) {
    VAR_5->use (VAR_5, VAR_3, VAR_4);
   }
  }
  if ( !VAR_3->inuse ) {
   FUNC_4("entity was removed while using targets\n");
   return;
  }
 }
}
