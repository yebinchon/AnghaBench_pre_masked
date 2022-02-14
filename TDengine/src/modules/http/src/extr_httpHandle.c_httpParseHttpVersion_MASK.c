
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pLast; } ;
struct TYPE_8__ {void* httpVersion; int ipstr; int fd; TYPE_1__ parser; } ;
typedef TYPE_1__ HttpParser ;
typedef TYPE_2__ HttpContext ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,TYPE_2__*,int ,int ,void*) ;
 char* FUNC_3 (int ,char) ;

bool FUNC_4(HttpContext* VAR_3) {
  HttpParser* VAR_4 = &VAR_3->parser;
  char* VAR_5 = FUNC_3(VAR_4->pLast, '1');
  if (VAR_5 == ((void*)0)) {
    FUNC_0("context:%p, fd:%d, ip:%s, can't find http version at position:%s", VAR_3, VAR_3->fd,
              VAR_3->ipstr, VAR_4->pLast);
    FUNC_1(VAR_3, VAR_0);
    return 0;
  }

  if (*(VAR_5 + 1) != '.') {
    FUNC_0("context:%p, fd:%d, ip:%s, can't find http version at position:%s", VAR_3, VAR_3->fd,
              VAR_3->ipstr, VAR_4->pLast);
    FUNC_1(VAR_3, VAR_0);
    return 0;
  }

  if (*(VAR_5 + 2) == '0')
    VAR_3->httpVersion = VAR_1;
  else if (*(VAR_5 + 2) == '1')
    VAR_3->httpVersion = VAR_2;
  else if (*(VAR_5 + 2) == '2')
    VAR_3->httpVersion = VAR_2;
  else
    VAR_3->httpVersion = VAR_1;

  FUNC_2("context:%p, fd:%d, ip:%s, httpVersion:1.%d", VAR_3, VAR_3->fd, VAR_3->ipstr,
            VAR_3->httpVersion);
  return 1;
}
