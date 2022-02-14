
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct bps_data {size_t const* modify_data; size_t const* source_data; size_t* target_data; int modify_length; int source_length; int target_length; int modify_offset; size_t modify_checksum; size_t source_checksum; size_t target_checksum; size_t output_offset; scalar_t__ target_offset; scalar_t__ source_offset; scalar_t__ target_relative_offset; scalar_t__ source_relative_offset; } ;
typedef enum patch_error { ____Placeholder_patch_error } patch_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 size_t FUNC_0 (struct bps_data*) ;
 size_t FUNC_1 (struct bps_data*) ;
 int FUNC_2 (struct bps_data*,size_t) ;
 size_t FUNC_3 (int ,size_t*,size_t) ;
 int FUNC_4 (size_t*) ;
 scalar_t__ FUNC_5 (size_t) ;

__attribute__((used)) static enum patch_error FUNC_6(
      const uint8_t *VAR_8, uint64_t VAR_9,
      const uint8_t *VAR_10, uint64_t VAR_11,
      uint8_t **VAR_12, uint64_t *VAR_13)
{
   size_t VAR_14;
   uint32_t VAR_15;
   size_t VAR_16;
   size_t VAR_17;
   size_t VAR_18;
   struct bps_data VAR_19;
   uint32_t VAR_20 = 0;
   uint32_t VAR_21 = 0;
   uint32_t VAR_22 = 0;

   if (VAR_9 < 19)
      return VAR_2;

   VAR_19.modify_data = VAR_8;
   VAR_19.source_data = VAR_10;
   VAR_19.target_data = *VAR_12;
   VAR_19.modify_length = VAR_9;
   VAR_19.source_length = VAR_11;
   VAR_19.target_length = *VAR_13;
   VAR_19.modify_offset = 0;
   VAR_19.source_offset = 0;
   VAR_19.target_offset = 0;
   VAR_19.modify_checksum = ~0;
   VAR_19.source_checksum = 0;
   VAR_19.target_checksum = ~0;
   VAR_19.source_relative_offset = 0;
   VAR_19.target_relative_offset = 0;
   VAR_19.output_offset = 0;

   if ( (FUNC_1(&VAR_19) != 'B') ||
         (FUNC_1(&VAR_19) != 'P') ||
         (FUNC_1(&VAR_19) != 'S') ||
         (FUNC_1(&VAR_19) != '1'))
      return VAR_1;

   VAR_16 = FUNC_0(&VAR_19);
   VAR_17 = FUNC_0(&VAR_19);
   VAR_18 = FUNC_0(&VAR_19);

   for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++)
      FUNC_1(&VAR_19);

   if (VAR_16 > VAR_19.source_length)
      return VAR_4;
   if (VAR_17 > VAR_19.target_length){
      uint8_t *VAR_23=(uint8_t*)FUNC_5((size_t)VAR_17);
      if (VAR_23!=((void*)0)){
         FUNC_4(*VAR_12);
       VAR_19.target_data=VAR_23;
         *VAR_12=VAR_23;
         VAR_19.target_length=VAR_17;
      }else
         return VAR_6;
   }

   while (VAR_19.modify_offset < VAR_19.modify_length - 12)
   {
      size_t VAR_24 = FUNC_0(&VAR_19);
      unsigned VAR_25 = VAR_24 & 3;

      VAR_24 = (VAR_24 >> 2) + 1;

      switch (VAR_25)
      {
         case 130:
            while (VAR_24--)
               FUNC_2(&VAR_19, VAR_19.source_data[VAR_19.output_offset]);
            break;

         case 128:
            while (VAR_24--)
               FUNC_2(&VAR_19, FUNC_1(&VAR_19));
            break;

         case 131:
         case 129:
         {
            int VAR_26 = (int)FUNC_0(&VAR_19);
            bool VAR_27 = VAR_26 & 1;

            VAR_26 >>= 1;

            if (VAR_27)
               VAR_26 = -VAR_26;

            if (VAR_25 == 131)
            {
               VAR_19.source_offset += VAR_26;
               while (VAR_24--)
                  FUNC_2(&VAR_19, VAR_19.source_data[VAR_19.source_offset++]);
            }
            else
            {
               VAR_19.target_offset += VAR_26;
               while (VAR_24--)
                  FUNC_2(&VAR_19, VAR_19.target_data[VAR_19.target_offset++]);
               break;
            }
            break;
         }
      }
   }

   for (VAR_14 = 0; VAR_14 < 32; VAR_14 += 8)
      VAR_20 |= FUNC_1(&VAR_19) << VAR_14;
   for (VAR_14 = 0; VAR_14 < 32; VAR_14 += 8)
      VAR_21 |= FUNC_1(&VAR_19) << VAR_14;

   VAR_15 = ~VAR_19.modify_checksum;
   for (VAR_14 = 0; VAR_14 < 32; VAR_14 += 8)
      VAR_22 |= FUNC_1(&VAR_19) << VAR_14;

   VAR_19.source_checksum = FUNC_3(0,
         VAR_19.source_data, VAR_19.source_length);
   VAR_19.target_checksum = ~VAR_19.target_checksum;

   if (VAR_19.source_checksum != VAR_20)
      return VAR_3;

   if (VAR_19.target_checksum != VAR_21)
      return VAR_7;

   if (VAR_15 != VAR_22)
      return VAR_0;

   *VAR_13 = VAR_17;

   return VAR_5;
}
