
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t httpVersion; size_t httpKeepAlive; } ;
typedef TYPE_1__ HttpContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_3 ;
 char** VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (char*,char*,int ,char*,...) ;

void FUNC_3(HttpContext *VAR_6, char *VAR_7) {
  char VAR_8[1024] = {0};
  char VAR_9[1024] = {0};

  int VAR_10 = FUNC_2(VAR_9, VAR_4[VAR_0], VAR_2, VAR_7);
  int VAR_11 = FUNC_2(VAR_8, VAR_4[VAR_1], VAR_5[VAR_6->httpVersion],
                        VAR_3[VAR_6->httpKeepAlive], VAR_10);

  FUNC_1(VAR_6, VAR_8, VAR_11);
  FUNC_1(VAR_6, VAR_9, VAR_10);
  FUNC_0(VAR_6);
}
