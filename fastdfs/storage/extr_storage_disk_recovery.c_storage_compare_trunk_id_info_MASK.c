
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int path; } ;
typedef int FDFSTrunkPathInfo ;
typedef TYPE_1__ FDFSTrunkFileIdInfo ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_0(&(((FDFSTrunkFileIdInfo *)VAR_0)->path), &(((FDFSTrunkFileIdInfo *)VAR_1)->path), sizeof(FDFSTrunkPathInfo));


 if (VAR_2 != 0)
 {
  return VAR_2;
 }

 return ((FDFSTrunkFileIdInfo *)VAR_0)->id - ((FDFSTrunkFileIdInfo *)VAR_1)->id;
}
