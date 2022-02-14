
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ vgId; } ;
struct TYPE_4__ {TYPE_1__ gid; } ;
typedef TYPE_2__ STabObj ;



__attribute__((used)) static int32_t FUNC_0(const void* VAR_0, const void* VAR_1) {
  STabObj* VAR_2 = *(STabObj**)VAR_0;
  STabObj* VAR_3 = *(STabObj**)VAR_1;

  int32_t VAR_4 = VAR_2->gid.vgId - VAR_3->gid.vgId;
  if (VAR_4 == 0) {
    return VAR_4;
  } else {
    return VAR_4 > 0 ? 1 : -1;
  }
}
