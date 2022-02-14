
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef scalar_t__* png_uint_32p ;
typedef scalar_t__ png_uint_32 ;
typedef TYPE_2__* png_structrp ;
typedef int png_const_bytep ;
typedef int * png_bytep ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_6__ {scalar_t__ avail_in; scalar_t__ avail_out; int msg; int * next_out; int next_in; } ;
struct TYPE_7__ {scalar_t__ zowner; TYPE_1__ zstream; } ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(png_structrp VAR_7, png_uint_32 VAR_8, int VAR_9,
                 png_const_bytep VAR_10, png_uint_32p VAR_11,
                  png_bytep VAR_12, png_alloc_size_t *VAR_13)
{
   if (VAR_7->zowner == VAR_8)
   {
      int VAR_14;
      png_alloc_size_t VAR_15 = *VAR_13;
      png_uint_32 VAR_16 = *VAR_11;
      VAR_7->zstream.next_in = FUNC_0(VAR_10);

      VAR_7->zstream.avail_in = 0;
      VAR_7->zstream.avail_out = 0;




      if (VAR_12 != ((void*)0))
         VAR_7->zstream.next_out = VAR_12;

      do
      {
         uInt VAR_17;
         Byte VAR_18[VAR_0];
         VAR_16 += VAR_7->zstream.avail_in;

         VAR_17 = VAR_1;

         if (VAR_16 < VAR_17)
            VAR_17 = (uInt)VAR_16;

         VAR_16 -= VAR_17;
         VAR_7->zstream.avail_in = VAR_17;


         VAR_15 += VAR_7->zstream.avail_out;

         VAR_17 = VAR_1;

         if (VAR_12 == ((void*)0))
         {



            VAR_7->zstream.next_out = VAR_18;
            if ((sizeof VAR_18) < VAR_17)
               VAR_17 = (sizeof VAR_18);
         }

         if (VAR_15 < VAR_17)
            VAR_17 = (uInt)VAR_15;

         VAR_7->zstream.avail_out = VAR_17;
         VAR_15 -= VAR_17;







         VAR_14 = FUNC_2(VAR_7, VAR_15 > 0 ? VAR_3 :
             (VAR_9 ? VAR_2 : VAR_6));
      } while (VAR_14 == VAR_4);


      if (VAR_12 == ((void*)0))
         VAR_7->zstream.next_out = ((void*)0);


      VAR_16 += VAR_7->zstream.avail_in;
      VAR_15 += VAR_7->zstream.avail_out;




      if (VAR_15 > 0)
         *VAR_13 -= VAR_15;

      if (VAR_16 > 0)
         *VAR_11 -= VAR_16;


      FUNC_3(VAR_7, VAR_14);
      return VAR_14;
   }

   else
   {




      VAR_7->zstream.msg = FUNC_1("zstream unclaimed");
      return VAR_5;
   }
}
