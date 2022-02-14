
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdIndex; int state; int sql; int conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;

void FUNC_4() {
  if (VAR_2->cmdIndex < VAR_0) {
    FUNC_0(VAR_2->sql, VAR_2->cmdIndex);
    FUNC_3(VAR_2->conn, VAR_2->sql, VAR_3, ((void*)0));
  } else {
    VAR_2->state = VAR_1;
    FUNC_1("monitor service init success");

    FUNC_2();
  }
}
