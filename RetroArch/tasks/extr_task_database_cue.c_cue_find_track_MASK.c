
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef char intfstream_t ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ intfstream_info_t ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 int FUNC_2 (char*,char*,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,char const*,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,char*,int*,int*,int*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int*,int*,int *,char*,int *,int *,char*,int ) ;

int FUNC_14(const char *VAR_7, bool VAR_8,
      uint64_t *VAR_9, uint64_t *VAR_10, char *VAR_11, uint64_t VAR_12)
{
   int VAR_13;
   intfstream_info_t VAR_14;
   char *VAR_15 = (char*)FUNC_9(VAR_2);
   char *VAR_16 = (char*)FUNC_9(VAR_3 + 1);
   intfstream_t *VAR_17 = ((void*)0);
   int64_t VAR_18 = -1;
   int64_t VAR_19 = -1;
   int32_t VAR_20 = -1;
   int32_t VAR_21 = 0;
   uint64_t VAR_22 = 0;
   int64_t volatile VAR_23 = -1;
   bool VAR_24 = 0;
   char *VAR_25 = (char*)FUNC_9(VAR_3);
   VAR_25[0] = '\0';

   FUNC_1(VAR_25, VAR_7, VAR_3);

   VAR_14.type = VAR_1;
   VAR_17 = (intfstream_t*)FUNC_7(&VAR_14);

   if (!VAR_17)
      goto error;

   if (!FUNC_8(VAR_17, VAR_7,
            VAR_5, VAR_4))
   {
      FUNC_0("Could not open CUE file '%s': %s\n", VAR_7,
            FUNC_11(VAR_6));
      goto error;
   }

   FUNC_0("Parsing CUE file '%s'...\n", VAR_7);

   VAR_15[0] = '\0';

   VAR_13 = -VAR_0;

   while (FUNC_4(VAR_17, VAR_15, VAR_2) > 0)
   {
      if (FUNC_12(VAR_15, "FILE"))
      {

         if (VAR_23 != -1)
            VAR_18 = VAR_23;


         if (FUNC_13(&VAR_19, &VAR_18, &VAR_22, VAR_16, VAR_9,
                         VAR_10, VAR_11, VAR_12))
         {
            VAR_13 = 0;
            if (VAR_8)
               goto clean;
         }

         FUNC_4(VAR_17, VAR_15, VAR_2);
         FUNC_2(VAR_16, VAR_25, VAR_15, VAR_3);

         VAR_23 = FUNC_6(VAR_16);

         FUNC_4(VAR_17, VAR_15, VAR_2);

      }
      else if (FUNC_12(VAR_15, "TRACK"))
      {
         FUNC_4(VAR_17, VAR_15, VAR_2);
         FUNC_4(VAR_17, VAR_15, VAR_2);
         VAR_24 = !FUNC_12(VAR_15, "AUDIO");
         ++VAR_21;
      }
      else if (FUNC_12(VAR_15, "INDEX"))
      {
         int VAR_26, VAR_27, VAR_28;
         FUNC_4(VAR_17, VAR_15, VAR_2);
         FUNC_4(VAR_17, VAR_15, VAR_2);

         if (FUNC_10(VAR_15, "%02d:%02d:%02d", &VAR_26, &VAR_27, &VAR_28) < 3)
         {
            FUNC_0("Error parsing time stamp '%s'\n", VAR_15);
            goto error;
         }

         VAR_18 = (size_t) (((VAR_26 * 60 + VAR_27) * 75) + VAR_28) * 2352;


         if (VAR_20 != -1 && VAR_21 != VAR_20 &&
             FUNC_13(&VAR_19, &VAR_18, &VAR_22, VAR_16, VAR_9,
                         VAR_10, VAR_11, VAR_12))
         {
            VAR_13 = 0;
            if (VAR_8)
               goto clean;
         }

         if (!VAR_24)
            continue;

         if (VAR_19 == -1)
         {
            VAR_19 = VAR_18;
            VAR_20 = VAR_21;
         }
      }
   }

   if (VAR_23 != -1)
      VAR_18 = VAR_23;

   if (FUNC_13(&VAR_19, &VAR_18, &VAR_22, VAR_16, VAR_9,
                   VAR_10, VAR_11, VAR_12))
      VAR_13 = 0;

clean:
   FUNC_3(VAR_25);
   FUNC_3(VAR_15);
   FUNC_3(VAR_16);
   FUNC_5(VAR_17);
   FUNC_3(VAR_17);
   return VAR_13;

error:
   FUNC_3(VAR_25);
   FUNC_3(VAR_15);
   FUNC_3(VAR_16);
   if (VAR_17)
   {
      FUNC_5(VAR_17);
      FUNC_3(VAR_17);
   }
   return -VAR_6;
}
