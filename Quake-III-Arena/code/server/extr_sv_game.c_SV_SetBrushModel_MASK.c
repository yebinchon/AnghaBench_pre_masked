
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int contents; int bmodel; int maxs; int mins; } ;
struct TYPE_6__ {int modelindex; } ;
struct TYPE_8__ {TYPE_2__ r; TYPE_1__ s; } ;
typedef TYPE_3__ sharedEntity_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*) ;
 int VAR_1 ;

void FUNC_6( sharedEntity_t *VAR_2, const char *VAR_3 ) {
 clipHandle_t VAR_4;
 vec3_t VAR_5, VAR_6;

 if (!VAR_3) {
  FUNC_2( VAR_0, "SV_SetBrushModel: NULL" );
 }

 if (VAR_3[0] != '*') {
  FUNC_2( VAR_0, "SV_SetBrushModel: %s isn't a brush model", VAR_3 );
 }


 VAR_2->s.modelindex = FUNC_5( VAR_3 + 1 );

 VAR_4 = FUNC_0( VAR_2->s.modelindex );
 FUNC_1( VAR_4, VAR_5, VAR_6 );
 FUNC_4 (VAR_5, VAR_2->r.mins);
 FUNC_4 (VAR_6, VAR_2->r.maxs);
 VAR_2->r.bmodel = VAR_1;

 VAR_2->r.contents = -1;

 FUNC_3( VAR_2 );
}
