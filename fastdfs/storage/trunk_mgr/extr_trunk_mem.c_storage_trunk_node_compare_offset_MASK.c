
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int offset; } ;
struct TYPE_6__ {TYPE_1__ file; int path; } ;
struct TYPE_5__ {TYPE_3__ trunk; } ;
typedef int FDFSTrunkPathInfo ;
typedef TYPE_2__ FDFSTrunkNode ;
typedef TYPE_3__ FDFSTrunkFullInfo ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 FDFSTrunkFullInfo *VAR_2;
 FDFSTrunkFullInfo *VAR_3;
 int VAR_4;

 VAR_2 = &(((FDFSTrunkNode *)VAR_0)->trunk);
 VAR_3 = &(((FDFSTrunkNode *)VAR_1)->trunk);

 VAR_4 = FUNC_0(&(VAR_2->path), &(VAR_3->path), sizeof(FDFSTrunkPathInfo));

 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 VAR_4 = VAR_2->file.id - VAR_3->file.id;
 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return VAR_2->file.offset - VAR_3->file.offset;
}
