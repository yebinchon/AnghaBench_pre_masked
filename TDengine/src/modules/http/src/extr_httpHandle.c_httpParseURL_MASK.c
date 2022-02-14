
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* int16_t ;
struct TYPE_7__ {char* pLast; TYPE_1__* path; } ;
struct TYPE_8__ {TYPE_2__ parser; } ;
struct TYPE_6__ {char* pos; size_t len; } ;
typedef TYPE_2__ HttpParser ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

bool FUNC_3(HttpContext* VAR_2) {
  HttpParser* VAR_3 = &VAR_2->parser;
  char* VAR_4;
  char* VAR_5 = FUNC_2(VAR_3->pLast, ' ');
  if (*VAR_3->pLast != '/') {
    FUNC_0(VAR_2, VAR_1);
    return 0;
  }
  VAR_3->pLast++;

  for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    VAR_4 = FUNC_2(VAR_3->pLast, '/');
    if (VAR_4 == ((void*)0)) {
      break;
    }
    VAR_3->path[VAR_6].pos = VAR_3->pLast;
    if (VAR_4 <= VAR_5) {
      VAR_3->path[VAR_6].len = (int16_t)(VAR_4 - VAR_3->pLast);
      VAR_3->path[VAR_6].pos[VAR_3->path[VAR_6].len] = 0;
      FUNC_1(VAR_3->path[VAR_6].pos);
      VAR_3->pLast = VAR_4 + 1;
    } else {
      VAR_3->path[VAR_6].len = (int16_t)(VAR_5 - VAR_3->pLast);
      VAR_3->path[VAR_6].pos[VAR_3->path[VAR_6].len] = 0;
      FUNC_1(VAR_3->path[VAR_6].pos);
      VAR_3->pLast = VAR_5 + 1;
      break;
    }
  }
  VAR_3->pLast = VAR_5 + 1;

  if (VAR_3->path[0].len == 0) {
    FUNC_0(VAR_2, VAR_1);
    return 0;
  }

  return 1;
}
