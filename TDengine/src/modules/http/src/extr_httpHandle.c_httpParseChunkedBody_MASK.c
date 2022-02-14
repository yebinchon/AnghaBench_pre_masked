
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pos; } ;
struct TYPE_5__ {char* buffer; int bufsize; TYPE_1__ data; } ;
typedef TYPE_2__ HttpParser ;
typedef int HttpContext ;


 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*,int *,int) ;

bool FUNC_3(HttpContext* VAR_0, HttpParser* VAR_1, bool VAR_2) {
  char* VAR_3 = VAR_1->buffer + VAR_1->bufsize;
  char* VAR_4 = VAR_1->data.pos;
  char* VAR_5 = VAR_1->data.pos;
  size_t VAR_6 = FUNC_2(VAR_5, ((void*)0), 16);
  if (VAR_6 <= 0) return 0;

  while (VAR_6 > 0) {
    char* VAR_7 = FUNC_1(VAR_5, "\r\n");
    if (VAR_7 == ((void*)0) || VAR_7 >= VAR_3) return 0;
    VAR_7 += 2;

    VAR_5 = FUNC_1(VAR_7, "\r\n");
    if (VAR_5 == ((void*)0) || VAR_5 >= VAR_3) return 0;
    if ((size_t)(VAR_5 - VAR_7) != VAR_6) return 0;
    VAR_5 += 2;

    if (!VAR_2) {
      FUNC_0(VAR_4, VAR_7, VAR_6);
      VAR_4 += VAR_6;
    }

    VAR_6 = FUNC_2(VAR_5, ((void*)0), 16);
  }

  if (!VAR_2) {
    *VAR_4 = '\0';
  }

  return 1;
}
