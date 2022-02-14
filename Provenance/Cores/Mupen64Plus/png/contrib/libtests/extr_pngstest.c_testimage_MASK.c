
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int * png_colorp ;
typedef int png_color ;
typedef int format_list ;
struct TYPE_13__ {int format; } ;
struct TYPE_14__ {int opts; TYPE_1__ image; scalar_t__* tmpfile_name; scalar_t__ input_memory_size; int * input_memory; int * input_file; scalar_t__ allocsize; scalar_t__ bufsize; int * buffer; } ;
typedef TYPE_2__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_9(Image *VAR_4, png_uint_32 VAR_5, format_list *VAR_6)
{
   int VAR_7;
   Image VAR_8;


   FUNC_0(VAR_4);
   VAR_8 = *VAR_4;

   VAR_8.opts = VAR_5;
   VAR_8.buffer = ((void*)0);
   VAR_8.bufsize = 0;
   VAR_8.allocsize = 0;

   VAR_4->input_file = ((void*)0);
   VAR_4->input_memory = ((void*)0);
   VAR_4->input_memory_size = 0;
   VAR_4->tmpfile_name[0] = 0;

   {
      png_uint_32 VAR_9;
      Image VAR_10;

      FUNC_4(&VAR_10);

      VAR_7 = 1;





      for (VAR_9=0; VAR_9<2*VAR_0; ++VAR_9)
         if (FUNC_2(VAR_6, VAR_9 >> 1))
      {
         png_uint_32 VAR_11 = VAR_9 >> 1;

         png_color VAR_12;
         png_colorp VAR_13 = ((void*)0);







         if ((VAR_9 & 1) == 0)
         {
            if ((VAR_11 & VAR_1) == 0 &&
               (VAR_4->image.format & VAR_1) != 0)
            {



               FUNC_5(&VAR_12);
               VAR_13 = &VAR_12;





               if ((VAR_11 & VAR_2) != 0 &&
                  (VAR_11 & VAR_3) == 0)
                  ++VAR_9;
            }




            else
               ++VAR_9;
         }


         FUNC_7(&VAR_8);
         VAR_8.opts = VAR_5;

         VAR_7 = FUNC_6(&VAR_8, VAR_11, VAR_13);
         if (!VAR_7)
            break;


         VAR_7 = FUNC_1(VAR_4, &VAR_8, 0 , VAR_13);
         if (!VAR_7)
            break;
      }

      FUNC_3(&VAR_10);
   }

   FUNC_3(&VAR_8);

   return VAR_7;
}
