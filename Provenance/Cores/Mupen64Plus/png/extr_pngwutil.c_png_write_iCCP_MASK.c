
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef int png_const_charp ;
typedef int * png_const_bytep ;
typedef int png_byte ;
struct TYPE_17__ {scalar_t__ output_len; } ;
typedef TYPE_3__ compression_state ;
struct TYPE_15__ {char* msg; } ;
struct TYPE_16__ {TYPE_1__ zstream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;

void
FUNC_10(png_structrp VAR_3, png_const_charp VAR_4,
    png_const_bytep VAR_5)
{
   png_uint_32 VAR_6;
   png_uint_32 VAR_7;
   png_byte VAR_8[81];
   compression_state VAR_9;
   png_uint_32 VAR_10;

   FUNC_1(1, "in png_write_iCCP");




   if (VAR_5 == ((void*)0))
      FUNC_2(VAR_3, "No profile for iCCP chunk");

   VAR_7 = FUNC_3(VAR_5);

   if (VAR_7 < 132)
      FUNC_2(VAR_3, "ICC profile too short");

   VAR_10 = (png_uint_32) (*(VAR_5+8));
   if (VAR_10 > 3 && (VAR_7 & 0x03))
      FUNC_2(VAR_3, "ICC profile length invalid (not a multiple of 4)");

   {
      png_uint_32 VAR_11 = FUNC_3(VAR_5);

      if (VAR_7 != VAR_11)
         FUNC_2(VAR_3, "Profile length does not match profile");
   }

   VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_8);

   if (VAR_6 == 0)
      FUNC_2(VAR_3, "iCCP: invalid keyword");

   VAR_8[++VAR_6] = VAR_0;


   ++VAR_6;

   FUNC_5(&VAR_9, VAR_5, VAR_7);


   if (FUNC_4(VAR_3, VAR_2, &VAR_9, VAR_6) != VAR_1)
      FUNC_2(VAR_3, VAR_3->zstream.msg);

   FUNC_8(VAR_3, VAR_2, VAR_6 + VAR_9.output_len);

   FUNC_6(VAR_3, VAR_8, VAR_6);

   FUNC_9(VAR_3, &VAR_9);

   FUNC_7(VAR_3);
}
