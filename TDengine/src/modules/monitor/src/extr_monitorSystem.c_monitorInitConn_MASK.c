
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* privateIpStr; int * conn; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int *,char*,int ,char*,int ,int ,TYPE_1__*,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(void *VAR_7, void *VAR_8) {
  FUNC_1("starting to initialize monitor service ..");
  VAR_2->state = VAR_0;

  if (VAR_2->privateIpStr[0] == 0) {



    FUNC_2(VAR_2->privateIpStr, VAR_4);

    for (int VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
      if (VAR_2->privateIpStr[VAR_9] == '.') {
        VAR_2->privateIpStr[VAR_9] = '_';
      }
    }
  }

  if (VAR_2->conn == ((void*)0)) {
    FUNC_3(((void*)0), "monitor", VAR_5, "", 0, VAR_3, VAR_2, &(VAR_2->conn));
  } else {
    FUNC_0();
  }
}
