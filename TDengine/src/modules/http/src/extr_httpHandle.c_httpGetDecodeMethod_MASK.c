
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int pos; } ;
struct TYPE_15__ {TYPE_3__* path; TYPE_2__ method; TYPE_6__* pMethod; } ;
struct TYPE_17__ {int ipstr; int fd; TYPE_1__* pThread; TYPE_5__ parser; } ;
struct TYPE_16__ {int module; } ;
struct TYPE_14__ {int methodScannerLen; TYPE_6__** methodScanner; } ;
struct TYPE_13__ {int pos; } ;
struct TYPE_11__ {TYPE_4__* pServer; } ;
typedef TYPE_4__ HttpServer ;
typedef TYPE_5__ HttpParser ;
typedef TYPE_6__ HttpDecodeMethod ;
typedef TYPE_7__ HttpContext ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

bool FUNC_3(HttpContext* VAR_1) {
  HttpParser* VAR_2 = &VAR_1->parser;

  HttpServer* VAR_3 = VAR_1->pThread->pServer;
  int VAR_4 = VAR_3->methodScannerLen;
  for (int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    HttpDecodeMethod* VAR_6 = VAR_3->methodScanner[VAR_5];
    if (FUNC_2(VAR_6->module, VAR_2->path[0].pos) != 0) {
      continue;
    }
    VAR_2->pMethod = VAR_6;
    return 1;
  }

  FUNC_0("context:%p, fd:%d, ip:%s, error:the url is not support, method:%s, path:%s",
            VAR_1, VAR_1->fd, VAR_1->ipstr, VAR_2->method.pos, VAR_2->path[0].pos);
  FUNC_1(VAR_1, VAR_0);

  return 0;
}
