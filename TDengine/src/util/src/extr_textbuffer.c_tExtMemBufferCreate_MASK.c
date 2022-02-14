
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tFlushoutInfo ;
typedef int tFilePage ;
struct TYPE_7__ {int nAllocSize; int * pFlushoutInfo; scalar_t__ nLength; } ;
struct TYPE_8__ {TYPE_1__ flushoutData; void* nPageSize; scalar_t__ nFileSize; scalar_t__ numOfElemsInFile; } ;
typedef TYPE_2__ tFileMeta ;
struct TYPE_9__ {int nPageSize; int nMaxSizeInPages; int nElemSize; int numOfElemsPerPage; int pColModel; TYPE_2__ fileMeta; int dataFilePath; } ;
typedef TYPE_3__ tExtMemBuffer ;
struct TYPE_10__ {int numOfCols; int pFields; } ;
typedef TYPE_4__ tColModel ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(tExtMemBuffer **VAR_1, int32_t VAR_2, int32_t VAR_3, const char *VAR_4,
                         tColModel *VAR_5) {
  (*VAR_1) = (tExtMemBuffer *)FUNC_1(1, sizeof(tExtMemBuffer));

  (*VAR_1)->nPageSize = VAR_0;
  (*VAR_1)->nMaxSizeInPages = FUNC_0(VAR_2) / (*VAR_1)->nPageSize;
  (*VAR_1)->nElemSize = VAR_3;

  (*VAR_1)->numOfElemsPerPage = ((*VAR_1)->nPageSize - sizeof(tFilePage)) / (*VAR_1)->nElemSize;

  FUNC_2((*VAR_1)->dataFilePath, VAR_4);

  tFileMeta *VAR_6 = &(*VAR_1)->fileMeta;

  VAR_6->numOfElemsInFile = 0;
  VAR_6->nFileSize = 0;
  VAR_6->nPageSize = VAR_0;

  VAR_6->flushoutData.nAllocSize = 4;
  VAR_6->flushoutData.nLength = 0;
  VAR_6->flushoutData.pFlushoutInfo = (tFlushoutInfo *)FUNC_1(4, sizeof(tFlushoutInfo));

  (*VAR_1)->pColModel = FUNC_3(VAR_5->pFields, VAR_5->numOfCols, (*VAR_1)->numOfElemsPerPage);
}
