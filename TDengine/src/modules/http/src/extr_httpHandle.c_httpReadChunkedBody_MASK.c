
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ipstr; int fd; } ;
typedef int HttpParser ;
typedef TYPE_1__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*,int ,int ) ;

bool FUNC_4(HttpContext* VAR_3, HttpParser* VAR_4) {
  bool VAR_5 = FUNC_1(VAR_3, VAR_4, 1);
  if (VAR_5) {
    FUNC_1(VAR_3, VAR_4, 0);
    return VAR_2;
  } else {
    FUNC_3("context:%p, fd:%d, ip:%s, chunked body not finished, continue read", VAR_3, VAR_3->fd,
              VAR_3->ipstr);
    if (!FUNC_2(VAR_3)) {
      FUNC_0("context:%p, fd:%d, ip:%s, read chunked request error", VAR_3, VAR_3->fd, VAR_3->ipstr);
      return VAR_1;
    } else {
      return VAR_0;
    }
  }
}
