
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ first_sector; int size; } ;
typedef TYPE_1__ cdfs_file_t ;



int64_t FUNC_0(cdfs_file_t* VAR_0)
{
   if (!VAR_0 || VAR_0->first_sector < 0)
      return 0;

   return VAR_0->size;
}
