
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ numJoinGameTypes; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static qboolean FUNC_3(int VAR_8, float *VAR_9, int VAR_10) {
 if (VAR_10 == VAR_2 || VAR_10 == VAR_3 || VAR_10 == VAR_0 || VAR_10 == VAR_1) {

  if (VAR_10 == VAR_3) {
   VAR_7.integer--;
  } else {
   VAR_7.integer++;
  }

  if (VAR_7.integer < 0) {
   VAR_7.integer = VAR_6.numJoinGameTypes - 1;
  } else if (VAR_7.integer >= VAR_6.numJoinGameTypes) {
   VAR_7.integer = 0;
  }

  FUNC_1( "ui_joinGameType", FUNC_2("%d", VAR_7.integer));
  FUNC_0(VAR_5);
  return VAR_5;
 }
 return VAR_4;
}
