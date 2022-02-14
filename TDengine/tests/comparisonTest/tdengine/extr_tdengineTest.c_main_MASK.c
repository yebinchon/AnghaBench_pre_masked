
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ writeClients; } ;
struct TYPE_3__ {scalar_t__ totalRows; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;

int FUNC_3(int VAR_2, char *VAR_3[]) {
  VAR_1.totalRows = 0;
  FUNC_0(VAR_2, VAR_3);

  if (VAR_0.writeClients > 0) {
    FUNC_2();
  } else {
    FUNC_1();
  }
}
