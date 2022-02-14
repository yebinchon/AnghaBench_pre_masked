
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfnchar; int * bytes; int ** buffer; int * tsrow; } ;
typedef TYPE_1__ SSqlRes ;


 int FUNC_0 (int *) ;

void FUNC_1(SSqlRes* VAR_0) {

  for (int VAR_1 = 0; VAR_1 < VAR_0->numOfnchar; VAR_1++) {
    if (VAR_0->buffer[VAR_1] != ((void*)0)) {
      FUNC_0(VAR_0->buffer[VAR_1]);
    }
  }

  FUNC_0(VAR_0->tsrow);

  VAR_0->numOfnchar = 0;
  VAR_0->buffer = ((void*)0);
  VAR_0->bytes = ((void*)0);
}
