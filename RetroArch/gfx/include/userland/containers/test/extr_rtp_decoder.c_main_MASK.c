
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {int status; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int FUNC_2 (int *,size_t) ;
 scalar_t__ VAR_7 ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_16 (scalar_t__,int ,int *) ;
 size_t FUNC_17 (TYPE_1__*,int *,scalar_t__) ;
 size_t FUNC_18 (TYPE_1__*,int *,size_t) ;
 scalar_t__ VAR_11 ;

int FUNC_19(int VAR_12, char **VAR_13)
{
   int VAR_14 = 0;
   uint8_t *VAR_15 = ((void*)0);
   VC_CONTAINER_IO_T *VAR_16 = ((void*)0);
   VC_CONTAINER_IO_T *VAR_17 = ((void*)0);
   VC_CONTAINER_STATUS_T VAR_18;
   size_t VAR_19;
   bool VAR_20 = 1;
   uint32_t VAR_21;
   uint8_t *VAR_22;

   FUNC_11(VAR_12, VAR_13);

   if (VAR_7 || !VAR_10)
   {
      FUNC_12(VAR_13[0]);
      VAR_14 = 1; goto tidyup;
   }

   VAR_15 = (uint8_t *)FUNC_6(VAR_2);
   if (!VAR_15)
   {
      FUNC_0(((void*)0), "Allocating %d bytes for the buffer failed", VAR_2);
      VAR_14 = 2; goto tidyup;
   }

   VAR_16 = FUNC_16(VAR_10, VAR_5, &VAR_18);
   if (!VAR_16)
   {
      FUNC_0(((void*)0), "Opening <%s> for read failed: %d", VAR_10, VAR_18);
      VAR_14 = 3; goto tidyup;
   }

   FUNC_5(VAR_16);

   if (VAR_8)
   {
      VAR_17 = FUNC_16(VAR_8, VAR_6, &VAR_18);
      if (!VAR_17)
      {
         FUNC_0(((void*)0), "Opening <%s> for write failed: %d", VAR_8, VAR_18);
         VAR_14 = 4; goto tidyup;
      }
      if (!VAR_9)
      {
         FUNC_13(VAR_15, 0x50415753);
         FUNC_18(VAR_17, VAR_15, sizeof(uint32_t));
      }
   }


   FUNC_15(VAR_16, VAR_4, 20);
   FUNC_10(1);

   VAR_22 = VAR_15;
   VAR_21 = VAR_2 - sizeof(uint32_t);
   while (VAR_20)
   {

      VAR_19 = FUNC_17(VAR_16, VAR_22 + sizeof(uint32_t), VAR_21);
      if (VAR_19)
      {
         bool VAR_23;

         FUNC_13(VAR_22, VAR_19);
         VAR_22 += sizeof(uint32_t);
         VAR_23 = FUNC_7(VAR_22, VAR_19);
         VAR_22 += VAR_19;
         VAR_21 -= VAR_19 + sizeof(uint32_t);

         if (VAR_23 || (VAR_21 < VAR_3))
         {
            uint8_t *VAR_24;

            if (VAR_17 && !VAR_9)
            {
               uint32_t VAR_25 = VAR_22 - VAR_15;
               if (FUNC_18(VAR_17, VAR_15, VAR_25) != VAR_25)
               {
                  FUNC_0(((void*)0), "Error saving packets to file");
                  break;
               }
               if (VAR_11 >= VAR_1)
                  FUNC_1(((void*)0), "Written %u bytes to file", VAR_25);
            }

            for (VAR_24 = VAR_15; VAR_24 < VAR_22;)
            {
               VAR_19 = FUNC_3(VAR_24);
               VAR_24 += sizeof(uint32_t);

               if (VAR_17 && VAR_9)
               {
                  if (FUNC_18(VAR_17, VAR_15, VAR_19) != VAR_19)
                  {
                     FUNC_0(((void*)0), "Error saving packets to file");
                     break;
                  }
                  if (VAR_11 >= VAR_1)
                     FUNC_1(((void*)0), "Written %u bytes to file", VAR_19);
               }

               if (!FUNC_2(VAR_24, VAR_19))
               {
                  FUNC_0(((void*)0), "Failed to decode packet");
                  break;
               }
               VAR_24 += VAR_19;
            }


            VAR_22 = VAR_15;
            VAR_21 = VAR_2 - sizeof(uint32_t);
         }
      }

      if (FUNC_8())
      {
         if (FUNC_9() == VAR_0)
            VAR_20 = 0;
      }

      switch (VAR_16->status)
      {
      case 128:
      case 129:
         break;
      default:
         VAR_20 = 0;
      }
   }

   FUNC_10(0);

tidyup:
   if (VAR_17)
      FUNC_14(VAR_17);
   if (VAR_16)
      FUNC_14(VAR_16);
   if (VAR_15)
      FUNC_4(VAR_15);

   return VAR_14;
}
