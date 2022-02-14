
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_10, float *VAR_11, int VAR_12) {
  if (VAR_12 == VAR_4 || VAR_12 == VAR_5 || VAR_12 == VAR_2 || VAR_12 == VAR_3) {

  if (VAR_12 == VAR_5) {
   VAR_9.integer--;
   if (VAR_9.integer == VAR_1)
    VAR_9.integer--;
  } else {
   VAR_9.integer++;
   if (VAR_9.integer == VAR_1)
    VAR_9.integer++;
  }

  if (VAR_9.integer >= VAR_6) {
      VAR_9.integer = 0;
    } else if (VAR_9.integer < 0) {
      VAR_9.integer = VAR_6 - 1;
  }

  FUNC_0(VAR_8);
  if (VAR_9.integer != VAR_0) {
   FUNC_1(VAR_8);
  }
   FUNC_2( "ui_netSource", FUNC_3("%d", VAR_9.integer));
    return VAR_8;
  }
  return VAR_7;
}
