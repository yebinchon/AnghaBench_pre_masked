
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uLong ;
typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_const_structrp ;
typedef int * png_const_bytep ;
struct TYPE_6__ {scalar_t__* md5; scalar_t__ have_md5; int is_broken; scalar_t__ adler; scalar_t__ crc; scalar_t__ intent; scalar_t__ length; } ;
struct TYPE_5__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_4(png_const_structrp VAR_5,
    png_const_bytep VAR_6, uLong VAR_7)
{
   png_uint_32 VAR_8 = 0;
   png_uint_32 VAR_9 = 0x10000;



   unsigned int VAR_10;
   for (VAR_10=0; VAR_10 < (sizeof VAR_4) / (sizeof VAR_4[0]); ++VAR_10)
   {
      if (FUNC_3(VAR_6+84) == VAR_4[VAR_10].md5[0] &&
         FUNC_3(VAR_6+88) == VAR_4[VAR_10].md5[1] &&
         FUNC_3(VAR_6+92) == VAR_4[VAR_10].md5[2] &&
         FUNC_3(VAR_6+96) == VAR_4[VAR_10].md5[3])
      {





            if (VAR_4[VAR_10].have_md5 != 0)
               return 1+VAR_4[VAR_10].is_broken;



         if (VAR_8 == 0)
         {
            VAR_8 = FUNC_3(VAR_6);
            VAR_9 = FUNC_3(VAR_6+64);
         }


         if (VAR_8 == (png_uint_32) VAR_4[VAR_10].length &&
            VAR_9 == (png_uint_32) VAR_4[VAR_10].intent)
         {

            if (VAR_7 == 0)
            {
               VAR_7 = FUNC_0(0, ((void*)0), 0);
               VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_8);
            }

            if (VAR_7 == VAR_4[VAR_10].adler)
            {
               {
                  if (VAR_4[VAR_10].is_broken != 0)
                  {





                     FUNC_2(VAR_5, "known incorrect sRGB profile",
                         VAR_0);
                  }





                  else if (VAR_4[VAR_10].have_md5 == 0)
                  {
                     FUNC_2(VAR_5,
                         "out-of-date sRGB profile with no signature",
                         VAR_1);
                  }

                  return 1+VAR_4[VAR_10].is_broken;
               }
            }
         }
      }
   }

   return 0;
}
