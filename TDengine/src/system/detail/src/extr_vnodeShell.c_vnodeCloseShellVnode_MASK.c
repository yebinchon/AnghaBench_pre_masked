
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int qhandle; } ;
struct TYPE_4__ {int maxSessions; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;


 int FUNC_0 (char*,int) ;
 int* FUNC_1 (int) ;
 TYPE_3__** VAR_0 ;
 int FUNC_2 (int ,int,int*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

void FUNC_4(int VAR_4) {
  if (VAR_0[VAR_4] == ((void*)0)) return;

  for (int VAR_5 = 0; VAR_5 < VAR_2[VAR_4].cfg.maxSessions; ++VAR_5) {
    FUNC_3(VAR_0[VAR_4][VAR_5].qhandle, 1);
  }

  int32_t* VAR_6 = FUNC_1(sizeof(int32_t));
  *VAR_6 = VAR_4;






  FUNC_0("vid:%d, free resources in 500ms", VAR_4);
  FUNC_2(VAR_1, 500, VAR_6, VAR_3);
}
