
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int string; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ generic; } ;
struct TYPE_8__ {TYPE_3__ status; scalar_t__* numservers; scalar_t__ numqueriedservers; scalar_t__ currentping; void* maxservers; int serverlist; TYPE_2__ remove; } ;






 int FUNC_0 () ;
 int FUNC_1 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3( int VAR_15 )
{
 if (VAR_14 == VAR_15)
  return;

 VAR_14 = VAR_15;

 switch( VAR_15 ) {
 default:
 case 129:
  VAR_5.remove.generic.flags |= (VAR_4|VAR_3);
  VAR_5.serverlist = VAR_8;
  VAR_5.numservers = &VAR_12;
  VAR_5.maxservers = VAR_2;
  break;

 case 130:
  VAR_5.remove.generic.flags |= (VAR_4|VAR_3);
  VAR_5.serverlist = VAR_7;
  VAR_5.numservers = &VAR_11;
  VAR_5.maxservers = VAR_1;
  break;

 case 131:
  VAR_5.remove.generic.flags &= ~(VAR_4|VAR_3);
  VAR_5.serverlist = VAR_6;
  VAR_5.numservers = &VAR_10;
  VAR_5.maxservers = VAR_0;
  break;

 case 128:
  VAR_5.remove.generic.flags |= (VAR_4|VAR_3);
  VAR_5.serverlist = VAR_9;
  VAR_5.numservers = &VAR_13;
  VAR_5.maxservers = VAR_1;
  break;

 }

 if( !*VAR_5.numservers ) {
  FUNC_0();
 }
 else {

  VAR_5.currentping = *VAR_5.numservers;
  VAR_5.numqueriedservers = *VAR_5.numservers;
  FUNC_1();
 }
 FUNC_2(VAR_5.status.string,"hit refresh to update");
}
