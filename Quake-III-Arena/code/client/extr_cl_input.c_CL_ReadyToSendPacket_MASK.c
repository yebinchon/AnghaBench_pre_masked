
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_13__ {TYPE_2__* outPackets; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_8__ {int outgoingSequence; TYPE_7__ remoteAddress; } ;
struct TYPE_11__ {int lastPacketSentTime; TYPE_1__ netchan; scalar_t__* downloadTempName; scalar_t__ demoplaying; } ;
struct TYPE_10__ {scalar_t__ state; int realtime; } ;
struct TYPE_9__ {int p_realtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_7__) ;
 TYPE_6__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

qboolean FUNC_2( void ) {
 int VAR_11;
 int VAR_12;


 if ( VAR_7.demoplaying || VAR_8.state == VAR_1 ) {
  return VAR_9;
 }


 if ( *VAR_7.downloadTempName &&
  VAR_8.realtime - VAR_7.lastPacketSentTime < 50 ) {
  return VAR_9;
 }



 if ( VAR_8.state != VAR_0 &&
  VAR_8.state != VAR_2 &&
  !*VAR_7.downloadTempName &&
  VAR_8.realtime - VAR_7.lastPacketSentTime < 1000 ) {
  return VAR_9;
 }


 if ( VAR_7.netchan.remoteAddress.type == VAR_3 ) {
  return VAR_10;
 }


 if ( FUNC_1( VAR_7.netchan.remoteAddress ) ) {
  return VAR_10;
 }


 if ( VAR_6->integer < 15 ) {
  FUNC_0( "cl_maxpackets", "15" );
 } else if ( VAR_6->integer > 125 ) {
  FUNC_0( "cl_maxpackets", "125" );
 }
 VAR_11 = (VAR_7.netchan.outgoingSequence - 1) & VAR_4;
 VAR_12 = VAR_8.realtime - VAR_5.outPackets[ VAR_11 ].p_realtime;
 if ( VAR_12 < 1000 / VAR_6->integer ) {

  return VAR_9;
 }

 return VAR_10;
}
