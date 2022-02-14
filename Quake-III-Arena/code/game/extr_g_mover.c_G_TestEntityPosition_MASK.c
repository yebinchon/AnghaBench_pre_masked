
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {size_t entityNum; scalar_t__ startsolid; } ;
typedef TYPE_6__ trace_t ;
struct TYPE_15__ {int trBase; } ;
struct TYPE_16__ {int number; TYPE_4__ pos; } ;
struct TYPE_14__ {int maxs; int mins; } ;
struct TYPE_18__ {int clipmask; TYPE_5__ s; TYPE_3__ r; TYPE_2__* client; } ;
typedef TYPE_7__ gentity_t ;
struct TYPE_12__ {int origin; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ,int ,int ,int ,int ,int) ;

gentity_t *FUNC_1( gentity_t *VAR_2 ) {
 trace_t VAR_3;
 int VAR_4;

 if ( VAR_2->clipmask ) {
  VAR_4 = VAR_2->clipmask;
 } else {
  VAR_4 = VAR_0;
 }
 if ( VAR_2->client ) {
  FUNC_0( &VAR_3, VAR_2->client->ps.origin, VAR_2->r.mins, VAR_2->r.maxs, VAR_2->client->ps.origin, VAR_2->s.number, VAR_4 );
 } else {
  FUNC_0( &VAR_3, VAR_2->s.pos.trBase, VAR_2->r.mins, VAR_2->r.maxs, VAR_2->s.pos.trBase, VAR_2->s.number, VAR_4 );
 }

 if (VAR_3.startsolid)
  return &VAR_1[ VAR_3.entityNum ];

 return ((void*)0);
}
