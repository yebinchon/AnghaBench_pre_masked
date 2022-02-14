
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fd; scalar_t__ acceptEncoding; size_t httpVersion; size_t httpKeepAlive; } ;
struct TYPE_4__ {TYPE_3__* pContext; } ;
typedef TYPE_1__ JsonBuf ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 char** VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_3__*,char const*,int) ;
 int FUNC_1 (char*,char*,int ,int ) ;

void FUNC_2(JsonBuf* VAR_6) {
  if (VAR_6->pContext->fd <= 0) {
    VAR_6->pContext->fd = -1;
  }

  char VAR_7[1024] = {0};
  int VAR_8 = -1;

  if (VAR_6->pContext->acceptEncoding == VAR_0) {
    VAR_8 = FUNC_1(VAR_7, VAR_4[VAR_2], VAR_5[VAR_6->pContext->httpVersion],
                  VAR_3[VAR_6->pContext->httpKeepAlive]);
  } else {
    VAR_8 = FUNC_1(VAR_7, VAR_4[VAR_1], VAR_5[VAR_6->pContext->httpVersion],
                  VAR_3[VAR_6->pContext->httpKeepAlive]);
  }

  FUNC_0(VAR_6->pContext, (const char*)VAR_7, VAR_8);
}
