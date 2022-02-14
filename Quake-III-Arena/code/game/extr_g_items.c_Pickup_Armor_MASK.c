
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* client; TYPE_1__* item; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_12__ {scalar_t__ giTag; } ;
struct TYPE_9__ {size_t* stats; } ;
struct TYPE_10__ {TYPE_2__ ps; } ;
struct TYPE_8__ {scalar_t__ quantity; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_5__* VAR_5 ;

int FUNC_0( gentity_t *VAR_6, gentity_t *VAR_7 ) {
 VAR_7->client->ps.stats[VAR_2] += VAR_6->item->quantity;
 if ( VAR_7->client->ps.stats[VAR_2] > VAR_7->client->ps.stats[VAR_3] * 2 ) {
  VAR_7->client->ps.stats[VAR_2] = VAR_7->client->ps.stats[VAR_3] * 2;
 }


 return VAR_1;
}
