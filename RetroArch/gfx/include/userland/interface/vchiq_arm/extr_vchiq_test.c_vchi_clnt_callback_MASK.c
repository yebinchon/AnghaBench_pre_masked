
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pong_buf ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_CALLBACK_REASON_T ;
struct TYPE_2__ {int iters; int blocksize; scalar_t__ verify; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int,void*) ;
 int FUNC_3 (int ,scalar_t__,int ,int,void*) ;
 scalar_t__ FUNC_4 (int ,char*,int,int*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,unsigned int,unsigned int,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(void *VAR_22,
   VCHI_CALLBACK_REASON_T VAR_23,
   void *VAR_24)
{
   VCHI_SERVICE_HANDLE_T VAR_25 = *(VCHI_SERVICE_HANDLE_T *)VAR_22;
   FUNC_10(&VAR_16);
   if (VAR_23 == VAR_5)
   {
      if (!VAR_21)
      {
         static char VAR_26[100];
         uint32_t VAR_27;
         while (FUNC_4(VAR_25, VAR_26, sizeof(VAR_26), &VAR_27, VAR_8) == 0)
         {
            if (VAR_27 > 1)
               VAR_18 = VAR_26;
            if (VAR_27 != 0)
            {

               FUNC_6(&VAR_19);
               break;
            }
         }
      }
   }
   else if (VAR_23 == VAR_3)
   {
      int VAR_28 = (int)VAR_24;
      FUNC_9("  BULK_TRANSMIT_DONE(%d)", VAR_28);
      if (VAR_14 < 0)
         FUNC_6(&VAR_19);
      else
      {
         FUNC_5(VAR_28 == VAR_14);
         VAR_14++;
         if (VAR_15 < VAR_17.iters)
         {
            FUNC_3(VAR_25, VAR_13[VAR_28 % VAR_0],
               VAR_17.blocksize,
               VAR_7 | VAR_6,
               (void *)VAR_15);
            VAR_15++;
         }
      }
   }
   else if (VAR_23 == VAR_1)
   {
      int VAR_29 = (int)VAR_24;
      FUNC_9("  BULK_RECEIVE_DONE(%d): data '%s'", VAR_29, VAR_10[VAR_29 % VAR_0]);
      FUNC_5(VAR_29 == VAR_11);
      if (VAR_17.verify && (FUNC_0(VAR_13[VAR_29 % VAR_0], VAR_10[VAR_29 % VAR_0], VAR_17.blocksize) != 0))
      {
         FUNC_7("* Data corruption - %x, %x, %x", (unsigned int)VAR_13[VAR_29 % VAR_0], (unsigned int)VAR_10[VAR_29 % VAR_0], VAR_17.blocksize);
         VAR_9;
      }
      VAR_11++;
      if (VAR_12 < VAR_17.iters)
      {
         if (VAR_17.verify)
            FUNC_1(VAR_10[VAR_29 % VAR_0], 0xff, VAR_17.blocksize);
         FUNC_2(VAR_25, VAR_10[VAR_29 % VAR_0], VAR_17.blocksize,
            VAR_7 | VAR_6,
            (void *)VAR_12);
         VAR_12++;
      }
   }
   else if (VAR_23 == VAR_4)
   {
      int VAR_30 = (int)VAR_24;
      FUNC_8("  BULK_TRANSMIT_ABORTED(%d)", VAR_30);
   }
   else if (VAR_23 == VAR_2)
   {
      int VAR_31 = (int)VAR_24;
      FUNC_8("  BULK_RECEIVE_ABORTED(%d)", VAR_31);
   }
   if ((VAR_14 == VAR_17.iters) && (VAR_11 == VAR_17.iters))
      FUNC_6(&VAR_20);
   FUNC_11(&VAR_16);
}
