
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {char* valuestring; } ;
typedef TYPE_3__ cJSON ;
struct TYPE_23__ {char* pos; } ;
struct TYPE_27__ {TYPE_1__ data; } ;
struct TYPE_28__ {TYPE_2__* multiCmds; int * encodeMethod; int reqType; int user; int ipstr; int fd; TYPE_5__ parser; } ;
struct TYPE_26__ {int sql; int values; int table; int timestamp; scalar_t__ numOfRows; } ;
struct TYPE_24__ {scalar_t__ pos; } ;
typedef TYPE_4__ HttpSqlCmd ;
typedef TYPE_5__ HttpParser ;
typedef TYPE_6__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_4 (char*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,int,int ) ;
 TYPE_4__* FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (char*,TYPE_6__*,int ,int ,...) ;
 int FUNC_11 (char*,TYPE_6__*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (char*) ;

bool FUNC_13(HttpContext* VAR_9) {
  FUNC_10("context:%p, fd:%d, ip:%s, process grafana query msg", VAR_9, VAR_9->fd, VAR_9->ipstr);

  HttpParser* VAR_10 = &VAR_9->parser;
  char* VAR_11 = VAR_10->data.pos;
  if (VAR_11 == ((void*)0)) {
    FUNC_9(VAR_9, VAR_5);
    return 0;
  }

  cJSON* VAR_12 = FUNC_4(VAR_11);
  if (VAR_12 == ((void*)0)) {
    FUNC_9(VAR_9, VAR_6);
    return 0;
  }

  int VAR_13 = FUNC_2(VAR_12);
  if (VAR_13 <= 0) {
    FUNC_9(VAR_9, VAR_1);
    FUNC_0(VAR_12);
    return 0;
  }

  if (VAR_13 > 100) {
    FUNC_9(VAR_9, VAR_2);
    FUNC_0(VAR_12);
    return 0;
  }

  if (!FUNC_7(VAR_9, VAR_13, VAR_0)) {
    FUNC_9(VAR_9, VAR_4);
    FUNC_0(VAR_12);
    return 0;
  }

  for (int VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
    cJSON* VAR_15 = FUNC_1(VAR_12, VAR_14);
    if (VAR_15 == ((void*)0)) continue;

    cJSON* VAR_16 = FUNC_3(VAR_15, "refId");
    if (VAR_16 == ((void*)0) || VAR_16->valuestring == ((void*)0) || FUNC_12(VAR_16->valuestring) == 0) {
      FUNC_10("context:%p, fd:%d, ip:%s, user:%s, refId is null", VAR_9, VAR_9->fd, VAR_9->ipstr,
                VAR_9->user);
      continue;
    }

    int VAR_17 = FUNC_5(VAR_9, VAR_16->valuestring);
    if (VAR_17 == -1) {
      FUNC_11("context:%p, fd:%d, ip:%s, user:%s, refId buffer is full", VAR_9, VAR_9->fd, VAR_9->ipstr,
               VAR_9->user);
      break;
    }

    cJSON* VAR_18 = FUNC_3(VAR_15, "alias");
    int VAR_19 = -1;
    if (!(VAR_18 == ((void*)0) || VAR_18->valuestring == ((void*)0) || FUNC_12(VAR_18->valuestring) == 0)) {
      VAR_19 = FUNC_5(VAR_9, VAR_18->valuestring);
      if (VAR_19 == -1) {
        FUNC_11("context:%p, fd:%d, ip:%s, user:%s, alias buffer is full", VAR_9, VAR_9->fd, VAR_9->ipstr,
                 VAR_9->user);
        break;
      }
    }
    if (VAR_19 == -1) {
      VAR_19 = FUNC_5(VAR_9, "");
    }

    cJSON* VAR_20 = FUNC_3(VAR_15, "sql");
    if (VAR_20 == ((void*)0) || VAR_20->valuestring == ((void*)0) || FUNC_12(VAR_20->valuestring) == 0) {
      FUNC_10("context:%p, fd:%d, ip:%s, user:%s, sql is null", VAR_9, VAR_9->fd, VAR_9->ipstr,
                VAR_9->user);
      continue;
    }

    int VAR_21 = FUNC_5(VAR_9, VAR_20->valuestring);
    if (VAR_21 == -1) {
      FUNC_11("context:%p, fd:%d, ip:%s, user:%s, sql buffer is full", VAR_9, VAR_9->fd, VAR_9->ipstr,
               VAR_9->user);
      break;
    }

    HttpSqlCmd* VAR_22 = FUNC_8(VAR_9);
    if (VAR_22 == ((void*)0)) {
      FUNC_9(VAR_9, VAR_4);
      FUNC_0(VAR_12);
      return 0;
    }

    VAR_22->sql = VAR_21;
    VAR_22->values = VAR_17;
    VAR_22->table = VAR_19;
    VAR_22->numOfRows = 0;
    VAR_22->timestamp = FUNC_6(VAR_9, VAR_3 + 1);

    if (VAR_22->timestamp == -1) {
      FUNC_11("context:%p, fd:%d, ip:%s, user:%s, cant't malloc target size, sql buffer is full",
               VAR_9, VAR_9->fd, VAR_9->ipstr, VAR_9->user);
      break;
    }
  }

  VAR_9->reqType = VAR_7;
  VAR_9->encodeMethod = &VAR_8;
  VAR_9->multiCmds->pos = 0;

  return 1;
}
