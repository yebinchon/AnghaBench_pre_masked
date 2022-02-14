
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int data; TYPE_1__* handler; } ;
typedef int proxy_env ;
struct TYPE_2__ {char* scheme; } ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static char *FUNC_6(struct connectdata *VAR_0)
{
  char *VAR_1 = ((void*)0);
  char VAR_2[128];
  const char *VAR_3 = VAR_0->handler->scheme;
  char *VAR_4 = VAR_2;
  char *VAR_5;


  while(*VAR_3)
    *VAR_4++ = (char)FUNC_5((int)*VAR_3++);


  FUNC_4(VAR_4, "_proxy");


  VAR_5 = FUNC_1(VAR_2);
  if(!VAR_5 && !FUNC_3("http_proxy", VAR_2)) {

    FUNC_0(VAR_2, VAR_2, sizeof(VAR_2));
    VAR_5 = FUNC_1(VAR_2);
  }

  VAR_4 = VAR_2;
  if(VAR_5) {
    VAR_1 = VAR_5;
  }
  else {
    VAR_4 = (char *)"all_proxy";
    VAR_1 = FUNC_1(VAR_4);
    if(!VAR_1) {
      VAR_4 = (char *)"ALL_PROXY";
      VAR_1 = FUNC_1(VAR_4);
    }
  }
  if(VAR_1)
    FUNC_2(VAR_0->data, "Uses proxy env variable %s == '%s'\n", VAR_4, VAR_1);

  return VAR_1;
}
