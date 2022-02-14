
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {int entityParsePoint; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int time; TYPE_1__* clients; } ;
struct TYPE_5__ {int * gentity; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_3( qboolean VAR_5 ) {
 int VAR_6;


 VAR_2.entityParsePoint = FUNC_0();





 for ( VAR_6 = 0 ; VAR_6 < VAR_3->integer ; VAR_6++ ) {
  VAR_4.clients[VAR_6].gentity = ((void*)0);
 }



 FUNC_2( VAR_1, VAR_0, VAR_4.time, FUNC_1(), VAR_5 );
}
