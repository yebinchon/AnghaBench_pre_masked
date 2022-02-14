
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int* data; } ;
typedef TYPE_1__ diva_trace_ie_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2 (diva_trace_ie_t* VAR_0, char* VAR_1, int VAR_2) {
 int VAR_3;

  VAR_1[0] = 0;

  if (VAR_2 > 32) {
    for (VAR_3 = 0; ((VAR_3 < VAR_0->length) && (VAR_2 > 3)); VAR_3++) {
      FUNC_0 (VAR_1, "%02x", VAR_0->data[VAR_3]);
      VAR_1 += 2;
      VAR_2 -= 2;
      if (VAR_3 < (VAR_0->length-1)) {
        FUNC_1 (VAR_1, " ");
        VAR_1++;
        VAR_2--;
      }
    }
  }
}
