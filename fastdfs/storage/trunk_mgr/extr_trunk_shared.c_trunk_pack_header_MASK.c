
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char file_type; int formatted_ext_name; int mtime; int crc32; int file_size; int alloc_size; } ;
typedef TYPE_1__ FDFSTrunkHeader ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

void FUNC_2(const FDFSTrunkHeader *VAR_7, char *VAR_8)
{
 *(VAR_8 + VAR_6) = VAR_7->file_type;
 FUNC_0(VAR_7->alloc_size, VAR_8 + VAR_1);

 FUNC_0(VAR_7->file_size, VAR_8 + VAR_5);

 FUNC_0(VAR_7->crc32, VAR_8 + VAR_2);

 FUNC_0(VAR_7->mtime, VAR_8 + VAR_4);

 FUNC_1(VAR_8 + VAR_3, VAR_7->formatted_ext_name, VAR_0 + 1);


}
