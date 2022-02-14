
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {int i64Key; } ;
struct TYPE_14__ {scalar_t__ order; int size; TYPE_1__ tag; } ;
struct TYPE_13__ {int hasResult; scalar_t__ interResultBuf; } ;
struct TYPE_12__ {int * pTSBuf; } ;
typedef TYPE_2__ STSCompInfo ;
typedef int STSBuf ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_4__*) ;
 char* FUNC_1 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_3) {
  SResultInfo *VAR_4 = FUNC_2(VAR_3);
  STSBuf * VAR_5 = ((STSCompInfo *)(VAR_4->interResultBuf))->pTSBuf;

  const char *VAR_6 = FUNC_0(VAR_3);


  if (VAR_3->order == VAR_2) {
    FUNC_4(VAR_5, 0, VAR_3->tag.i64Key, VAR_6, VAR_3->size * VAR_1);
  } else {
    for (int32_t VAR_7 = VAR_3->size - 1; VAR_7 >= 0; --VAR_7) {
      char *VAR_8 = FUNC_1(VAR_3, VAR_7);
      FUNC_4(VAR_5, 0, VAR_3->tag.i64Key, VAR_8, VAR_1);
    }
  }

  FUNC_3(VAR_3, VAR_3->size, 1);

  VAR_4->hasResult = VAR_0;
}
