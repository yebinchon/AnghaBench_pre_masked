
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float clientNum; } ;
struct TYPE_6__ {int maxs; int mins; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (char*,char*,float*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(gentity_t *VAR_0) {
 float VAR_1;

 FUNC_1( VAR_0->r.mins );
 FUNC_1( VAR_0->r.maxs );
 FUNC_2 (VAR_0);

 FUNC_0( "roll", "0", &VAR_1 );

 VAR_0->s.clientNum = VAR_1/360.0 * 256;
}
