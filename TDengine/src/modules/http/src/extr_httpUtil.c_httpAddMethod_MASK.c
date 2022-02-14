
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int methodScannerLen; int ** methodScanner; } ;
typedef TYPE_1__ HttpServer ;
typedef int HttpDecodeMethod ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

void FUNC_1(HttpServer *VAR_1, HttpDecodeMethod *VAR_2) {
  int VAR_3 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->methodScannerLen; ++VAR_3) {
    if (FUNC_0(VAR_1->methodScanner[VAR_3], VAR_2)) {
      break;
    }
  }

  if (VAR_3 == VAR_1->methodScannerLen && VAR_1->methodScannerLen < VAR_0) {
    VAR_1->methodScanner[VAR_3] = VAR_2;
    VAR_1->methodScannerLen++;
  }
}
