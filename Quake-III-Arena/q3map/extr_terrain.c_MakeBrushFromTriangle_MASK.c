
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int shaderInfo_t ;
typedef int bspbrush_t ;
struct TYPE_4__ {int* portalareas; int contents; int brushnum; scalar_t__ entitynum; int detail; scalar_t__ numsides; } ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_5( vec3_t VAR_6, vec3_t VAR_7, vec3_t VAR_8, shaderInfo_t *VAR_9 ) {
 bspbrush_t *VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12;
 vec3_t VAR_13;

 FUNC_4( VAR_11, VAR_6[ 0 ], VAR_6[ 1 ], VAR_1 + 10 );
 FUNC_4( VAR_12, VAR_7[ 0 ], VAR_7[ 1 ], VAR_1 + 10 );
 FUNC_4( VAR_13, VAR_8[ 0 ], VAR_8[ 1 ], VAR_1 + 10 );

 VAR_2->numsides = 0;
 VAR_2->detail = VAR_5;

 FUNC_0( VAR_6, VAR_7, VAR_8, VAR_9 );
 FUNC_0( VAR_6, VAR_11, VAR_7, VAR_9 );
 FUNC_0( VAR_7, VAR_12, VAR_8, VAR_9 );
 FUNC_0( VAR_8, VAR_13, VAR_6, VAR_9 );
 FUNC_0( VAR_13, VAR_12, VAR_11, VAR_9 );

 VAR_2->portalareas[0] = -1;
 VAR_2->portalareas[1] = -1;
 VAR_2->entitynum = VAR_4-1;
 VAR_2->brushnum = VAR_3;


 if ( !FUNC_2( VAR_2 ) ) {
  return;
 }


 FUNC_3( VAR_2 );
 VAR_2->contents |= VAR_0;

 VAR_10 = FUNC_1();
 if ( !VAR_10 ) {
  return;
 }
}
