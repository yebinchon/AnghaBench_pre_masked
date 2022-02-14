
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef char intfstream_t ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ intfstream_info_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 int FUNC_3 (char*,char*,char*,scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,char const*,int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,char*,size_t) ;

int FUNC_13(const char *VAR_7, bool VAR_8,
      char *VAR_9, uint64_t VAR_10)
{
   int VAR_11;
   intfstream_info_t VAR_12;
   char *VAR_13 = (char*)FUNC_10(VAR_2);
   intfstream_t *VAR_14 = ((void*)0);
   uint64_t VAR_15 = 0;
   int VAR_16 = -1;
   int VAR_17 = -1;
   int64_t VAR_18 = -1;

   VAR_12.type = VAR_1;

   VAR_14 = (intfstream_t*)FUNC_8(&VAR_12);

   if (!VAR_14)
      goto error;

   if (!FUNC_9(VAR_14, VAR_7,
            VAR_5, VAR_4))
   {
      FUNC_0("Could not open GDI file '%s': %s\n", VAR_7,
            FUNC_11(VAR_6));
      goto error;
   }

   FUNC_0("Parsing GDI file '%s'...\n", VAR_7);

   VAR_13[0] = '\0';

   VAR_11 = -VAR_0;


   FUNC_5(VAR_14, VAR_13, VAR_2);


   while (FUNC_5(VAR_14, VAR_13, VAR_2) > 0)
   {

      if (FUNC_5(VAR_14, VAR_13, VAR_2) <= 0)
      {
         VAR_6 = VAR_0;
         goto error;
      }


      if (FUNC_5(VAR_14, VAR_13, VAR_2) <= 0)
      {
         VAR_6 = VAR_0;
         goto error;
      }
      VAR_17 = FUNC_1(VAR_13);


      if (FUNC_5(VAR_14, VAR_13, VAR_2) <= 0)
      {
         VAR_6 = VAR_0;
         goto error;
      }
      VAR_16 = FUNC_1(VAR_13);


      if (FUNC_5(VAR_14, VAR_13, VAR_2) <= 0)
      {
         VAR_6 = VAR_0;
         goto error;
      }


      if (!(VAR_17 == 0 && VAR_16 == 2352))
      {
         char *VAR_19 = (char*)FUNC_10(VAR_3 + 1);
         char *VAR_20 = (char*)FUNC_10(VAR_3);

         VAR_20[0] = '\0';

         FUNC_2(VAR_20, VAR_7, VAR_3);

         FUNC_3(VAR_19,
               VAR_20, VAR_13, VAR_3);
         VAR_18 = FUNC_7(VAR_19);
         if (VAR_18 < 0)
         {
            FUNC_4(VAR_20);
            FUNC_4(VAR_19);
            goto error;
         }

         if ((uint64_t)VAR_18 > VAR_15)
         {
            FUNC_12(VAR_9, VAR_19, (size_t)VAR_10);

            VAR_11 = 0;
            VAR_15 = VAR_18;

            if (VAR_8)
            {
               FUNC_4(VAR_20);
               FUNC_4(VAR_19);
               goto clean;
            }
         }
         FUNC_4(VAR_20);
         FUNC_4(VAR_19);
      }


      if (FUNC_5(VAR_14, VAR_13, VAR_2) <= 0)
      {
         VAR_6 = VAR_0;
         goto error;
      }
   }

clean:
   FUNC_4(VAR_13);
   FUNC_6(VAR_14);
   FUNC_4(VAR_14);
   return VAR_11;

error:
   FUNC_4(VAR_13);
   if (VAR_14)
   {
      FUNC_6(VAR_14);
      FUNC_4(VAR_14);
   }
   return -VAR_6;
}
