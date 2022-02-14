
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {TYPE_1__* clients; } ;
struct TYPE_4__ {int lastUsercmd; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_1( int VAR_3, usercmd_t *VAR_4 ) {
 if ( VAR_3 < 0 || VAR_3 >= VAR_1->integer ) {
  FUNC_0( VAR_0, "SV_GetUsercmd: bad clientNum:%i", VAR_3 );
 }
 *VAR_4 = VAR_2.clients[VAR_3].lastUsercmd;
}
