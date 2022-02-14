
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ httpChunked; int parser; } ;
typedef int HttpParser ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2(HttpContext* VAR_2) {
  HttpParser *VAR_3 = &VAR_2->parser;
  if (VAR_2->httpChunked == VAR_1) {
    int VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 != VAR_0) {
      return VAR_4;
    }
  } else {
    int VAR_5 = FUNC_0(VAR_2, VAR_3);
    if (VAR_5 != VAR_0) {
      return VAR_5;
    }
  }

  return VAR_0;
}
