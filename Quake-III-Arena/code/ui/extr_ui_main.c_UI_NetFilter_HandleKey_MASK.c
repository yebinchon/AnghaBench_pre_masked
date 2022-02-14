
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static qboolean FUNC_1(int VAR_8, float *VAR_9, int VAR_10) {
  if (VAR_10 == VAR_2 || VAR_10 == VAR_3 || VAR_10 == VAR_0 || VAR_10 == VAR_1) {

  if (VAR_10 == VAR_3) {
   VAR_7.integer--;
  } else {
   VAR_7.integer++;
  }

    if (VAR_7.integer >= VAR_4) {
      VAR_7.integer = 0;
    } else if (VAR_7.integer < 0) {
      VAR_7.integer = VAR_4 - 1;
  }
  FUNC_0(VAR_6);
    return VAR_6;
  }
  return VAR_5;
}
