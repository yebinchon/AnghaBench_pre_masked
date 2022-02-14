
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t numExifTags; char const** exifTags; } ;
typedef TYPE_1__ RASPISTILL_STATE ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(RASPISTILL_STATE *VAR_1, const char *VAR_2)
{
   if (VAR_1->numExifTags < VAR_0)
   {
      VAR_1->exifTags[VAR_1->numExifTags] = VAR_2;
      VAR_1->numExifTags++;
   }
}
