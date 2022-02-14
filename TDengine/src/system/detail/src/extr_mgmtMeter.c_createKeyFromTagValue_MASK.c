
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSkipListKey ;
typedef size_t int16_t ;
struct TYPE_6__ {int bytes; int type; } ;
struct TYPE_5__ {int numOfColumns; char* pTagData; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(STabObj *VAR_1, STabObj *VAR_2, tSkipListKey *VAR_3) {
  SSchema * VAR_4 = (SSchema *)(VAR_1->schema + VAR_1->numOfColumns * sizeof(SSchema));
  const int16_t VAR_5 = 0;

  char *VAR_6 = VAR_2->pTagData + VAR_0;
  *VAR_3 = FUNC_0(VAR_4[VAR_5].type, VAR_6, VAR_4[VAR_5].bytes);
}
