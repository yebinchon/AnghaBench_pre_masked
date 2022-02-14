
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num; TYPE_2__** pRes; } ;
typedef TYPE_1__ tQueryResultset ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ meterType; char* pTagData; scalar_t__ uid; int meterId; } ;
typedef TYPE_2__ STabObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 TYPE_2__** FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (char*) ;
 TYPE_2__** FUNC_3 (TYPE_2__**,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (char**,char const*) ;

__attribute__((used)) static void FUNC_6(tQueryResultset* VAR_2, char* VAR_3, STabObj* VAR_4) {
  const char* VAR_5 = ",";
  char* VAR_6 = ((void*)0);

  int32_t VAR_7 = 4;

  VAR_2->pRes = FUNC_1(sizeof(char*) * VAR_7);
  VAR_2->num = 0;

  for (VAR_6 = FUNC_5(&VAR_3, VAR_5); VAR_6 != ((void*)0); VAR_6 = FUNC_5(&VAR_3, VAR_5)) {
    STabObj* VAR_8 = FUNC_2(VAR_6);
    if (VAR_8 == ((void*)0)) {
      FUNC_0("metric:%s error in metric query expression, invalid meter id:%s", VAR_4->meterId, VAR_6);
      continue;
    }

    if (VAR_2->num >= VAR_7) {
      VAR_7 += (VAR_7 >> 1);
      VAR_2->pRes = FUNC_3(VAR_2->pRes, sizeof(char*) * VAR_7);
    }


    if (VAR_8->meterType != VAR_1) {
      continue;
    }





    STabObj* VAR_9 = FUNC_2(VAR_8->pTagData);
    if (FUNC_4(VAR_9->meterId, VAR_4->meterId, VAR_0) != 0 ||
        (VAR_9->uid != VAR_4->uid)) {
      continue;
    }

    VAR_2->pRes[VAR_2->num++] = VAR_8;
  }
}
