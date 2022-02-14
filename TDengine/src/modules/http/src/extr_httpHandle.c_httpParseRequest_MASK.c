
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int pos; } ;
struct TYPE_15__ {int pCur; int pLast; TYPE_2__ data; int buffer; int bufsize; } ;
struct TYPE_16__ {int parsed; int ipstr; int fd; TYPE_3__ parser; TYPE_1__* pThread; } ;
struct TYPE_13__ {int numOfFds; int label; } ;
typedef TYPE_3__ HttpParser ;
typedef TYPE_4__ HttpContext ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,TYPE_4__*,int ,int ,...) ;

bool FUNC_7(HttpContext* VAR_0) {
  HttpParser *VAR_1 = &VAR_0->parser;
  if (VAR_0->parsed) {
    return 1;
  }

  FUNC_6("context:%p, fd:%d, ip:%s, thread:%s, numOfFds:%d, read size:%d, raw data:\n%s",
           VAR_0, VAR_0->fd, VAR_0->ipstr, VAR_0->pThread->label, VAR_0->pThread->numOfFds,
           VAR_0->parser.bufsize, VAR_0->parser.buffer);

  if (!FUNC_1(VAR_0)) {
    return 0;
  }

  if (!FUNC_5(VAR_0)) {
    return 0;
  }

  if (!FUNC_4(VAR_0)) {
    return 0;
  }

  if (!FUNC_0(VAR_0)) {
    return 0;
  }

  do {
    if (!FUNC_2(VAR_0)) {
      return 0;
    }


    if (VAR_1->pCur - VAR_1->pLast == 1) {
      VAR_1->data.pos = ++VAR_1->pCur;
      break;
    }

    if (!FUNC_3(VAR_0)) {
      return 0;
    }

    VAR_1->pLast = ++VAR_1->pCur;
  } while (1);

  FUNC_6("context:%p, fd:%d, ip:%s, parse http head ok", VAR_0, VAR_0->fd, VAR_0->ipstr);

  VAR_0->parsed = 1;
  return 1;
}
