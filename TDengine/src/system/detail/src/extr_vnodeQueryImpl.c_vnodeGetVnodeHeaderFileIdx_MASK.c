
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int numOfFiles; TYPE_1__* pHeaderFiles; } ;
struct TYPE_4__ {int fileID; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(int32_t *VAR_2, SQueryRuntimeEnv *VAR_3, int32_t VAR_4) {
  if (VAR_3->numOfFiles == 0) {
    return -1;
  }


  if (VAR_4 == VAR_0 && *VAR_2 < VAR_3->pHeaderFiles[0].fileID) {
    *VAR_2 = VAR_3->pHeaderFiles[0].fileID;
    return 0;
  } else if (VAR_4 == VAR_1 && *VAR_2 > VAR_3->pHeaderFiles[VAR_3->numOfFiles - 1].fileID) {
    *VAR_2 = VAR_3->pHeaderFiles[VAR_3->numOfFiles - 1].fileID;
    return VAR_3->numOfFiles - 1;
  }

  int32_t VAR_5 = VAR_3->numOfFiles;

  if (VAR_4 == VAR_1 && *VAR_2 > VAR_3->pHeaderFiles[VAR_5 - 1].fileID) {
    *VAR_2 = VAR_3->pHeaderFiles[VAR_5 - 1].fileID;
    return VAR_5 - 1;
  }

  if (VAR_4 == VAR_0) {
    int32_t VAR_6 = 0;
    int32_t VAR_7 = 1;

    while (VAR_6<VAR_5 && * VAR_2> VAR_3->pHeaderFiles[VAR_6].fileID) {
      VAR_6 += VAR_7;
    }

    if (VAR_6 < VAR_5 && *VAR_2 <= VAR_3->pHeaderFiles[VAR_6].fileID) {
      *VAR_2 = VAR_3->pHeaderFiles[VAR_6].fileID;
      return VAR_6;
    } else {
      return -1;
    }
  } else {
    int32_t VAR_8 = VAR_5 - 1;
    int32_t VAR_9 = -1;

    while (VAR_8 >= 0 && *VAR_2 < VAR_3->pHeaderFiles[VAR_8].fileID) {
      VAR_8 += VAR_9;
    }

    if (VAR_8 >= 0 && *VAR_2 >= VAR_3->pHeaderFiles[VAR_8].fileID) {
      *VAR_2 = VAR_3->pHeaderFiles[VAR_8].fileID;
      return VAR_8;
    } else {
      return -1;
    }
  }
}
