
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_12__ {scalar_t__ fd; int user; int ipstr; } ;
struct TYPE_11__ {scalar_t__ numOfRows; } ;
struct TYPE_10__ {int type; int bytes; } ;
typedef int ** TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int JsonBuf ;
typedef TYPE_2__ HttpSqlCmd ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_3__*,scalar_t__,int ,int ) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,float) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int * FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (char*,TYPE_3__*,scalar_t__,int ,int ,scalar_t__,...) ;
 TYPE_1__* FUNC_13 (int *) ;
 int ** FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_5 ;

bool FUNC_17(HttpContext *VAR_6, HttpSqlCmd *VAR_7, TAOS_RES *VAR_8, int VAR_9, int VAR_10) {
  JsonBuf *VAR_11 = FUNC_11(VAR_6);
  if (VAR_11 == ((void*)0)) return 0;

  VAR_7->numOfRows += VAR_9;

  int VAR_12 = FUNC_15(VAR_8);
  TAOS_FIELD *VAR_13 = FUNC_13(VAR_8);

  for (int VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
    TAOS_ROW VAR_15 = FUNC_14(VAR_8);


    FUNC_5(VAR_11);
    FUNC_9(VAR_11, VAR_1);

    for (int VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
      FUNC_5(VAR_11);

      if (VAR_15[VAR_16] == ((void*)0)) {
        FUNC_6(VAR_11, "null", 4);
        continue;
      }

      switch (VAR_13[VAR_16].type) {
        case 135:
        case 128:
          FUNC_3(VAR_11, *((int8_t *)VAR_15[VAR_16]));
          break;
        case 130:
          FUNC_3(VAR_11, *((int16_t *)VAR_15[VAR_16]));
          break;
        case 132:
          FUNC_3(VAR_11, *((int32_t *)VAR_15[VAR_16]));
          break;
        case 137:
          FUNC_4(VAR_11, *((int64_t *)VAR_15[VAR_16]));
          break;
        case 133:
          FUNC_2(VAR_11, *((float *)VAR_15[VAR_16]));
          break;
        case 134:
          FUNC_1(VAR_11, *((double *)VAR_15[VAR_16]));
          break;
        case 136:
        case 131:
          FUNC_7(VAR_11, VAR_15[VAR_16], VAR_13[VAR_16].bytes);
          break;
        case 129:
          if (VAR_10 == VAR_2) {
            FUNC_8(VAR_11, *((int64_t *)VAR_15[VAR_16]), FUNC_16(VAR_8) == VAR_4);
          } else if (VAR_10 == VAR_3) {
            FUNC_4(VAR_11, *((int64_t *)VAR_15[VAR_16]));
          } else {
            FUNC_10(VAR_11, *((int64_t *)VAR_15[VAR_16]), FUNC_16(VAR_8) == VAR_4);
          }
          break;
        default:
          break;
      }
    }


    FUNC_9(VAR_11, VAR_0);
  }

  if (VAR_7->numOfRows >= VAR_5) {
    FUNC_12("context:%p, fd:%d, ip:%s, user:%s, retrieve rows:%lld larger than limit:%d, abort retrieve", VAR_6,
              VAR_6->fd, VAR_6->ipstr, VAR_6->user, VAR_7->numOfRows, VAR_5);
    return 0;
  }
  else {
    if (VAR_6->fd <= 0) {
      FUNC_0("context:%p, fd:%d, ip:%s, user:%s, connection is closed, abort retrieve", VAR_6, VAR_6->fd,
                VAR_6->ipstr, VAR_6->user);
      return 0;
    }
    else {
      FUNC_12("context:%p, fd:%d, ip:%s, user:%s, total rows:%lld retrieved", VAR_6, VAR_6->fd, VAR_6->ipstr,
                VAR_6->user, VAR_7->numOfRows);
      return 1;
    }
  }
}
