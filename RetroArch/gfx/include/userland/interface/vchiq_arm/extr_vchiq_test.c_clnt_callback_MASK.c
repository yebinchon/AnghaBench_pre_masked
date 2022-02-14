
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int data ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHIQ_REASON_T ;
struct TYPE_5__ {size_t size; char* data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
struct TYPE_6__ {size_t iters; scalar_t__ echo; int blocksize; scalar_t__ verify; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char** VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 char** VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 TYPE_3__ VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*,int ,void*) ;
 int FUNC_4 (int ,char*,int ,void*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,unsigned int,unsigned int,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_13(VCHIQ_REASON_T VAR_21, VCHIQ_HEADER_T *VAR_22,
   VCHIQ_SERVICE_HANDLE_T VAR_23, void *VAR_24)
{
   int VAR_25;
   FUNC_11(&VAR_16);
   if (VAR_21 == VAR_6)
   {




      size_t VAR_26 = VAR_22->size;

      if (VAR_26 <= 1)
         FUNC_5(VAR_23, VAR_22);
      else

      if ((VAR_26 >= 4) && (FUNC_1(&VAR_25, VAR_22->data, sizeof(VAR_25)), VAR_25 == VAR_0))
      {

         if (VAR_17.verify && (FUNC_0(VAR_22->data, VAR_12[VAR_15 % VAR_1], VAR_17.blocksize) != 0))
            VAR_18 = "corrupt data";
         else
            VAR_15++;
         if (VAR_18 || (VAR_15 == VAR_17.iters))
            FUNC_7(&VAR_20);
         FUNC_5(VAR_23, VAR_22);
      }
      else if (VAR_26 != 0)
         VAR_18 = VAR_22->data;

      if ((VAR_26 != 0) || VAR_18)
         FUNC_7(&VAR_19);
   }
   else if (VAR_21 == VAR_5)
   {
      int VAR_27 = (int)VAR_24;
      FUNC_10("  BULK_TRANSMIT_DONE(%d)", VAR_27);
      if (VAR_13 < 0)
         FUNC_7(&VAR_19);
      else
      {
         FUNC_6(VAR_27 == VAR_13);
         VAR_13++;
         if (VAR_14 < VAR_17.iters)
         {
            FUNC_4(VAR_23, VAR_12[VAR_27 % VAR_1], VAR_17.blocksize, (void *)VAR_14);
            VAR_14++;
         }
      }
   }
   else if (VAR_21 == VAR_3)
   {
      int VAR_28 = (int)VAR_24;
      FUNC_10("  BULK_RECEIVE_DONE(%d): data '%s'", VAR_28, VAR_9[VAR_28 % VAR_1]);
      FUNC_6(VAR_28 == VAR_10);
      if (VAR_17.verify && (FUNC_0(VAR_12[VAR_28 % VAR_1], VAR_9[VAR_28 % VAR_1], VAR_17.blocksize) != 0))
      {
         FUNC_8("* Data corruption - %d: %x, %x, %x", VAR_28, (unsigned int)VAR_12[VAR_28 % VAR_1], (unsigned int)VAR_9[VAR_28 % VAR_1], VAR_17.blocksize);
         VAR_8;
      }
      VAR_10++;
      if (VAR_11 < VAR_17.iters)
      {
         if (VAR_17.verify)
            FUNC_2(VAR_9[VAR_28 % VAR_1], 0xff, VAR_17.blocksize);
         FUNC_3(VAR_23, VAR_9[VAR_28 % VAR_1], VAR_17.blocksize, (void *)VAR_11);
         VAR_11++;
      }
   }
   else if (VAR_21 == VAR_4)
   {
      int VAR_29 = (int)VAR_24;
      FUNC_9("  BULK_TRANSMIT_ABORTED(%d)", VAR_29);
   }
   else if (VAR_21 == VAR_2)
   {
      int VAR_30 = (int)VAR_24;
      FUNC_9("  BULK_RECEIVE_ABORTED(%d)", VAR_30);
   }
   if ((VAR_13 == VAR_17.iters) &&
      ((VAR_17.echo == 0) || (VAR_10 == VAR_17.iters)))
      FUNC_7(&VAR_20);
   FUNC_12(&VAR_16);
   return VAR_7;
}
