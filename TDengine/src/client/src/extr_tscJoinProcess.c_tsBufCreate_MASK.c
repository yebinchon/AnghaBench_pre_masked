
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int order; } ;
struct TYPE_13__ {int autoDelete; int tsOrder; TYPE_1__ cur; int numOfVnodes; int * f; int path; } ;
struct TYPE_12__ {int tsOrder; int numOfVnode; int magic; } ;
typedef TYPE_2__ STSBufFileHeader ;
typedef TYPE_3__ STSBuf ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

STSBuf* FUNC_7(bool VAR_2) {
  STSBuf* VAR_3 = FUNC_2(1, sizeof(STSBuf));
  if (VAR_3 == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_5("join", VAR_3->path);
  VAR_3->f = FUNC_3(VAR_3->path, "w+");
  if (VAR_3->f == ((void*)0)) {
    FUNC_4(VAR_3);
    return ((void*)0);
  }

  FUNC_1(VAR_3);


  STSBufFileHeader VAR_4 = {.magic = VAR_1, .numOfVnode = VAR_3->numOfVnodes, .tsOrder = VAR_0};
  FUNC_0(VAR_3, &VAR_4);

  FUNC_6(VAR_3);
  VAR_3->cur.order = VAR_0;

  VAR_3->autoDelete = VAR_2;
  VAR_3->tsOrder = -1;

  return VAR_3;
}
