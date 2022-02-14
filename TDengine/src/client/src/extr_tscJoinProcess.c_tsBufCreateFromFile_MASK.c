
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stat {scalar_t__ st_size; } ;
typedef int int64_t ;
typedef size_t int32_t ;
typedef int header ;
struct TYPE_16__ {scalar_t__ order; } ;
struct TYPE_19__ {int numOfAlloc; int numOfVnodes; scalar_t__ tsOrder; int autoDelete; TYPE_1__ cur; scalar_t__ fileSize; int * f; TYPE_2__* pData; int path; } ;
struct TYPE_18__ {scalar_t__ magic; int numOfVnode; scalar_t__ tsOrder; int member_0; } ;
struct TYPE_17__ {int info; } ;
typedef TYPE_2__ STSVnodeBlockInfoEx ;
typedef TYPE_3__ STSVnodeBlockInfo ;
typedef TYPE_3__ STSBufFileHeader ;
typedef TYPE_5__ STSBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*,size_t,int,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_3__*,int) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int ,char const*,int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (char*,scalar_t__) ;

STSBuf* FUNC_15(const char* VAR_6, bool VAR_7) {
  STSBuf* VAR_8 = FUNC_1(1, sizeof(STSBuf));
  if (VAR_8 == ((void*)0)) {
    return ((void*)0);
  }

  FUNC_11(VAR_8->path, VAR_6, VAR_0);

  VAR_8->f = FUNC_3(VAR_8->path, "r");
  if (VAR_8->f == ((void*)0)) {
    return ((void*)0);
  }

  if (FUNC_0(VAR_8) == ((void*)0)) {
    return ((void*)0);
  }


  STSBufFileHeader VAR_9 = {0};
  FUNC_6(VAR_8->f, 0, VAR_2);
  FUNC_4(&VAR_9, 1, sizeof(VAR_9), VAR_8->f);


  if (VAR_9.magic != VAR_5) {
    return ((void*)0);
  }

  if (VAR_9.numOfVnode > VAR_8->numOfAlloc) {
    VAR_8->numOfAlloc = VAR_9.numOfVnode;
    STSVnodeBlockInfoEx* VAR_10 = FUNC_10(VAR_8->pData, sizeof(STSVnodeBlockInfoEx) * VAR_8->numOfAlloc);
    if (VAR_10 == ((void*)0)) {
      FUNC_12(VAR_8);
      return ((void*)0);
    }

    VAR_8->pData = VAR_10;
  }

  VAR_8->numOfVnodes = VAR_9.numOfVnode;


  VAR_8->tsOrder = VAR_9.tsOrder;
  if (VAR_8->tsOrder != VAR_3 && VAR_8->tsOrder != VAR_4) {
    FUNC_14("invalid order info in buf:%d", VAR_8->tsOrder);
    FUNC_12(VAR_8);
    return ((void*)0);
  }

  size_t VAR_11 = sizeof(STSVnodeBlockInfo) * VAR_8->numOfVnodes;

  STSVnodeBlockInfo* VAR_12 = (STSVnodeBlockInfo*)FUNC_1(1, VAR_11);
  int64_t VAR_13 = FUNC_8(VAR_8->f);
  FUNC_4(VAR_12, VAR_11, 1, VAR_8->f);


  for (int32_t VAR_14 = 0; VAR_14 < VAR_8->numOfVnodes; ++VAR_14) {
    STSVnodeBlockInfoEx* VAR_15 = &VAR_8->pData[VAR_14];
    FUNC_9(&VAR_15->info, &VAR_12[VAR_14], sizeof(STSVnodeBlockInfo));
  }

  FUNC_5(VAR_12);

  FUNC_6(VAR_8->f, 0, VAR_1);

  struct stat VAR_16;
  FUNC_7(FUNC_2(VAR_8->f), &VAR_16);

  VAR_8->fileSize = (uint32_t) VAR_16.st_size;
  FUNC_13(VAR_8);


  VAR_8->cur.order = VAR_3;

  VAR_8->autoDelete = VAR_7;
  return VAR_8;
}
