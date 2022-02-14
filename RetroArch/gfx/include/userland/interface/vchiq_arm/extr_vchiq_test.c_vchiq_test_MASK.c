
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VCOS_THREAD_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_2__ {int align_size; int iters; scalar_t__ verify; void* server_message_quota; void* client_message_quota; void* blocksize; void* server_align; void* client_align; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int VAR_15 ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,char*,int ,void*,void*,int,int,int,int ) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_21(int VAR_17, char **VAR_18)
{
   VCHIQ_STATUS_T VAR_19;
   int VAR_20 = 0;
   int VAR_21 = 0;
   int VAR_22 = 0;
   int VAR_23 = 0;
   int VAR_24 = 0;
   int VAR_25 = 0;
   int VAR_26;

   VAR_26 = 1;
   while ((VAR_26 < VAR_17) && (VAR_18[VAR_26][0] == '-'))
   {
      const char *VAR_27 = VAR_18[VAR_26++];
      if (FUNC_7(VAR_27, "-s") == 0)
      {
         VAR_12 = VAR_18[VAR_26++];
         if (!VAR_12 || (FUNC_8(VAR_12) != 4))
         {
            FUNC_9();
         }
      }
      else if (FUNC_6(VAR_27, "-a") == 0)
      {
         VAR_10.align_size = (FUNC_7(VAR_27, "-A") == 0) ? 4096 : 32;
         VAR_10.client_align = FUNC_0(VAR_18[VAR_26++]);
         VAR_10.server_align = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-b") == 0)
      {
         VAR_20 = 1;
         VAR_10.blocksize = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-c") == 0)
      {
         VAR_21 = 1;
         VAR_10.blocksize = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-e") == 0)
      {
         VAR_16 = 0;
      }
      else if (FUNC_7(VAR_27, "-f") == 0)
      {
         VAR_22 = 1;
      }
      else if (FUNC_7(VAR_27, "-h") == 0)
      {
         FUNC_9();
      }
      else if (FUNC_7(VAR_27, "-i") == 0)
      {
         VAR_24 = 1;
      }
      else if (FUNC_7(VAR_27, "-m") == 0)
      {
         VAR_10.client_message_quota = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-M") == 0)
      {
         VAR_10.server_message_quota = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-p") == 0)
      {
         VAR_23 = 1;
         VAR_10.iters = 1000;
      }
      else if (FUNC_7(VAR_27, "-q") == 0)
      {

         VAR_10.verify = 0;
      }

      else if (FUNC_7(VAR_27, "-r") == 0)
      {
         int VAR_28, VAR_29;
         if (VAR_26+1 < VAR_17)
         {
            VAR_28 = FUNC_0(VAR_18[VAR_26++]);
            VAR_29 = FUNC_0(VAR_18[VAR_26++]);
            FUNC_5(VAR_28, VAR_29);
            FUNC_2(0);
         }
         else
         {
            FUNC_4("not enough arguments (-r reserve delay)\n");
            FUNC_2(-1);
         }
      }
      else if (FUNC_7(VAR_27, "-t") == 0)
      {
         FUNC_1();
         FUNC_2(0);
      }
      else if (FUNC_7(VAR_27, "-v") == 0)
      {
         VAR_25 = 1;
      }
      else if (FUNC_7(VAR_27, "-S") == 0)
      {
         VAR_8 = FUNC_0(VAR_18[VAR_26++]);
      }
      else if (FUNC_7(VAR_27, "-E") == 0)
      {
         VAR_7 = FUNC_0(VAR_18[VAR_26++]);
      }
      else
      {
         FUNC_4("* unknown option '%s'\n", VAR_27);
         FUNC_9();
      }
   }

   if ((VAR_21 + VAR_20 + VAR_22 + VAR_23 + VAR_24) != 1)
      FUNC_9();

   if (VAR_26 < VAR_17)
   {
      VAR_10.iters = FUNC_0(VAR_18[VAR_26++]);
      if (VAR_26 != VAR_17)
      {
         FUNC_9();
      }
   }

   FUNC_18(VAR_3, VAR_25 ? VAR_5 : VAR_4);
   FUNC_17("vchiq_test", VAR_3);
   FUNC_16(&VAR_11, "g_server_reply");
   FUNC_16(&VAR_13, "g_shutdown");
   FUNC_19(&VAR_9, "g_mutex");

   VAR_19 = VAR_0;

   if (VAR_20)
      VAR_19 = FUNC_10();
   else if (VAR_21)
      VAR_19 = FUNC_11();
   else if (VAR_22)
      VAR_19 = FUNC_12();
   else if (VAR_23)
      VAR_19 = FUNC_13();
   else if (VAR_24)
      VAR_19 = FUNC_14();

   return (VAR_19 == VAR_1) ? 0 : -1;
}
