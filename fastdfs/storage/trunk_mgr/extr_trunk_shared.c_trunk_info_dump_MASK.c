
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int offset; int size; } ;
struct TYPE_6__ {int store_path_index; int sub_path_high; int sub_path_low; } ;
struct TYPE_7__ {int status; TYPE_1__ file; TYPE_2__ path; } ;
typedef TYPE_3__ FDFSTrunkFullInfo ;


 int FUNC_0 (char*,int const,char*,int,int,int,int,int,int,int) ;

char *FUNC_1(const FDFSTrunkFullInfo *VAR_0, char *VAR_1, const int VAR_2)

{
 FUNC_0(VAR_1, VAR_2, "store_path_index=%d, " "sub_path_high=%d, " "sub_path_low=%d, " "id=%d, offset=%d, size=%d, status=%d", VAR_0->path.store_path_index, VAR_0->path.sub_path_high, VAR_0->path.sub_path_low, VAR_0->file.id, VAR_0->file.offset, VAR_0->file.size, VAR_0->status);
 return VAR_1;
}
