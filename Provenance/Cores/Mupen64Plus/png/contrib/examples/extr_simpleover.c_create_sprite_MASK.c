
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct sprite {char const* name; int * buffer; int * file; int height; int width; } ;
typedef int * png_uint_16p ;
struct TYPE_9__ {char* message; scalar_t__ colormap_entries; int flags; void* format; int height; int width; int * opaque; void* version; } ;
typedef TYPE_1__ png_image ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int,int *,int ,int *) ;
 int FUNC_9 (struct sprite*,int,int,TYPE_1__*,int *) ;
 int FUNC_10 (char const*,char*,int*,int*,char*) ;
 int VAR_4 ;
 char* FUNC_11 (int ) ;
 int * FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct sprite *VAR_5, int *VAR_6, const char ***VAR_7)
{





   while (*VAR_6 > 0)
   {
      char VAR_8;
      int VAR_9 = 0, VAR_10 = 0;

      if ((*VAR_7)[0][0] == '-' && (*VAR_7)[0][1] == '-')
      {

         if (FUNC_10((*VAR_7)[0], "--at=%d,%d%c", &VAR_9, &VAR_10, &VAR_8) != 2)
            break;

         ++*VAR_7, --*VAR_6;
      }

      else
      {

         png_image VAR_11;

         VAR_11.version = VAR_2;
         VAR_11.opaque = ((void*)0);

         if (FUNC_5(&VAR_11, (*VAR_7)[0]))
         {
            png_uint_16p VAR_12;

            VAR_11.format = VAR_0;

            VAR_12 = FUNC_3(FUNC_0(VAR_11));

            if (VAR_12 != ((void*)0))
            {
               if (FUNC_6(&VAR_11, ((void*)0) , VAR_12,
                  0 ,
                  ((void*)0) ))
               {






                  FUNC_9(VAR_5, VAR_9, VAR_10, &VAR_11, VAR_12);
                  FUNC_2(VAR_12);
                  ++*VAR_7, --*VAR_6;

                  continue;
               }

               else
               {
                  FUNC_2(VAR_12);
                  FUNC_1(VAR_4, "simpleover: read %s: %s\n", (*VAR_7)[0],
                      VAR_11.message);
               }
            }

            else
            {
               FUNC_1(VAR_4, "simpleover: out of memory: %lu bytes\n",
                  (unsigned long)FUNC_0(VAR_11));





               FUNC_7(&VAR_11);
            }
         }

         else
         {

            FUNC_1(VAR_4, "simpleover: %s: %s\n", (*VAR_7)[0], VAR_11.message);
         }

         return 0;
      }
   }




   VAR_5->file = FUNC_12();

   if (VAR_5->file != ((void*)0))
   {
      png_image VAR_13;

      FUNC_4(&VAR_13, 0, sizeof VAR_13);
      VAR_13.version = VAR_2;
      VAR_13.opaque = ((void*)0);
      VAR_13.width = VAR_5->width;
      VAR_13.height = VAR_5->height;
      VAR_13.format = VAR_0;
      VAR_13.flags = VAR_1;
      VAR_13.colormap_entries = 0;

      if (FUNC_8(&VAR_13, VAR_5->file, 1 ,
          VAR_5->buffer, 0 , ((void*)0) ))
      {

         FUNC_2(VAR_5->buffer);
         VAR_5->buffer = ((void*)0);
         return 1;
      }

      else
         FUNC_1(VAR_4, "simpleover: write sprite %s: %s\n", VAR_5->name,
            VAR_13.message);
   }

   else
      FUNC_1(VAR_4, "simpleover: sprite %s: could not allocate tmpfile: %s\n",
         VAR_5->name, FUNC_11(VAR_3));

   return 0;
}
