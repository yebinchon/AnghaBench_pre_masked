
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ num_of_sources_or_masks; scalar_t__ registrations; int to_be_deleted; int handle; scalar_t__ used_for_off_screen; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(WFC_STREAM_T *VAR_1)
{
   WFCNativeStreamType VAR_2;
   uint64_t VAR_3 = FUNC_4();
   uint32_t VAR_4 = (uint32_t)VAR_3;
   uint32_t VAR_5 = (uint32_t)(VAR_3 >> 32);

   if (VAR_1 == ((void*)0))
   {
      FUNC_1("%s: stream_ptr is NULL", VAR_0);
      return;
   }

   if(VAR_1->num_of_sources_or_masks > 0
      || VAR_1->used_for_off_screen
      || VAR_1->registrations > 0)
   {
      FUNC_3("%s: stream: %X not ready: reg:%u srcs:%u o/s:%d", VAR_0,
            VAR_1->handle, VAR_1->registrations,
            VAR_1->num_of_sources_or_masks, VAR_1->used_for_off_screen);
      FUNC_0(VAR_1);
      return;
   }

   VAR_2 = VAR_1->handle;

   FUNC_2("%s: stream: %X to be destroyed", VAR_0, VAR_2);


   VAR_1->to_be_deleted = 1;


   FUNC_5(VAR_2, VAR_4, VAR_5);

   FUNC_0(VAR_1);

   FUNC_6(VAR_2);
}
