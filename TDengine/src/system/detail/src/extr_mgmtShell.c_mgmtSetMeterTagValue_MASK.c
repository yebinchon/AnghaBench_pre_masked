
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ bytes; } ;
struct TYPE_5__ {int numOfColumns; char* pTagData; size_t numOfTags; scalar_t__ schema; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SSchema ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static uint32_t FUNC_1(char *VAR_1, STabObj *VAR_2, STabObj *VAR_3) {
  SSchema *VAR_4 = (SSchema *)(VAR_2->schema + VAR_2->numOfColumns * sizeof(SSchema));

  char *VAR_5 = VAR_3->pTagData + VAR_0;

  uint32_t VAR_6 = 0;
  for (int32_t VAR_7 = 0; VAR_7 < VAR_2->numOfTags; ++VAR_7) {
    VAR_6 += VAR_4[VAR_7].bytes;
  }

  FUNC_0(VAR_1, VAR_5, VAR_6);
  return VAR_6;
}
