
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int pLoserTree; int pList; int maxEntries; } ;
struct TYPE_7__ {int pTree; int pSkipList; int numOfEntries; } ;
typedef TYPE_1__ SInsertSupporter ;
typedef TYPE_2__ SHistogramInfo ;
typedef int SHistBin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int) ;

SHistogramInfo* FUNC_4(int32_t VAR_3) {

  SHistogramInfo* VAR_4 = FUNC_0(sizeof(SHistogramInfo) + sizeof(SHistBin) * (VAR_3 + 1));


  VAR_4->pList = FUNC_3(VAR_0, VAR_1, sizeof(double));
  SInsertSupporter* VAR_5 = FUNC_0(sizeof(SInsertSupporter));
  VAR_5->numOfEntries = VAR_4->maxEntries;
  VAR_5->pSkipList = VAR_4->pList;

  int32_t VAR_6 = FUNC_2(&VAR_4->pLoserTree, VAR_3, VAR_5, VAR_2);
  VAR_5->pTree = VAR_4->pLoserTree;


  return FUNC_1(VAR_4, VAR_3);
}
