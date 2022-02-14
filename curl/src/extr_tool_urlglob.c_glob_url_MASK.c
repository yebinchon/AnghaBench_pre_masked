
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int text ;
struct TYPE_6__ {char* glob_buffer; char* error; scalar_t__ pos; scalar_t__ urllen; } ;
typedef TYPE_1__ URLGlob ;
typedef int FILE ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int,unsigned long*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int,char*,char*,scalar_t__,char*,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (char*) ;

CURLcode FUNC_8(URLGlob **VAR_2, char *VAR_3, unsigned long *VAR_4,
                  FILE *VAR_5)
{




  URLGlob *VAR_6;
  unsigned long VAR_7 = 0;
  char *VAR_8;
  CURLcode VAR_9;

  *VAR_2 = ((void*)0);

  VAR_8 = FUNC_5(FUNC_7(VAR_3) + 1);
  if(!VAR_8)
    return VAR_1;
  VAR_8[0] = 0;

  VAR_6 = FUNC_1(1, sizeof(URLGlob));
  if(!VAR_6) {
    FUNC_0(VAR_8);
    return VAR_1;
  }
  VAR_6->urllen = FUNC_7(VAR_3);
  VAR_6->glob_buffer = VAR_8;

  VAR_9 = FUNC_4(VAR_6, VAR_3, 1, &VAR_7);
  if(!VAR_9)
    *VAR_4 = VAR_7;
  else {
    if(VAR_5 && VAR_6->error) {
      char VAR_10[512];
      const char *VAR_11;
      if(VAR_6->pos) {
        FUNC_6(VAR_10, sizeof(VAR_10), "%s in URL position %zu:\n%s\n%*s^",
                  VAR_6->error,
                  VAR_6->pos, VAR_3, VAR_6->pos - 1, " ");
        VAR_11 = VAR_10;
      }
      else
        VAR_11 = VAR_6->error;


      FUNC_2(VAR_5, "curl: (%d) %s\n", VAR_9, VAR_11);
    }

    FUNC_3(VAR_6);
    *VAR_4 = 1;
    return VAR_9;
  }

  *VAR_2 = VAR_6;
  return VAR_0;
}
