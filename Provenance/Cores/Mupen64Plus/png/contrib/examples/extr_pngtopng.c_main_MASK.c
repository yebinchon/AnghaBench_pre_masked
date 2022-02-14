
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* message; int format; int version; } ;
typedef TYPE_1__ png_image ;
typedef int * png_bytep ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char const*,int ,int *,int ,int *) ;
 int VAR_2 ;

int FUNC_9(int VAR_3, const char **VAR_4)
{
   int VAR_5 = 1;

   if (VAR_3 == 3)
   {
      png_image VAR_6;


      FUNC_4(&VAR_6, 0, sizeof VAR_6);
      VAR_6.version = VAR_1;

      if (FUNC_5(&VAR_6, VAR_4[1]))
      {
         png_bytep VAR_7;




         VAR_6.format = VAR_0;

         VAR_7 = FUNC_3(FUNC_0(VAR_6));

         if (VAR_7 != ((void*)0))
         {
            if (FUNC_6(&VAR_6, ((void*)0) , VAR_7,
               0 , ((void*)0) ))
            {
               if (FUNC_8(&VAR_6, VAR_4[2],
                  0 , VAR_7, 0 ,
                  ((void*)0) ))
                  VAR_5 = 0;

               else
                  FUNC_1(VAR_2, "pngtopng: write %s: %s\n", VAR_4[2],
                      VAR_6.message);

               FUNC_2(VAR_7);
            }

            else
            {
               FUNC_1(VAR_2, "pngtopng: read %s: %s\n", VAR_4[1],
                   VAR_6.message);





               FUNC_7(&VAR_6);
            }
         }

         else
            FUNC_1(VAR_2, "pngtopng: out of memory: %lu bytes\n",
               (unsigned long)FUNC_0(VAR_6));
      }

      else

         FUNC_1(VAR_2, "pngtopng: %s: %s\n", VAR_4[1], VAR_6.message);
   }

   else

      FUNC_1(VAR_2, "pngtopng: usage: pngtopng input-file output-file\n");

   return VAR_5;
}
