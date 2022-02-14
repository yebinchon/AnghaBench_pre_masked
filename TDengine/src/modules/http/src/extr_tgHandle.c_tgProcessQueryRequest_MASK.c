
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int cJSON ;
struct TYPE_14__ {char* pos; } ;
struct TYPE_17__ {TYPE_1__ data; } ;
struct TYPE_18__ {TYPE_2__* multiCmds; int * encodeMethod; int reqType; int ipstr; int fd; TYPE_4__ parser; } ;
struct TYPE_16__ {void* sql; void* cmdReturnType; void* cmdType; } ;
struct TYPE_15__ {int pos; } ;
typedef TYPE_3__ HttpSqlCmd ;
typedef TYPE_4__ HttpParser ;
typedef TYPE_5__ HttpContext ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (char*) ;
 void* FUNC_5 (TYPE_5__*,char*,char*) ;
 int FUNC_6 (TYPE_5__*,int,int ) ;
 TYPE_3__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (char*,TYPE_5__*,int ,int ,...) ;
 int FUNC_10 (TYPE_5__*,int *,char*) ;
 int VAR_10 ;

bool FUNC_11(HttpContext *VAR_11, char *VAR_12) {
  FUNC_9("context:%p, fd:%d, ip:%s, process telegraf query msg", VAR_11, VAR_11->fd, VAR_11->ipstr);

  HttpParser *VAR_13 = &VAR_11->parser;
  char * VAR_14 = VAR_13->data.pos;
  if (VAR_14 == ((void*)0)) {
    FUNC_8(VAR_11, VAR_5);
    return 0;
  }

  cJSON *VAR_15 = FUNC_4(VAR_14);
  if (VAR_15 == ((void*)0)) {
    FUNC_8(VAR_11, VAR_7);
    return 0;
  }

  cJSON *VAR_16 = FUNC_3(VAR_15, "metrics");
  if (VAR_16 != ((void*)0)) {
    int VAR_17 = FUNC_2(VAR_16);
    FUNC_9("context:%p, fd:%d, ip:%s, multiple metrics:%d at one time", VAR_11, VAR_11->fd, VAR_11->ipstr,
              VAR_17);
    if (VAR_17 <= 0) {
      FUNC_8(VAR_11, VAR_8);
      FUNC_0(VAR_15);
      return 0;
    }

    int VAR_18 = VAR_17 * 2 + 1;
    if (VAR_18 > VAR_3) {
      FUNC_8(VAR_11, VAR_9);
      FUNC_0(VAR_15);
      return 0;
    }

    if (!FUNC_6(VAR_11, VAR_18, VAR_0)) {
      FUNC_8(VAR_11, VAR_4);
      FUNC_0(VAR_15);
      return 0;
    }

    HttpSqlCmd *VAR_19 = FUNC_7(VAR_11);
    if (VAR_19 == ((void*)0)) {
      FUNC_8(VAR_11, VAR_4);
      FUNC_0(VAR_15);
      return 0;
    }
    VAR_19->cmdType = VAR_2;
    VAR_19->cmdReturnType = VAR_1;
    VAR_19->sql = FUNC_5(VAR_11, "create database if not exists %s", VAR_12);

    for (int VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
      cJSON *VAR_21 = FUNC_1(VAR_16, VAR_20);
      if (VAR_21 != ((void*)0)) {
        if (!FUNC_10(VAR_11, VAR_21, VAR_12)) {
          FUNC_0(VAR_15);
          return 0;
        }
      }
    }
  } else {
    FUNC_9("context:%p, fd:%d, ip:%s, single metric", VAR_11, VAR_11->fd, VAR_11->ipstr);

    if (!FUNC_6(VAR_11, 3, VAR_0)) {
      FUNC_8(VAR_11, VAR_4);
      FUNC_0(VAR_15);
      return 0;
    }

    HttpSqlCmd *VAR_22 = FUNC_7(VAR_11);
    if (VAR_22 == ((void*)0)) {
      FUNC_8(VAR_11, VAR_4);
      FUNC_0(VAR_15);
      return 0;
    }
    VAR_22->cmdType = VAR_2;
    VAR_22->cmdReturnType = VAR_1;
    VAR_22->sql = FUNC_5(VAR_11, "create database if not exists %s", VAR_12);

    if (!FUNC_10(VAR_11, VAR_15, VAR_12)) {
      FUNC_0(VAR_15);
      return 0;
    }
  }

  FUNC_0(VAR_15);

  VAR_11->reqType = VAR_6;
  VAR_11->encodeMethod = &VAR_10;
  VAR_11->multiCmds->pos = 2;

  return 1;
}
