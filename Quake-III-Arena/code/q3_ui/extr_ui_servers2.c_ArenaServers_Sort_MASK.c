
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int servernode_t ;
struct TYPE_2__ {int * numservers; int serverlist; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;

void FUNC_1( int VAR_3 ) {
 if( VAR_2 == VAR_3 ) {
  return;
 }

 VAR_2 = VAR_3;
 FUNC_0( VAR_1.serverlist, *VAR_1.numservers, sizeof( servernode_t ), VAR_0);
}
