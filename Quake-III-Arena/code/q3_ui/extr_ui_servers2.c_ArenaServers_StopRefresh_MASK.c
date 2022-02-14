
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int servernode_t ;
struct TYPE_2__ {scalar_t__ numqueriedservers; scalar_t__ currentping; scalar_t__* numservers; int serverlist; scalar_t__ refreshservers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_3( void )
{
 if (!VAR_2.refreshservers)

  return;

 VAR_2.refreshservers = VAR_4;

 if (VAR_3 == VAR_0)
 {

  FUNC_0();
 }


 if (VAR_2.numqueriedservers >= 0)
 {
  VAR_2.currentping = *VAR_2.numservers;
  VAR_2.numqueriedservers = *VAR_2.numservers;
 }


 FUNC_2( VAR_2.serverlist, *VAR_2.numservers, sizeof( servernode_t ), VAR_1);

 FUNC_1();
}
