
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* payload; int allocSize; } ;
typedef TYPE_1__ SSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (char*,int) ;

int FUNC_4(SSqlCmd* VAR_2, int VAR_3) {
  FUNC_0(VAR_3 > 0);

  if (VAR_2->payload == ((void*)0)) {
    FUNC_0(VAR_2->allocSize == 0);

    VAR_2->payload = (char*)FUNC_1(VAR_3);
    if (VAR_2->payload == ((void*)0)) return VAR_0;
    VAR_2->allocSize = VAR_3;
  } else {
    if (VAR_2->allocSize < VAR_3) {
      char* VAR_4 = FUNC_3(VAR_2->payload, VAR_3);
      if (VAR_4 == ((void*)0)) return VAR_0;
      VAR_2->payload = VAR_4;
      VAR_2->allocSize = VAR_3;
    }
  }

  FUNC_2(VAR_2->payload, 0, VAR_2->allocSize);
  FUNC_0(VAR_2->allocSize >= VAR_3);

  return VAR_1;
}
