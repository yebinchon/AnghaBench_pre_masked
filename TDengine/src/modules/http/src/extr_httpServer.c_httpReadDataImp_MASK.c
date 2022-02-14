
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int label; } ;
struct TYPE_10__ {int bufsize; scalar_t__* buffer; } ;
struct TYPE_11__ {TYPE_5__* pThread; int ipstr; int fd; TYPE_1__ parser; } ;
typedef TYPE_1__ HttpParser ;
typedef TYPE_2__ HttpContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ,scalar_t__,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*,TYPE_2__*,int ,int ,scalar_t__,...) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,int) ;

bool FUNC_6(HttpContext *VAR_7) {
  HttpParser *VAR_8 = &VAR_7->parser;

  while (VAR_8->bufsize <= (VAR_3 - VAR_5)) {
    int VAR_9 = (int)FUNC_5(VAR_7->fd, VAR_8->buffer + VAR_8->bufsize, VAR_5);
    if (VAR_9 >= 0 && VAR_9 < VAR_5) {
      VAR_8->bufsize += VAR_9;
      break;
    } else if (VAR_9 < 0) {
      if (VAR_6 == VAR_1 || VAR_6 == VAR_0 || VAR_6 == VAR_2) {
        FUNC_4("context:%p, fd:%d, ip:%s, read from socket error:%d, wait another event",
                  VAR_7, VAR_7->fd, VAR_7->ipstr, VAR_6);
        break;
      } else {
        FUNC_0("context:%p, fd:%d, ip:%s, read from socket error:%d, close connect",
                  VAR_7, VAR_7->fd, VAR_7->ipstr, VAR_6);
        return 0;
      }
    } else {
      VAR_8->bufsize += VAR_9;
    }

    if (VAR_8->bufsize >= (VAR_3 - VAR_5)) {
      FUNC_1(VAR_7);
      FUNC_0("context:%p, fd:%d, ip:%s, thread:%s, request big than:%d",
                VAR_7, VAR_7->fd, VAR_7->ipstr, VAR_7->pThread->label, VAR_3);
      FUNC_2(VAR_7->pThread, VAR_7);
      FUNC_3(VAR_7, VAR_4);
      return 0;
    }
  }

  VAR_8->buffer[VAR_8->bufsize] = 0;
  FUNC_4("context:%p, fd:%d, ip:%s, thread:%s, read size:%d",
            VAR_7, VAR_7->fd, VAR_7->ipstr, VAR_7->pThread->label, VAR_8->bufsize);

  return 1;
}
