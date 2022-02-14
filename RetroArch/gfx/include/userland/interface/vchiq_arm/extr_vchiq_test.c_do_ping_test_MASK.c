
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct test_params {int blocksize; int iters; scalar_t__ echo; scalar_t__ verify; void* magic; int client_message_quota; } ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_3__ {char* data; int size; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 struct test_params VAR_8 ;
 int VAR_9 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (int ,char*,int,int ,int ) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(VCHIQ_SERVICE_HANDLE_T VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
   uint32_t VAR_15, VAR_16;
   char *VAR_17 = FUNC_1(VAR_11 + sizeof(struct test_params));
   struct test_params *VAR_18 = (struct test_params *)VAR_17;
   VCHIQ_ELEMENT_T VAR_19;
   int VAR_20;

   VAR_19.data = VAR_17;


   *VAR_18 = VAR_8;
   VAR_18->magic = VAR_1;
   VAR_18->blocksize = 0;
   VAR_19.size = sizeof(*VAR_18);
   FUNC_5(VAR_10, &VAR_19, 1);
   FUNC_7(&VAR_9);
   FUNC_6(VAR_10, VAR_6, VAR_18->client_message_quota);


   VAR_19.size = (VAR_11 < 4) ? 4 : VAR_11;

   VAR_7 = -1;

   VAR_15 = FUNC_8();
   for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
   {
      int VAR_21;
      for (VAR_21 = 0; VAR_21 < FUNC_9(VAR_12, VAR_13); VAR_21++)
      {
         if (VAR_21 < VAR_12)
         {
            VAR_18->magic = VAR_0;
            FUNC_5(VAR_10, &VAR_19, 1);
         }
         if (VAR_21 < VAR_13)
         {
            VAR_18->magic = VAR_2;
            FUNC_5(VAR_10, &VAR_19, 1);
         }
      }
      VAR_18->magic = VAR_3;
      FUNC_5(VAR_10, &VAR_19, 1);
      FUNC_7(&VAR_9);
   }
   VAR_16 = FUNC_8();

   FUNC_2("ping (size %d, %d async, %d oneway) -> %fus\n", VAR_11, VAR_12, VAR_13, ((float)(VAR_16 - VAR_15))/VAR_14);

   FUNC_10(20);

   if ((VAR_12 == 0) && (VAR_13 == 0))
   {
      *VAR_18 = VAR_8;
      VAR_18->magic = VAR_1;
      VAR_18->blocksize = VAR_11 ? VAR_11 : 8;
      VAR_18->iters = VAR_14;
      VAR_18->verify = 0;
      VAR_18->echo = 0;

      VAR_19.size = sizeof(*VAR_18);
      FUNC_5(VAR_10, &VAR_19, 1);
      FUNC_7(&VAR_9);

      FUNC_10(30);

      VAR_15 = FUNC_8();
      for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
      {
         FUNC_4(VAR_10, VAR_17, VAR_18->blocksize, 0);
         FUNC_7(&VAR_9);
      }
      VAR_16 = FUNC_8();

      FUNC_2("bulk (size %d, async) -> %fus\n", VAR_11, ((float)(VAR_16 - VAR_15))/VAR_14);

      FUNC_10(40);
   }

   if (VAR_13 == 0)
   {
      *VAR_18 = VAR_8;
      VAR_18->magic = VAR_1;
      VAR_18->blocksize = VAR_11 ? VAR_11 : 8;
      VAR_18->iters = VAR_14 * (VAR_12 + 1);
      VAR_18->verify = 0;
      VAR_18->echo = 0;

      VAR_19.size = sizeof(*VAR_18);
      FUNC_5(VAR_10, &VAR_19, 1);
      FUNC_7(&VAR_9);

      FUNC_10(50);

      VAR_15 = FUNC_8();
      for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
      {
         int VAR_22;
         for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++)
            FUNC_3(VAR_10, VAR_17, VAR_18->blocksize, 0, VAR_5);
         FUNC_3(VAR_10, VAR_17, VAR_18->blocksize, 0, VAR_4);
      }
      VAR_16 = FUNC_8();

      FUNC_2("bulk (size %d, %d async) -> %fus\n", VAR_11, VAR_12, ((float)(VAR_16 - VAR_15))/VAR_14);

      FUNC_10(60);
   }

   FUNC_0(VAR_17);

   VAR_7 = 0;
}
