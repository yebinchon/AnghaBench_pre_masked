
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {TYPE_2__* pSql; } ;
struct TYPE_4__ {void* code; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
typedef void TAOS ;
typedef TYPE_3__ STscObj ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char const*,char const*,char const*,char const*,int,int *,int *,int *) ;
 int FUNC_6 (void*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_7 (char*,void*,...) ;
 int FUNC_8 (char*,char const*) ;
 int VAR_3 ;

TAOS *FUNC_9(const char *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_4 == ((void*)0) || (VAR_4 != ((void*)0) && (FUNC_1("127.0.0.1", VAR_4) == 0 || FUNC_0("localhost", VAR_4) == 0))) {



    VAR_4 = VAR_2;

  }
  FUNC_8("try to create a connection to %s", VAR_4);

  void *VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_9 != ((void*)0)) {
    STscObj* VAR_10 = (STscObj*) VAR_9;


    int32_t VAR_11 = 3;
    char VAR_12[64] = {0};
    char VAR_13[64] = {0};
    int VAR_14[4] = {0};
    int VAR_15[4] = {0};

    FUNC_2(VAR_12, VAR_3);
    FUNC_2(VAR_13, FUNC_6(VAR_9));

    if (!FUNC_3(VAR_12, VAR_14)) {
      FUNC_7("taos:%p, invalid client version:%s", VAR_9, VAR_12);
      VAR_10->pSql->res.code = VAR_0;
      FUNC_4(VAR_9);
      return ((void*)0);
    }

    if (!FUNC_3(VAR_13, VAR_15)) {
      FUNC_7("taos:%p, invalid server version:%s", VAR_9, VAR_13);
      VAR_10->pSql->res.code = VAR_0;
      FUNC_4(VAR_9);
      return ((void*)0);
    }

    for(int32_t VAR_16 = 0; VAR_16 < VAR_11; ++VAR_16) {
      if (VAR_14[VAR_16] != VAR_15[VAR_16]) {
        FUNC_7("taos:%p, the %d-th number of server version:%s not matched with client version:%s, close connection",
                 VAR_9, VAR_16, VAR_13, VAR_3);
        VAR_10->pSql->res.code = VAR_0;
        FUNC_4(VAR_9);
        return ((void*)0);
      }
    }
  }

  return VAR_9;
}
