
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file_type; int alloc_size; int file_size; int crc32; int mtime; char* formatted_ext_name; } ;
typedef TYPE_1__ FDFSTrunkHeader ;


 int FUNC_0 (char*,int const,char*,int,int,int,int,int,int,char*) ;
 scalar_t__ FUNC_1 (char*) ;

char *FUNC_2(const FDFSTrunkHeader *VAR_0, char *VAR_1, const int VAR_2)

{
 FUNC_0(VAR_1, VAR_2, "file_type=%d, " "alloc_size=%d, " "file_size=%d, " "crc32=%d, " "mtime=%d, " "ext_name(%d)=%s", VAR_0->file_type, VAR_0->alloc_size, VAR_0->file_size, VAR_0->crc32, VAR_0->mtime, (int)FUNC_1(VAR_0->formatted_ext_name), VAR_0->formatted_ext_name);
 return VAR_1;
}
