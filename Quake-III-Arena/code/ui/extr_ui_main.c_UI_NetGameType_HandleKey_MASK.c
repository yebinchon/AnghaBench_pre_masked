
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {size_t numGameTypes; TYPE_1__* gameTypes; } ;
struct TYPE_5__ {size_t integer; } ;
struct TYPE_4__ {size_t gtEnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*) ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 char* FUNC_3 (char*,size_t) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_9, float *VAR_10, int VAR_11) {
  if (VAR_11 == VAR_3 || VAR_11 == VAR_4 || VAR_11 == VAR_1 || VAR_11 == VAR_2) {

  if (VAR_11 == VAR_4) {
   VAR_8.integer--;
  } else {
   VAR_8.integer++;
  }

    if (VAR_8.integer < 0) {
      VAR_8.integer = VAR_7.numGameTypes - 1;
  } else if (VAR_8.integer >= VAR_7.numGameTypes) {
      VAR_8.integer = 0;
    }

   FUNC_2( "ui_netGameType", FUNC_3("%d", VAR_8.integer));
   FUNC_2( "ui_actualnetGameType", FUNC_3("%d", VAR_7.gameTypes[VAR_8.integer].gtEnum));
   FUNC_2( "ui_currentNetMap", "0");
  FUNC_1(VAR_5);
  FUNC_0(((void*)0), VAR_0, 0, ((void*)0));
    return VAR_6;
  }
  return VAR_5;
}
