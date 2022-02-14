
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int count; TYPE_4__** blocks; } ;
struct TYPE_7__ {int id; int offset; int size; } ;
struct TYPE_6__ {int store_path_index; int sub_path_high; int sub_path_low; } ;
struct TYPE_9__ {TYPE_2__ file; TYPE_1__ path; } ;
struct TYPE_8__ {TYPE_5__ block_array; } ;
typedef int FILE ;
typedef TYPE_3__ FDFSTrunksById ;
typedef TYPE_4__ FDFSTrunkFullInfo ;
typedef TYPE_5__ FDFSBlockArray ;


 int FUNC_0 (int *,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 FILE *VAR_2;
 FDFSBlockArray *VAR_3;
 FDFSTrunkFullInfo **VAR_4;
 FDFSTrunkFullInfo **VAR_5;

 VAR_2 = (FILE *)VAR_1;
 VAR_3 = &(((FDFSTrunksById *)VAR_0)->block_array);
 VAR_5 = VAR_3->blocks + VAR_3->count;
 for (VAR_4=VAR_3->blocks; VAR_4<VAR_5; VAR_4++)
 {
  FUNC_0(VAR_2, "%d %d %d %d %d %d\n", (*VAR_4)->path.store_path_index, (*VAR_4)->path.sub_path_high, (*VAR_4)->path.sub_path_low, (*VAR_4)->file.id, (*VAR_4)->file.offset, (*VAR_4)->file.size);



 }

 return 0;
}
