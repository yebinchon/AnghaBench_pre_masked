
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num; TYPE_3__** pRes; } ;
typedef TYPE_2__ tQueryResultset ;
typedef size_t int32_t ;
struct TYPE_5__ {size_t vgId; } ;
struct TYPE_7__ {TYPE_1__ gid; } ;
typedef TYPE_3__ STabObj ;



__attribute__((used)) static int32_t FUNC_0(tQueryResultset *VAR_0) {
  int32_t VAR_1 = 0;
  int32_t VAR_2 = -1;

  for (int32_t VAR_3 = 0; VAR_3 < VAR_0->num; ++VAR_3) {
    STabObj *VAR_4 = VAR_0->pRes[VAR_3];
    if (VAR_2 == -1) {
      VAR_2 = VAR_4->gid.vgId;
      VAR_1++;
    } else if (VAR_2 != VAR_4->gid.vgId) {
      VAR_2 = VAR_4->gid.vgId;
      VAR_1++;
    }
  }

  return VAR_1;
}
