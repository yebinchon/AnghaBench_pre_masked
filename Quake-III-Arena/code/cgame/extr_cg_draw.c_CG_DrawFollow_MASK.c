
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec4_t ;
typedef int qboolean ;
struct TYPE_10__ {TYPE_3__* snap; } ;
struct TYPE_9__ {TYPE_1__* clientinfo; } ;
struct TYPE_7__ {int pm_flags; size_t clientNum; } ;
struct TYPE_8__ {TYPE_2__ ps; } ;
struct TYPE_6__ {char* name; } ;


 int FUNC_0 (int,int,char*,float) ;
 int FUNC_1 (float,int,char const*,int*,int ,int ,int,int ,int ) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static qboolean FUNC_3( void ) {
 float VAR_7;
 vec4_t VAR_8;
 const char *VAR_9;

 if ( !(VAR_3.snap->ps.pm_flags & VAR_2) ) {
  return VAR_5;
 }
 VAR_8[0] = 1;
 VAR_8[1] = 1;
 VAR_8[2] = 1;
 VAR_8[3] = 1;


 FUNC_0( 320 - 9 * 8, 24, "following", 1.0F );

 VAR_9 = VAR_4.clientinfo[ VAR_3.snap->ps.clientNum ].name;

 VAR_7 = 0.5 * ( 640 - VAR_1 * FUNC_2( VAR_9 ) );

 FUNC_1( VAR_7, 40, VAR_9, VAR_8, VAR_6, VAR_6, VAR_1, VAR_0, 0 );

 return VAR_6;
}
