
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double loadCompInfoUs; double readField; double loadFieldUs; double loadBlocksUs; double fileTimeUs; double cacheTimeUs; int numOfSeek; int numOfTables; int numOfFiles; int tmpBufferInDisk; int blocksInCache; int totalGenData; int skippedFileBlocks; int totalBlockSize; int readDiskBlocks; scalar_t__ totalFieldSize; int totalCompInfoSize; int readCompInfo; } ;
struct TYPE_5__ {TYPE_2__ summary; int * pQuery; } ;
struct TYPE_7__ {int bufSize; TYPE_1__ runtimeEnv; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQueryCostSummary ;
typedef int SQuery ;
typedef int SQInfo ;
typedef TYPE_3__ SMeterQuerySupportObj ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,double,...) ;

void FUNC_2(SMeterQuerySupportObj *VAR_0) {
  SQueryRuntimeEnv *VAR_1 = &VAR_0->runtimeEnv;

  SQuery *VAR_2 = VAR_1->pQuery;
  SQInfo *VAR_3 = (SQInfo *)FUNC_0(VAR_2);

  SQueryCostSummary *VAR_4 = &VAR_1->summary;
  VAR_4->tmpBufferInDisk = VAR_0->bufSize;

  FUNC_1("QInfo:%p statis: comp blocks:%d, size:%d Bytes, elapsed time:%.2f ms", VAR_3, VAR_4->readCompInfo,
         VAR_4->totalCompInfoSize, VAR_4->loadCompInfoUs / 1000.0);

  FUNC_1("QInfo:%p statis: field info: %d, size:%d Bytes, avg size:%.2f Bytes, elapsed time:%.2f ms", VAR_3,
         VAR_4->readField, VAR_4->totalFieldSize, (double)VAR_4->totalFieldSize / VAR_4->readField,
         VAR_4->loadFieldUs / 1000.0);

  FUNC_1(
      "QInfo:%p statis: file blocks:%d, size:%d Bytes, elapsed time:%.2f ms, skipped:%d, in-memory gen null:%d Bytes",
      VAR_3, VAR_4->readDiskBlocks, VAR_4->totalBlockSize, VAR_4->loadBlocksUs / 1000.0,
      VAR_4->skippedFileBlocks, VAR_4->totalGenData);

  FUNC_1("QInfo:%p statis: cache blocks:%d", VAR_3, VAR_4->blocksInCache, 0);
  FUNC_1("QInfo:%p statis: temp file:%d Bytes", VAR_3, VAR_4->tmpBufferInDisk);

  FUNC_1("QInfo:%p statis: file:%d, table:%d", VAR_3, VAR_4->numOfFiles, VAR_4->numOfTables);
  FUNC_1("QInfo:%p statis: seek ops:%d", VAR_3, VAR_4->numOfSeek);

  double VAR_5 = VAR_4->fileTimeUs + VAR_4->cacheTimeUs;
  double VAR_6 = VAR_4->loadCompInfoUs + VAR_4->loadBlocksUs + VAR_4->loadFieldUs;



  double VAR_7 = VAR_5 - VAR_6;

  FUNC_1(
      "QInfo:%p statis: total elapsed time:%.2f ms, file:%.2f ms(%.2f%), cache:%.2f ms(%.2f%). io:%.2f ms(%.2f%),"
      "comput:%.2fms(%.2f%)",
      VAR_3, VAR_5 / 1000.0, VAR_4->fileTimeUs / 1000.0, VAR_4->fileTimeUs * 100 / VAR_5,
      VAR_4->cacheTimeUs / 1000.0, VAR_4->cacheTimeUs * 100 / VAR_5, VAR_6 / 1000.0, VAR_6 * 100 / VAR_5,
      VAR_7 / 1000.0, VAR_7 * 100 / VAR_5);
}
