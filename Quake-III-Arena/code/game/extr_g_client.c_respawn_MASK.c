
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int clientNum; } ;
struct TYPE_12__ {TYPE_3__ s; TYPE_2__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_9__ {int origin; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_2 (int ,int ) ;

void FUNC_3( gentity_t *VAR_1 ) {
 gentity_t *VAR_2;

 FUNC_1 (VAR_1);
 FUNC_0(VAR_1);


 VAR_2 = FUNC_2( VAR_1->client->ps.origin, VAR_0 );
 VAR_2->s.clientNum = VAR_1->s.clientNum;
}
