
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int file_type; int trunk_info; } ;
struct TYPE_6__ {TYPE_1__ upload; } ;
struct TYPE_7__ {int filename; TYPE_2__ extra_info; } ;
typedef TYPE_3__ StorageFileContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(StorageFileContext *VAR_3)
{
 if (VAR_3->extra_info.upload.file_type & VAR_1)
 {
  return FUNC_0(VAR_3->filename,
                        &(VAR_3->extra_info.upload.trunk_info));
 }
 else
 {
  if (FUNC_1(VAR_3->filename) == 0)
  {
   return 0;
  }
  else
  {
   return VAR_2 != 0 ? VAR_2 : VAR_0;
  }
 }
}
