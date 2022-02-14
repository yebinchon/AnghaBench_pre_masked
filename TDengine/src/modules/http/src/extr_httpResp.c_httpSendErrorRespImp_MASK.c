
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t httpVersion; size_t httpKeepAlive; int ipstr; int fd; } ;
typedef TYPE_1__ HttpContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,int ,int ,int,int,char*) ;
 int * VAR_2 ;
 char** VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (char*,char*,int,...) ;

void FUNC_4(HttpContext *VAR_5, int VAR_6, char *VAR_7, int VAR_8, char *VAR_9) {
  FUNC_1("context:%p, fd:%d, ip:%s, code:%d, error:%d:%s", VAR_5, VAR_5->fd, VAR_5->ipstr, VAR_6, VAR_8,
            VAR_9);

  char VAR_10[512] = {0};
  char VAR_11[512] = {0};

  int VAR_12 = FUNC_3(VAR_11, VAR_3[VAR_1], VAR_8, VAR_9);
  int VAR_13 = FUNC_3(VAR_10, VAR_3[VAR_0], VAR_4[VAR_5->httpVersion], VAR_6,
                        VAR_7, VAR_2[VAR_5->httpKeepAlive], VAR_12);

  FUNC_2(VAR_5, VAR_10, VAR_13);
  FUNC_2(VAR_5, VAR_11, VAR_12);
  FUNC_0(VAR_5);
}
