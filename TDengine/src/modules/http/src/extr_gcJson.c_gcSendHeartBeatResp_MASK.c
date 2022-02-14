
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t httpVersion; size_t httpKeepAlive; } ;
struct TYPE_11__ {char* lst; char* buf; } ;
typedef TYPE_1__ JsonBuf ;
typedef int HttpSqlCmd ;
typedef TYPE_2__ HttpContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*,int,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 char** VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (char*,char*,int ,int ,int) ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7(HttpContext *VAR_6, HttpSqlCmd *VAR_7) {
  JsonBuf *VAR_8 = FUNC_3(VAR_6);
  if (VAR_8 == ((void*)0)) return;

  char *VAR_9 = "Grafana server receive a quest from you!";

  FUNC_0(VAR_8, VAR_6);

  FUNC_2(VAR_8, VAR_2);
  FUNC_1(VAR_8, "message", (int)FUNC_6("message"), VAR_9, (int)FUNC_6(VAR_9));
  FUNC_2(VAR_8, VAR_1);

  char VAR_10[1024];

  int VAR_11 = FUNC_5(VAR_10, VAR_4[VAR_0], VAR_5[VAR_6->httpVersion],
                     VAR_3[VAR_6->httpKeepAlive], (VAR_8->lst - VAR_8->buf));
  FUNC_4(VAR_6, VAR_10, VAR_11);
  FUNC_4(VAR_6, VAR_8->buf, (int)(VAR_8->lst - VAR_8->buf));
}
