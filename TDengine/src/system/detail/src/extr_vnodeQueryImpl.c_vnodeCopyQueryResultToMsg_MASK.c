
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {scalar_t__ numOfOutputCols; TYPE_1__** sdata; int * pSelectExpr; } ;
struct TYPE_10__ {TYPE_2__ query; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_3__*,int ,int ) ;
 int FUNC_4 (char*,TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,char*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 size_t FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*,size_t) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int32_t FUNC_12(void *VAR_4, char *VAR_5, int32_t VAR_6, int32_t* VAR_7) {
  SQInfo *VAR_8 = (SQInfo *)VAR_4;
  SQuery * VAR_9 = &VAR_8->query;

  FUNC_1(VAR_9->pSelectExpr != ((void*)0) && VAR_9->numOfOutputCols > 0);


  if (FUNC_6(VAR_9)) {
    int32_t VAR_10 = FUNC_8(VAR_9->sdata[0]->data, VAR_0, 0666);


    if (FUNC_0(VAR_10)) {
      size_t VAR_11 = FUNC_7(VAR_10, 0, VAR_1);
      FUNC_4("QInfo:%p ts comp data return, file:%s, size:%ld", VAR_8, VAR_9->sdata[0]->data, VAR_7);

      FUNC_7(VAR_10, 0, VAR_2);
      FUNC_9(VAR_10, VAR_5, VAR_11);
      FUNC_2(VAR_10);

      FUNC_11(VAR_9->sdata[0]->data);
    } else {
      FUNC_3("QInfo:%p failed to open tmp file to send ts-comp data to client, path:%s, reason:%s", VAR_8,
             VAR_9->sdata[0]->data, FUNC_10(VAR_3));
    }
  } else {
    FUNC_5(VAR_8, VAR_6, VAR_5, VAR_7);
  }

  return VAR_6;
}
