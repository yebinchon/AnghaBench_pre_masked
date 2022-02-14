
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uInt ;
typedef TYPE_2__* png_structrp ;
typedef scalar_t__ png_size_t ;
typedef int * png_bytep ;
struct TYPE_9__ {scalar_t__ avail_in; scalar_t__ avail_out; scalar_t__ next_out; int * next_in; } ;
struct TYPE_10__ {int flags; scalar_t__ row_buf; scalar_t__ row_number; scalar_t__ num_rows; int pass; TYPE_1__ zstream; scalar_t__ zowner; int iwidth; int pixel_depth; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;

void
FUNC_6(png_structrp VAR_5, png_bytep VAR_6,
    png_size_t VAR_7)
{

   if (!(VAR_7 > 0) || VAR_6 == ((void*)0))
      FUNC_3(VAR_5, "No IDAT data (internal error)");





   VAR_5->zstream.next_in = VAR_6;

   VAR_5->zstream.avail_in = (uInt)VAR_7;




   while (VAR_5->zstream.avail_in > 0 &&
      (VAR_5->flags & VAR_0) == 0)
   {
      int VAR_8;






      if (!(VAR_5->zstream.avail_out > 0))
      {

         VAR_5->zstream.avail_out = (uInt)(FUNC_1(VAR_5->pixel_depth,
             VAR_5->iwidth) + 1);

         VAR_5->zstream.next_out = VAR_5->row_buf;
      }
      VAR_8 = FUNC_0(VAR_5, VAR_4);


      if (VAR_8 != VAR_2 && VAR_8 != VAR_3)
      {

         VAR_5->flags |= VAR_0;
         VAR_5->zowner = 0;




         if (VAR_5->row_number >= VAR_5->num_rows ||
             VAR_5->pass > 6)
            FUNC_5(VAR_5, "Truncated compressed data in IDAT");

         else
         {
            if (VAR_8 == VAR_1)
               FUNC_2(VAR_5, "IDAT: ADLER32 checksum mismatch");
            else
               FUNC_3(VAR_5, "Decompression error in IDAT");
         }


         return;
      }


      if (VAR_5->zstream.next_out != VAR_5->row_buf)
      {




         if (VAR_5->row_number >= VAR_5->num_rows ||
             VAR_5->pass > 6)
         {

            FUNC_5(VAR_5, "Extra compressed data in IDAT");
            VAR_5->flags |= VAR_0;
            VAR_5->zowner = 0;




            return;
         }


         if (VAR_5->zstream.avail_out == 0)
            FUNC_4(VAR_5);
      }


      if (VAR_8 == VAR_3)
         VAR_5->flags |= VAR_0;
   }





   if (VAR_5->zstream.avail_in > 0)
      FUNC_5(VAR_5, "Extra compression data in IDAT");
}
