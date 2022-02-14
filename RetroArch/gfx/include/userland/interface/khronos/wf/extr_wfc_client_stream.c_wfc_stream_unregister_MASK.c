
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ registrations; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ) ;

void FUNC_8(WFCNativeStreamType VAR_1) {
   uint64_t VAR_2 = FUNC_2();
   uint32_t VAR_3 = (uint32_t)VAR_2;
   uint32_t VAR_4 = (uint32_t)(VAR_2 >> 32);
   WFC_STREAM_T *VAR_5 = FUNC_7(VAR_1);

   if (FUNC_3(VAR_5 != ((void*)0)))
   {
      FUNC_5(VAR_1, VAR_3, VAR_4);

      if (VAR_5->registrations > 0)
      {
         VAR_5->registrations--;
         FUNC_1("%s: stream %X", VAR_0, VAR_1);
      }
      else
      {
         FUNC_0("%s: stream %X already fully unregistered", VAR_0, VAR_1);
      }

      FUNC_6(VAR_5);
   }

   FUNC_4();
}
