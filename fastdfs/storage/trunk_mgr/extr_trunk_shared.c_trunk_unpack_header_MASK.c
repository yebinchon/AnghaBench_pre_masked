
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char file_type; char* formatted_ext_name; void* mtime; void* crc32; void* file_size; void* alloc_size; } ;
typedef TYPE_1__ FDFSTrunkHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

void FUNC_2(const char *VAR_7, FDFSTrunkHeader *VAR_8)
{
 VAR_8->file_type = *(VAR_7 + VAR_6);
 VAR_8->alloc_size = FUNC_0(
   VAR_7 + VAR_1);
 VAR_8->file_size = FUNC_0(
   VAR_7 + VAR_5);
 VAR_8->crc32 = FUNC_0(
   VAR_7 + VAR_2);
 VAR_8->mtime = FUNC_0(
   VAR_7 + VAR_4);
 FUNC_1(VAR_8->formatted_ext_name, VAR_7 + VAR_3, VAR_0 + 1);


 *(VAR_8->formatted_ext_name+VAR_0+1)='\0';
}
