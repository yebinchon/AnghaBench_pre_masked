
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ maxSessions; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_2) {
  if (VAR_1 == ((void*)0)) return VAR_0;

  if (VAR_1[VAR_2].cfg.maxSessions > 0) {
    int32_t VAR_3 = FUNC_2(VAR_2);
    if (VAR_3 != VAR_0) {
      return VAR_3;
    }

    FUNC_3(VAR_2);
  } else {
    FUNC_0("vid:%d, max sessions:%d, this vnode already dropped!!!", VAR_2, VAR_1[VAR_2].cfg.maxSessions);
    VAR_1[VAR_2].cfg.maxSessions = 0;
    FUNC_1();
  }

  return VAR_0;
}
