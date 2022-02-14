
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {scalar_t__ fraction; int totalBlocks; } ;
struct TYPE_5__ {scalar_t__ maxSessions; scalar_t__ cacheBlockSize; scalar_t__ daysPerFile; scalar_t__ daysToKeep; scalar_t__ daysToKeep1; scalar_t__ daysToKeep2; scalar_t__ commitTime; scalar_t__ compression; int commitLog; int replications; scalar_t__ rowsInFileBlock; scalar_t__ precision; int blocksPerMeter; TYPE_1__ cacheNumOfBlocks; } ;
typedef TYPE_2__ SCreateDbMsg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;

int FUNC_1(SCreateDbMsg *VAR_30) {

  if (VAR_30->maxSessions < 0) VAR_30->maxSessions = VAR_29;
  if (VAR_30->cacheBlockSize < 0) VAR_30->cacheBlockSize = VAR_21;
  if (VAR_30->daysPerFile < 0) VAR_30->daysPerFile = VAR_25;
  if (VAR_30->daysToKeep < 0) VAR_30->daysToKeep = VAR_26;
  if (VAR_30->daysToKeep1 < 0) VAR_30->daysToKeep1 = VAR_30->daysToKeep;
  if (VAR_30->daysToKeep2 < 0) VAR_30->daysToKeep2 = VAR_30->daysToKeep;
  if (VAR_30->commitTime < 0) VAR_30->commitTime = VAR_23;
  if (VAR_30->compression < 0) VAR_30->compression = VAR_24;
  if (VAR_30->commitLog < 0) VAR_30->commitLog = VAR_22;
  if (VAR_30->replications < 0) VAR_30->replications = VAR_27;
  if (VAR_30->rowsInFileBlock < 0) VAR_30->rowsInFileBlock = VAR_28;
  if (VAR_30->cacheNumOfBlocks.fraction < 0) VAR_30->cacheNumOfBlocks.fraction = VAR_20;





  VAR_30->replications = 1;


  if (VAR_30->commitLog < 0 || VAR_30->commitLog > 1) {
    FUNC_0("invalid db option commitLog: %d", VAR_30->commitLog);
    return VAR_0;
  }

  if (VAR_30->replications < VAR_16 || VAR_30->replications > VAR_15) {
    FUNC_0("invalid db option replications: %d", VAR_30->replications);
    return VAR_0;
  }

  if (VAR_30->daysPerFile < VAR_3 || VAR_30->daysPerFile > VAR_2) {
    FUNC_0("invalid db option daysPerFile: %d valid range: %d--%d", VAR_30->daysPerFile, VAR_3,
           VAR_2);
    return VAR_0;
  }

  if (VAR_30->daysToKeep1 > VAR_30->daysToKeep2 || VAR_30->daysToKeep2 > VAR_30->daysToKeep) {
    FUNC_0("invalid db option daystokeep1: %d, daystokeep2: %d, daystokeep: %d", VAR_30->daysToKeep1,
           VAR_30->daysToKeep2, VAR_30->daysToKeep);
    return VAR_0;
  }

  if (VAR_30->daysToKeep1 < VAR_3 || VAR_30->daysToKeep1 < VAR_30->daysPerFile) {
    FUNC_0("invalid db option daystokeep: %d", VAR_30->daysToKeep);
    return VAR_0;
  }
  if (VAR_30->rowsInFileBlock < VAR_13 || VAR_30->rowsInFileBlock > VAR_9) {
    FUNC_0("invalid db option rowsInFileBlock: %d valid range: %d--%d", VAR_30->rowsInFileBlock,
           VAR_13, VAR_9);
    return VAR_0;
  }
  if (VAR_30->cacheBlockSize < VAR_11 || VAR_30->cacheBlockSize > VAR_6) {
    FUNC_0("invalid db option cacheBlockSize: %d valid range: %d--%d", VAR_30->cacheBlockSize,
           VAR_11, VAR_6);
    return VAR_0;
  }
  if (VAR_30->maxSessions < VAR_14 || VAR_30->maxSessions > VAR_10) {
    FUNC_0("invalid db option maxSessions: %d valid range: %d--%d", VAR_30->maxSessions, VAR_14,
           VAR_10);
    return VAR_0;
  }

  if (VAR_30->precision != VAR_18 && VAR_30->precision != VAR_17) {
    FUNC_0("invalid db option timePrecision: %d valid value: %d,%d", VAR_30->precision, VAR_18,
           VAR_17);
    return VAR_0;
  }

  if (VAR_30->cacheNumOfBlocks.fraction < 0 || VAR_30->cacheNumOfBlocks.fraction > VAR_4) {
    FUNC_0("invalid db option ablocks: %d valid value: %d,%d", VAR_30->precision, 0, VAR_4);
    return VAR_0;
  } else {
    VAR_30->cacheNumOfBlocks.totalBlocks = (int32_t)(VAR_30->cacheNumOfBlocks.fraction * VAR_30->maxSessions);
  }

  if (VAR_30->cacheNumOfBlocks.totalBlocks > VAR_5) {
    FUNC_0("invalid db option cacheNumOfBlocks: %d valid range: %d", VAR_30->cacheNumOfBlocks.totalBlocks,
           VAR_5);
    return VAR_0;
  }

  if (VAR_30->commitTime < VAR_12 || VAR_30->commitTime > VAR_7) {
    FUNC_0("invalid db option commitTime: %d valid range: %d-%d", VAR_30->commitTime, VAR_12,
           VAR_7);
    return VAR_0;
  }
  if (VAR_30->compression > VAR_8) {
    FUNC_0("invalid db option compression: %d", VAR_30->compression, VAR_12,
           VAR_7);
    return VAR_0;
  }

  if (VAR_30->blocksPerMeter < 0) VAR_30->blocksPerMeter = VAR_30->cacheNumOfBlocks.totalBlocks / 4;
  if (VAR_30->blocksPerMeter > VAR_30->cacheNumOfBlocks.totalBlocks * 3 / 4) {
    VAR_30->blocksPerMeter = VAR_30->cacheNumOfBlocks.totalBlocks * 3 / 4;
  }
  if (VAR_30->blocksPerMeter < 4) VAR_30->blocksPerMeter = 4;

  VAR_30->maxSessions++;

  return VAR_1;
}
