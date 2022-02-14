
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int info ;
struct TYPE_7__ {int info; int registrations; } ;
typedef TYPE_1__ WFC_STREAM_T ;
struct TYPE_8__ {int size; } ;
typedef TYPE_2__ WFC_STREAM_INFO_T ;
typedef int WFCNativeStreamType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_7 (int ,int) ;

void FUNC_8(WFCNativeStreamType VAR_2) {
   uint64_t VAR_3 = FUNC_3();
   uint32_t VAR_4 = (uint32_t)VAR_3;
   uint32_t VAR_5 = (uint32_t)(VAR_3 >> 32);

   if (FUNC_4() == VAR_1)
   {
      WFC_STREAM_INFO_T VAR_6;
      uint32_t VAR_7;

      VAR_6.size = sizeof(VAR_6);
      VAR_7 = FUNC_5(VAR_2, &VAR_6);

      if (VAR_7 == VAR_1)
      {
         WFC_STREAM_T *VAR_8 = FUNC_7(VAR_2, 1);

         if (VAR_8)
         {
            VAR_8->registrations++;
            FUNC_1(&VAR_8->info, &VAR_6, VAR_6.size);
            FUNC_0(VAR_8);
         }

         FUNC_6(VAR_2, VAR_4, VAR_5);
      }
      else
      {
         FUNC_2("%s: get stream info failed: %u", VAR_0, VAR_7);
      }
   }
}
