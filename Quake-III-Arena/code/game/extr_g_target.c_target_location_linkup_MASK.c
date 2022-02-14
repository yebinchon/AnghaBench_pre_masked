
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int health; char* message; struct TYPE_5__* nextTrain; scalar_t__ classname; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_6__ {int num_entities; TYPE_1__* locationHead; scalar_t__ locationLinked; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 TYPE_1__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_2(gentity_t *VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (VAR_2.locationLinked)
  return;

 VAR_2.locationLinked = VAR_3;

 VAR_2.locationHead = ((void*)0);

 FUNC_1( VAR_0, "unknown" );

 for (VAR_5 = 0, VAR_4 = VAR_1, VAR_6 = 1;
   VAR_5 < VAR_2.num_entities;
   VAR_5++, VAR_4++) {
  if (VAR_4->classname && !FUNC_0(VAR_4->classname, "target_location")) {

   VAR_4->health = VAR_6;
   FUNC_1( VAR_0 + VAR_6, VAR_4->message );
   VAR_6++;
   VAR_4->nextTrain = VAR_2.locationHead;
   VAR_2.locationHead = VAR_4;
  }
 }


}
