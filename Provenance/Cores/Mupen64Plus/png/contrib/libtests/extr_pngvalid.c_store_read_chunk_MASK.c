
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uLong ;
typedef unsigned int uInt ;
typedef unsigned int png_uint_32 ;
struct TYPE_5__ {unsigned int chunklen; unsigned int chunktype; unsigned int chunkpos; unsigned int IDAT_pos; unsigned int IDAT_len; unsigned int IDAT_size; unsigned int IDAT_bits; int IDAT_crc; int pread; } ;
typedef TYPE_1__ png_store ;
typedef scalar_t__ png_size_t ;
typedef unsigned int* png_bytep ;
typedef unsigned int png_byte ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,unsigned int*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (unsigned int*) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,unsigned int*,scalar_t__) ;

__attribute__((used)) static png_size_t
FUNC_7(png_store *VAR_2, png_bytep VAR_3, const png_size_t VAR_4,
      const png_size_t VAR_5)
{
   png_uint_32 VAR_6 = VAR_2->chunklen;
   png_uint_32 VAR_7 = VAR_2->chunktype;
   png_uint_32 VAR_8 = VAR_2->chunkpos;
   png_size_t VAR_9 = VAR_4;

   if (VAR_9 > 0) do
   {
      if (VAR_8 >= VAR_6)
      {
         png_byte VAR_10[8];


         FUNC_6(VAR_2, VAR_10, 8U);
         VAR_6 = FUNC_2(VAR_10) + 12U;
         VAR_7 = FUNC_2(VAR_10+4U);
         VAR_8 = 0U;
      }

      if (VAR_7 == VAR_0)
      {
         png_uint_32 VAR_11 = VAR_2->IDAT_pos;
         png_uint_32 VAR_12 = VAR_2->IDAT_len;
         png_uint_32 VAR_13 = VAR_2->IDAT_size;


         if (VAR_8 < 8U)
            VAR_8 = 8U;

         if (VAR_11 == VAR_12)
         {
            png_byte VAR_14 = FUNC_3();






            if (VAR_12 == 0U)
            {
               switch (VAR_14 & 3U)
               {
                  case 0U: VAR_12 = 12U; break;
                  case 1U: VAR_12 = 13U; break;
                  default: VAR_12 = FUNC_4();
                           VAR_12 %= VAR_13;
                           VAR_12 += 13U;
                           break;
               }
            }

            else if (VAR_13 == 0U)
            {

               if (VAR_8 != VAR_6-4U)
                  FUNC_1(VAR_2->pread, "internal: IDAT size mismatch");






               if ((VAR_14 & 3U) == 0U)
                  VAR_12 = 12U;

               else
               {



                  png_byte VAR_15[4];

                  FUNC_6(VAR_2, VAR_15, 4U);
                  VAR_8 += 4U;
                  VAR_2->IDAT_pos = VAR_11;
                  VAR_2->IDAT_len = VAR_12;
                  VAR_2->IDAT_size = 0U;
                  continue;
               }
            }

            else
            {



               VAR_12 = FUNC_4();
               VAR_12 &= (1U << (1U + VAR_14 % VAR_2->IDAT_bits)) - 1U;
               if (VAR_12 > VAR_13)
                  VAR_12 = VAR_13;
               VAR_12 += 12U;
            }

            VAR_11 = 0U;
            VAR_2->IDAT_crc = 0x35af061e;
         }

         if (VAR_11 < 8U) do
         {
            png_uint_32 VAR_16;
            unsigned int VAR_17;

            if (VAR_11 < 4U)
               VAR_16 = VAR_12 - 12U;

            else
               VAR_16 = VAR_0;

            VAR_17 = 3U & VAR_11;
            ++VAR_11;

            if (VAR_17 < 3U)
               VAR_16 >>= 8U*(3U-VAR_17);

            *VAR_3++ = 0xffU & VAR_16;
         }
         while (--VAR_9 > 0 && VAR_11 < 8);

         else if (VAR_11 < VAR_12 - 4U)
         {
            if (VAR_8 < VAR_6-4U)
            {
               uInt VAR_18 = (uInt)-1;

               if (VAR_18 > (VAR_12-4U) - VAR_11)
                  VAR_18 = (uInt) ((VAR_12-4U) - VAR_11);

               if (VAR_18 > VAR_9)
                  VAR_18 = (uInt) VAR_9;

               if (VAR_18 > (VAR_6-4U) - VAR_8)
                  VAR_18 = (uInt) ((VAR_6-4U) - VAR_8);

               FUNC_6(VAR_2, VAR_3, VAR_18);
               VAR_2->IDAT_crc = FUNC_0(VAR_2->IDAT_crc, VAR_3, VAR_18);
               VAR_3 += (png_size_t) VAR_18;
               VAR_9 -= (png_size_t) VAR_18;
               VAR_8 += (png_uint_32) VAR_18;
               VAR_13 -= (png_uint_32) VAR_18;
               VAR_11 += (png_uint_32) VAR_18;
            }

            else
            {
               png_byte VAR_19[4];

               FUNC_6(VAR_2, VAR_19, 4U);
               VAR_8 += 4U;
            }
         }

         else do
         {
            uLong VAR_20 = VAR_2->IDAT_crc;
            unsigned int VAR_21 = (VAR_12 - VAR_11);
            ++VAR_11;

            if (VAR_21 > 1U)
               VAR_20 >>= 8U*(VAR_21-1U);

            *VAR_3++ = 0xffU & VAR_20;
         }
         while (--VAR_9 > 0 && VAR_11 < VAR_12);

         VAR_2->IDAT_pos = VAR_11;
         VAR_2->IDAT_len = VAR_12;
         VAR_2->IDAT_size = VAR_13;
      }

      else
      {



         if (VAR_2->IDAT_len > 0 && VAR_2->IDAT_size > 0)
            FUNC_1(VAR_2->pread, "internal: missing IDAT data");

         if (VAR_7 == VAR_1 && VAR_2->IDAT_len == 0U)
            FUNC_1(VAR_2->pread, "internal: missing IDAT");

         if (VAR_8 < 8U) do
         {
            png_uint_32 VAR_22;
            unsigned int VAR_23;

            if (VAR_8 < 4U)
               VAR_22 = VAR_6 - 12U;

            else
               VAR_22 = VAR_7;

            VAR_23 = 3U & VAR_8;
            ++VAR_8;

            if (VAR_23 < 3U)
               VAR_22 >>= 8U*(3U-VAR_23);

            *VAR_3++ = 0xffU & VAR_22;
         }
         while (--VAR_9 > 0 && VAR_8 < 8);

         else
         {
            png_size_t VAR_24 = VAR_9;

            if (VAR_24 > VAR_6 - VAR_8)
               VAR_24 = (png_size_t) (VAR_6 - VAR_8);

            FUNC_6(VAR_2, VAR_3, VAR_24);
            VAR_3 += VAR_24;
            VAR_9 -= VAR_24;
            VAR_8 += (png_uint_32) VAR_24;




            if (VAR_8 >= VAR_6 && VAR_4-VAR_9 >= VAR_5 &&
                     FUNC_5(VAR_2) == 0)
               break;
         }
      }
   }
   while (VAR_9 > 0);

   VAR_2->chunklen = VAR_6;
   VAR_2->chunktype = VAR_7;
   VAR_2->chunkpos = VAR_8;

   return VAR_9;
}
