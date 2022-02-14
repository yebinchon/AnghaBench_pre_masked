
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * pMeterMeta; } ;
struct TYPE_13__ {scalar_t__ command; int type; } ;
struct TYPE_11__ {scalar_t__ qhandle; scalar_t__ code; scalar_t__ numOfRows; } ;
struct TYPE_12__ {int freed; int * fp; int * thandle; int * pStream; struct TYPE_12__* signature; TYPE_3__ cmd; TYPE_1__ res; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,TYPE_2__*,...) ;

void FUNC_6(TAOS_RES *VAR_8) {
  if (VAR_8 == ((void*)0)) return;

  SSqlObj *VAR_9 = (SSqlObj *)VAR_8;
  SSqlRes *VAR_10 = &VAR_9->res;
  SSqlCmd *VAR_11 = &VAR_9->cmd;

  FUNC_5("%p start to free result", VAR_9);

  if (VAR_9->signature != VAR_9) return;

  if (VAR_10 == ((void*)0) || VAR_10->qhandle == 0) {

    FUNC_5("%p qhandle is null, abort free, fp:%p", VAR_9, VAR_9->fp);
    if (VAR_9->fp != ((void*)0)) {
      VAR_9->thandle = ((void*)0);
      FUNC_1(VAR_9);
      FUNC_5("%p Async SqlObj is freed by app", VAR_9);
    } else {
      FUNC_2(VAR_9);
    }
    return;
  }


  VAR_11->type = VAR_2;

  SMeterMetaInfo *VAR_12 = FUNC_3(VAR_11, 0);
  if (VAR_10->code != VAR_0 &&
      ((VAR_10->numOfRows > 0 && VAR_11->command < VAR_4) ||
       (VAR_10->code == VAR_1 && VAR_10->numOfRows == 0 && VAR_11->command == VAR_7 &&
        VAR_9->pStream == ((void*)0) && VAR_12->pMeterMeta != ((void*)0)))) {
    VAR_11->command = (VAR_11->command > VAR_5) ? VAR_6 : VAR_3;

    void *VAR_13 = VAR_9->fp;
    if (VAR_13 != ((void*)0)) {
      VAR_9->freed = 1;
    }

    FUNC_4(VAR_9);





    if (VAR_13 == ((void*)0)) {
      VAR_9->thandle = ((void*)0);
      FUNC_2(VAR_9);
      FUNC_5("%p sql result is freed by app", VAR_9);
    }
  } else {

    VAR_9->thandle = ((void*)0);

    if (VAR_9->fp) {
      FUNC_0(VAR_10->numOfRows == 0 || (VAR_11->command > VAR_4));
      FUNC_1(VAR_9);
      FUNC_5("%p Async sql result is freed by app", VAR_9);
    } else {
      FUNC_2(VAR_9);
      FUNC_5("%p sql result is freed", VAR_9);
    }
  }
}
