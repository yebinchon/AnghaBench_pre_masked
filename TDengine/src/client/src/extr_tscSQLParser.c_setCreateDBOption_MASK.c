
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numOfBlocksPerTable; int compressionLevel; int commitLog; int commitTime; int tablesPerVnode; int numOfAvgCacheBlocks; int cacheBlockSize; int rowPerFileBlock; int daysPerFile; int replica; } ;
struct TYPE_6__ {int fraction; } ;
struct TYPE_7__ {int compression; int commitLog; int replications; void* daysPerFile; void* rowsInFileBlock; void* cacheBlockSize; TYPE_1__ cacheNumOfBlocks; void* maxSessions; void* commitTime; int blocksPerMeter; void* daysToKeep2; void* daysToKeep1; void* daysToKeep; int precision; } ;
typedef TYPE_2__ SCreateDbMsg ;
typedef TYPE_3__ SCreateDBInfo ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(SCreateDbMsg* VAR_1, SCreateDBInfo* VAR_2) {
  VAR_1->precision = VAR_0;

  VAR_1->daysToKeep = FUNC_0(-1);
  VAR_1->daysToKeep1 = FUNC_0(-1);
  VAR_1->daysToKeep2 = FUNC_0(-1);

  VAR_1->blocksPerMeter = (VAR_2->numOfBlocksPerTable == 0) ? FUNC_1(-1) : FUNC_1(VAR_2->numOfBlocksPerTable);
  VAR_1->compression = (VAR_2->compressionLevel == 0) ? -1 : VAR_2->compressionLevel;

  VAR_1->commitLog = (VAR_2->commitLog == 0) ? -1 : VAR_2->commitLog;
  VAR_1->commitTime = (VAR_2->commitTime == 0) ? FUNC_0(-1) : FUNC_0(VAR_2->commitTime);
  VAR_1->maxSessions = (VAR_2->tablesPerVnode == 0) ? FUNC_0(-1) : FUNC_0(VAR_2->tablesPerVnode);
  VAR_1->cacheNumOfBlocks.fraction = (VAR_2->numOfAvgCacheBlocks == 0) ? -1 : VAR_2->numOfAvgCacheBlocks;
  VAR_1->cacheBlockSize = (VAR_2->cacheBlockSize == 0) ? FUNC_0(-1) : FUNC_0(VAR_2->cacheBlockSize);
  VAR_1->rowsInFileBlock = (VAR_2->rowPerFileBlock == 0) ? FUNC_0(-1) : FUNC_0(VAR_2->rowPerFileBlock);
  VAR_1->daysPerFile = (VAR_2->daysPerFile == 0) ? FUNC_0(-1) : FUNC_0(VAR_2->daysPerFile);
  VAR_1->replications = (VAR_2->replica == 0) ? -1 : VAR_2->replica;
}
