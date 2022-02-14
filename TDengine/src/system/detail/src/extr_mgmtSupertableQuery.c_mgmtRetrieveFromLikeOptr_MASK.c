
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tSkipListNode ;
struct TYPE_7__ {int pRes; int num; } ;
typedef TYPE_1__ tQueryResultset ;
struct TYPE_9__ {char const* member_1; int member_0; } ;
struct TYPE_8__ {int pSkipList; } ;
typedef TYPE_2__ STabObj ;
typedef int SPatternCompareInfo ;
typedef TYPE_3__ SMeterNameFilterSupporter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ***,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(tQueryResultset* VAR_2, const char* VAR_3, STabObj* VAR_4) {
  SPatternCompareInfo VAR_5 = VAR_0;
  SMeterNameFilterSupporter VAR_6 = {VAR_5, VAR_3};

  VAR_2->num =
      FUNC_0(VAR_4->pSkipList, (tSkipListNode***)&VAR_2->pRes, VAR_1, &VAR_6);
}
