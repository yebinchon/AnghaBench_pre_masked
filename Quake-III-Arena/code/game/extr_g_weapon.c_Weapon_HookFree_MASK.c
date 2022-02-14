
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* parent; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_9__ {TYPE_2__* client; } ;
struct TYPE_7__ {int pm_flags; } ;
struct TYPE_8__ {TYPE_1__ ps; int * hook; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;

void FUNC_1 (gentity_t *VAR_1)
{
 VAR_1->parent->client->hook = ((void*)0);
 VAR_1->parent->client->ps.pm_flags &= ~VAR_0;
 FUNC_0( VAR_1 );
}
