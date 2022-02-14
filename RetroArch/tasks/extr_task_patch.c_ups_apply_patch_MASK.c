
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint64_t ;
typedef size_t uint32_t ;
struct ups_data {int const* patch_data; int const* source_data; int* target_data; unsigned int patch_length; unsigned int source_length; unsigned int target_length; int patch_offset; unsigned int source_offset; unsigned int target_offset; size_t patch_checksum; size_t source_checksum; size_t target_checksum; } ;
typedef enum patch_error { ____Placeholder_patch_error } patch_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct ups_data*) ;
 size_t FUNC_3 (struct ups_data*) ;
 int FUNC_4 (struct ups_data*) ;
 int FUNC_5 (struct ups_data*,int) ;

__attribute__((used)) static enum patch_error FUNC_6(
      const uint8_t *VAR_5, uint64_t VAR_6,
      const uint8_t *VAR_7, uint64_t VAR_8,
      uint8_t **VAR_9, uint64_t *VAR_10)
{
   size_t VAR_11;
   struct ups_data VAR_12;
   unsigned VAR_13;
   unsigned VAR_14;
   uint32_t VAR_15;
   uint32_t VAR_16 = 0;
   uint32_t VAR_17 = 0;
   uint32_t VAR_18 = 0;

   VAR_12.patch_data = VAR_5;
   VAR_12.source_data = VAR_7;
   VAR_12.target_data = *VAR_9;
   VAR_12.patch_length = (unsigned)VAR_6;
   VAR_12.source_length = (unsigned)VAR_8;
   VAR_12.target_length = (unsigned)*VAR_10;
   VAR_12.patch_offset = 0;
   VAR_12.source_offset = 0;
   VAR_12.target_offset = 0;
   VAR_12.patch_checksum = ~0;
   VAR_12.source_checksum = ~0;
   VAR_12.target_checksum = ~0;

   if (VAR_12.patch_length < 18)
      return VAR_0;

   if (
         (FUNC_3(&VAR_12) != 'U') ||
         (FUNC_3(&VAR_12) != 'P') ||
         (FUNC_3(&VAR_12) != 'S') ||
         (FUNC_3(&VAR_12) != '1')
      )
      return VAR_0;

   VAR_13 = (unsigned)FUNC_2(&VAR_12);
   VAR_14 = (unsigned)FUNC_2(&VAR_12);

   if ( (VAR_12.source_length != VAR_13)
         && (VAR_12.source_length != VAR_14))
      return VAR_1;

   *VAR_10 = (VAR_12.source_length == VAR_13 ?
         VAR_14 : VAR_13);

   if (VAR_12.target_length < *VAR_10){
      uint8_t *VAR_19=(uint8_t*)FUNC_1((size_t)*VAR_10);
      if(VAR_19!=((void*)0)){
         FUNC_0(*VAR_9);
         *VAR_9=VAR_19;
         VAR_12.target_data=VAR_19;
      }else
         return VAR_3;
   }

   VAR_12.target_length = (unsigned)*VAR_10;

   while (VAR_12.patch_offset < VAR_12.patch_length - 12)
   {
      unsigned VAR_20 = (unsigned)FUNC_2(&VAR_12);
      while (VAR_20--)
         FUNC_5(&VAR_12, FUNC_4(&VAR_12));
      while (1)
      {
         uint8_t VAR_21 = FUNC_3(&VAR_12);
         FUNC_5(&VAR_12, VAR_21 ^ FUNC_4(&VAR_12));
         if (VAR_21 == 0)
            break;
      }
   }

   while (VAR_12.source_offset < VAR_12.source_length)
      FUNC_5(&VAR_12, FUNC_4(&VAR_12));
   while (VAR_12.target_offset < VAR_12.target_length)
      FUNC_5(&VAR_12, FUNC_4(&VAR_12));

   for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
      VAR_17 |= FUNC_3(&VAR_12) << (VAR_11 * 8);
   for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
      VAR_18 |= FUNC_3(&VAR_12) << (VAR_11 * 8);

   VAR_15 = ~VAR_12.patch_checksum;
   VAR_12.source_checksum = ~VAR_12.source_checksum;
   VAR_12.target_checksum = ~VAR_12.target_checksum;

   for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
      VAR_16 |= FUNC_3(&VAR_12) << (VAR_11 * 8);

   if (VAR_15 != VAR_16)
      return VAR_0;

   if (VAR_12.source_checksum == VAR_17
         && VAR_12.source_length == VAR_13)
   {
      if (VAR_12.target_checksum == VAR_18
            && VAR_12.target_length == VAR_14)
         return VAR_2;
      return VAR_4;
   }
   else if (VAR_12.source_checksum == VAR_18
         && VAR_12.source_length == VAR_14)
   {
      if (VAR_12.target_checksum == VAR_17
            && VAR_12.target_length == VAR_13)
         return VAR_2;
      return VAR_4;
   }

   return VAR_1;
}
