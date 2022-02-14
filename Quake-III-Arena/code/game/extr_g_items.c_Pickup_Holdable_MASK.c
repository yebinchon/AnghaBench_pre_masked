
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* client; TYPE_1__* item; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_8__ {int eFlags; TYPE_1__** stats; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_7__ {scalar_t__ giTag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

int FUNC_0( gentity_t *VAR_5, gentity_t *VAR_6 ) {

 VAR_6->client->ps.stats[VAR_3] = VAR_5->item - VAR_4;

 if( VAR_5->item->giTag == VAR_1 ) {
  VAR_6->client->ps.eFlags |= VAR_0;
 }

 return VAR_2;
}
