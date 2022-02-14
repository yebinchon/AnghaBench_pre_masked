
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {TYPE_1__* clients; } ;
struct TYPE_4__ {int userinfo; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_2( int VAR_3, char *VAR_4, int VAR_5 ) {
 if ( VAR_5 < 1 ) {
  FUNC_0( VAR_0, "SV_GetUserinfo: bufferSize == %i", VAR_5 );
 }
 if ( VAR_3 < 0 || VAR_3 >= VAR_1->integer ) {
  FUNC_0 (VAR_0, "SV_GetUserinfo: bad index %i\n", VAR_3);
 }
 FUNC_1( VAR_4, VAR_2.clients[ VAR_3 ].userinfo, VAR_5 );
}
