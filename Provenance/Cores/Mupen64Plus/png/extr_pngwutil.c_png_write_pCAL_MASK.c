
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_structrp ;
typedef scalar_t__* png_size_tp ;
typedef scalar_t__ png_size_t ;
typedef int png_int_32 ;
typedef scalar_t__ png_const_charp ;
typedef scalar_t__* png_const_bytep ;
typedef scalar_t__* png_charpp ;
typedef int png_charp ;
typedef scalar_t__ png_byte ;
typedef int png_alloc_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,int,unsigned long) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

void
FUNC_11(png_structrp VAR_2, png_charp VAR_3, png_int_32 VAR_4,
    png_int_32 VAR_5, int VAR_6, int VAR_7, png_const_charp VAR_8,
    png_charpp VAR_9)
{
   png_uint_32 VAR_10;
   png_size_t VAR_11, VAR_12;
   png_size_tp VAR_13;
   png_byte VAR_14[10];
   png_byte VAR_15[80];
   int VAR_16;

   FUNC_1(1, "in png_write_pCAL (%d parameters)", VAR_7);

   if (VAR_6 >= VAR_0)
      FUNC_3(VAR_2, "Unrecognized equation type for pCAL chunk");

   VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_15);

   if (VAR_10 == 0)
      FUNC_3(VAR_2, "pCAL: invalid keyword");

   ++VAR_10;

   FUNC_1(3, "pCAL purpose length = %d", (int)VAR_10);
   VAR_11 = FUNC_10(VAR_8) + (VAR_7 == 0 ? 0 : 1);
   FUNC_1(3, "pCAL units length = %d", (int)VAR_11);
   VAR_12 = VAR_10 + VAR_11 + 10;

   VAR_13 = (png_size_tp)FUNC_5(VAR_2,
       (png_alloc_size_t)((png_alloc_size_t)VAR_7 * (sizeof (png_size_t))));




   for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
   {
      VAR_13[VAR_16] = FUNC_10(VAR_9[VAR_16]) + (VAR_16 == VAR_7 - 1 ? 0 : 1);
      FUNC_2(3, "pCAL parameter %d length = %lu", VAR_16,
          (unsigned long)VAR_13[VAR_16]);
      VAR_12 += VAR_13[VAR_16];
   }

   FUNC_1(3, "pCAL total length = %d", (int)VAR_12);
   FUNC_9(VAR_2, VAR_1, (png_uint_32)VAR_12);
   FUNC_7(VAR_2, VAR_15, VAR_10);
   FUNC_6(VAR_14, VAR_4);
   FUNC_6(VAR_14 + 4, VAR_5);
   VAR_14[8] = (png_byte)VAR_6;
   VAR_14[9] = (png_byte)VAR_7;
   FUNC_7(VAR_2, VAR_14, (png_size_t)10);
   FUNC_7(VAR_2, (png_const_bytep)VAR_8, (png_size_t)VAR_11);

   for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
   {
      FUNC_7(VAR_2, (png_const_bytep)VAR_9[VAR_16], VAR_13[VAR_16]);
   }

   FUNC_4(VAR_2, VAR_13);
   FUNC_8(VAR_2);
}
