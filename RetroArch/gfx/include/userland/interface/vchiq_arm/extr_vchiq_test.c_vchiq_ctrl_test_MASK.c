
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int service_params ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_7__ {char* userdata; void* version_min; void* version; int callback; int fourcc; } ;
typedef TYPE_1__ VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_INSTANCE_T ;
struct TYPE_8__ {int size; scalar_t__ data; } ;
typedef TYPE_2__ VCHIQ_ELEMENT_T ;
struct TYPE_9__ {int blocksize; int iters; scalar_t__ echo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_14(void)
{
   VCHIQ_INSTANCE_T VAR_13;
   VCHIQ_SERVICE_HANDLE_T VAR_14;
   VCHIQ_SERVICE_PARAMS_T VAR_15;
   uint32_t VAR_16, VAR_17;
   int VAR_18;

   VAR_7 = 0;
   if (VAR_8.blocksize < 4)
      VAR_8.blocksize = 4;

   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
   {
      int VAR_19;
      VAR_5[VAR_18] = FUNC_1(VAR_8.blocksize);
      if (!VAR_5[VAR_18])
      {
         FUNC_3("* out of memory\n");
         return VAR_2;
      }
      *(int *)VAR_5[VAR_18] = VAR_0;
      for (VAR_19 = 4; VAR_19 < VAR_8.blocksize; VAR_19+=4)
      {
         *(unsigned int *)(VAR_5[VAR_18] + VAR_19) = ((0x80 | VAR_18) << 24) + VAR_19;
      }
   }
   if (FUNC_6(&VAR_13) != VAR_3)
   {
      FUNC_3("* failed to open vchiq instance\n");
      return VAR_2;
   }

   FUNC_5(VAR_13);

   FUNC_2(&VAR_15, 0, sizeof(VAR_15));

   VAR_15.fourcc = FUNC_0(VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]);
   VAR_15.callback = VAR_6;
   VAR_15.userdata = "clnt userdata";
   VAR_15.version = VAR_4;
   VAR_15.version_min = VAR_4;

   if (FUNC_7(VAR_13, &VAR_15, &VAR_14) != VAR_3)
   {
      FUNC_3("* failed to open service - already in use?\n");
      return VAR_2;
   }

   FUNC_3("Ctrl test - service:%s, block size:%d, iters:%d\n", VAR_10, VAR_8.blocksize, VAR_8.iters);

   VAR_16 = FUNC_12();

   for (VAR_18 = 0; VAR_18 < VAR_8.iters; VAR_18++)
   {
      VCHIQ_ELEMENT_T VAR_20;
      VAR_20.data = VAR_5[VAR_18 % VAR_1];
      VAR_20.size = VAR_8.blocksize;

      if (FUNC_8(VAR_14, &VAR_20, 1) != VAR_3)
      {
         FUNC_3("* failed to send a message\n");
         goto error_exit;
      }
      if (VAR_9)
      {
         FUNC_3("* error - %s\n", VAR_9);
         goto error_exit;
      }
   }

   FUNC_13("Sent all messages");

   if (VAR_8.echo)
   {
      FUNC_13("vchiq_test: waiting for shutdown");

      FUNC_11(&VAR_11);
   }

   if (VAR_9)
   {
      FUNC_3("* error - %s\n", VAR_9);
      goto error_exit;
   }

   VAR_17 = FUNC_12();

   FUNC_9(VAR_14);

   FUNC_13("vchiq_test: shutting down");

   FUNC_10(VAR_13);

   FUNC_3("Elapsed time: %dus per iteration\n", (VAR_17 - VAR_16) / VAR_8.iters);

   return VAR_3;

error_exit:
   FUNC_9(VAR_14);
   FUNC_10(VAR_13);
   return VAR_2;
}
