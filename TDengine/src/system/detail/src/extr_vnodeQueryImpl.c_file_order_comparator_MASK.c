
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fileID; } ;
typedef TYPE_1__ SQueryFileInfo ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
  SQueryFileInfo *VAR_2 = (SQueryFileInfo *)VAR_0;
  SQueryFileInfo *VAR_3 = (SQueryFileInfo *)VAR_1;

  if (VAR_2->fileID == VAR_3->fileID) {
    return 0;
  }

  return (VAR_2->fileID > VAR_3->fileID) ? 1 : -1;
}
