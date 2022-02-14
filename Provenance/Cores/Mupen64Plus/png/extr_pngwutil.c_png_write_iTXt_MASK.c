
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef size_t png_size_t ;
typedef char* png_const_charp ;
typedef int* png_const_bytep ;
typedef int png_byte ;
struct TYPE_17__ {size_t input_len; size_t output_len; } ;
typedef TYPE_3__ compression_state ;
struct TYPE_15__ {char* msg; } ;
struct TYPE_16__ {TYPE_1__ zstream; } ;


 int VAR_0 ;




 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (TYPE_2__*,char*,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,TYPE_3__*,size_t) ;
 int FUNC_4 (TYPE_3__*,int*,size_t) ;
 int FUNC_5 (TYPE_2__*,int*,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,size_t) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 size_t FUNC_9 (char*) ;

void
FUNC_10(png_structrp VAR_4, int VAR_5, png_const_charp VAR_6,
    png_const_charp VAR_7, png_const_charp VAR_8, png_const_charp VAR_9)
{
   png_uint_32 VAR_10, VAR_11;
   png_size_t VAR_12, VAR_13;
   png_byte VAR_14[82];
   compression_state VAR_15;

   FUNC_1(1, "in png_write_iTXt");

   VAR_10 = FUNC_0(VAR_4, VAR_6, VAR_14);

   if (VAR_10 == 0)
      FUNC_2(VAR_4, "iTXt: invalid keyword");


   switch (VAR_5)
   {
      case 131:
      case 129:
         VAR_5 = VAR_14[++VAR_10] = 0;
         break;

      case 128:
      case 130:
         VAR_5 = VAR_14[++VAR_10] = 1;
         break;

      default:
         FUNC_2(VAR_4, "iTXt: invalid compression");
   }

   VAR_14[++VAR_10] = VAR_0;
   ++VAR_10;
   if (VAR_7 == ((void*)0)) VAR_7 = "";
   VAR_12 = FUNC_9(VAR_7)+1;
   if (VAR_8 == ((void*)0)) VAR_8 = "";
   VAR_13 = FUNC_9(VAR_8)+1;
   if (VAR_9 == ((void*)0)) VAR_9 = "";

   VAR_11 = VAR_10;
   if (VAR_12 > VAR_1-VAR_11)
      VAR_11 = VAR_1;
   else
      VAR_11 = (png_uint_32)(VAR_11 + VAR_12);

   if (VAR_13 > VAR_1-VAR_11)
      VAR_11 = VAR_1;
   else
      VAR_11 = (png_uint_32)(VAR_11 + VAR_13);

   FUNC_4(&VAR_15, (png_const_bytep)VAR_9, FUNC_9(VAR_9));

   if (VAR_5 != 0)
   {
      if (FUNC_3(VAR_4, VAR_3, &VAR_15, VAR_11) != VAR_2)
         FUNC_2(VAR_4, VAR_4->zstream.msg);
   }

   else
   {
      if (VAR_15.input_len > VAR_1-VAR_11)
         FUNC_2(VAR_4, "iTXt: uncompressed text too long");


      VAR_15.output_len = (png_uint_32) VAR_15.input_len;
   }

   FUNC_7(VAR_4, VAR_3, VAR_15.output_len + VAR_11);

   FUNC_5(VAR_4, VAR_14, VAR_10);

   FUNC_5(VAR_4, (png_const_bytep)VAR_7, VAR_12);

   FUNC_5(VAR_4, (png_const_bytep)VAR_8, VAR_13);

   if (VAR_5 != 0)
      FUNC_8(VAR_4, &VAR_15);

   else
      FUNC_5(VAR_4, (png_const_bytep)VAR_9, VAR_15.output_len);

   FUNC_6(VAR_4);
}
