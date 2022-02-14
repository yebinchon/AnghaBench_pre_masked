
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


typedef float* vec4_t ;
struct TYPE_14__ {scalar_t__ time; TYPE_2__* snap; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_10__ {int teamStatusBar; } ;
struct TYPE_11__ {int teamLastChatPos; int teamChatPos; scalar_t__* teamChatMsgTimes; int * teamChatMsgs; TYPE_3__ media; } ;
struct TYPE_8__ {scalar_t__* persistant; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,float*,int ,int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (float*) ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 vec4_t VAR_17;
 int VAR_18;




 if (VAR_9.integer < VAR_3)
  VAR_18 = VAR_9.integer;
 else
  VAR_18 = VAR_3;
 if (VAR_18 <= 0)
  return;

 if (VAR_11.teamLastChatPos != VAR_11.teamChatPos) {
  if (VAR_8.time - VAR_11.teamChatMsgTimes[VAR_11.teamLastChatPos % VAR_18] > VAR_10.integer) {
   VAR_11.teamLastChatPos++;
  }

  VAR_14 = (VAR_11.teamChatPos - VAR_11.teamLastChatPos) * VAR_6;

  VAR_13 = 0;

  for (VAR_15 = VAR_11.teamLastChatPos; VAR_15 < VAR_11.teamChatPos; VAR_15++) {
   VAR_16 = FUNC_2(VAR_11.teamChatMsgs[VAR_15 % VAR_18]);
   if (VAR_16 > VAR_13)
    VAR_13 = VAR_16;
  }
  VAR_13 *= VAR_7;
  VAR_13 += VAR_7 * 2;

  if ( VAR_8.snap->ps.persistant[VAR_2] == VAR_5 ) {
   VAR_17[0] = 1.0f;
   VAR_17[1] = 0.0f;
   VAR_17[2] = 0.0f;
   VAR_17[3] = 0.33f;
  } else if ( VAR_8.snap->ps.persistant[VAR_2] == VAR_4 ) {
   VAR_17[0] = 0.0f;
   VAR_17[1] = 0.0f;
   VAR_17[2] = 1.0f;
   VAR_17[3] = 0.33f;
  } else {
   VAR_17[0] = 0.0f;
   VAR_17[1] = 1.0f;
   VAR_17[2] = 0.0f;
   VAR_17[3] = 0.33f;
  }

  FUNC_3( VAR_17 );
  FUNC_0( 0, 420 - VAR_14, 640, VAR_14, VAR_11.media.teamStatusBar );
  FUNC_3( ((void*)0) );

  VAR_17[0] = VAR_17[1] = VAR_17[2] = 1.0f;
  VAR_17[3] = 1.0f;

  for (VAR_15 = VAR_11.teamChatPos - 1; VAR_15 >= VAR_11.teamLastChatPos; VAR_15--) {
   FUNC_1( 0 + VAR_7,
    420 - (VAR_11.teamChatPos - VAR_15)*VAR_6,
    VAR_11.teamChatMsgs[VAR_15 % VAR_18], VAR_17, VAR_12, VAR_12,
    VAR_7, VAR_6, 0 );
  }
 }
}
