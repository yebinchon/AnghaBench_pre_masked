
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ref_count; scalar_t__ stems_count; int mutex; int objects; } ;
typedef TYPE_1__ VG_CLIENT_SHARED_STATE_T ;
typedef scalar_t__ KHR_STATUS_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

VG_CLIENT_SHARED_STATE_T *FUNC_5(void)
{
   VG_CLIENT_SHARED_STATE_T *VAR_1;
   KHR_STATUS_T VAR_2;

   VAR_1 = (VG_CLIENT_SHARED_STATE_T *)FUNC_1(sizeof(VG_CLIENT_SHARED_STATE_T), "VG_CLIENT_SHARED_STATE_T");
   if (!VAR_1) {
      return ((void*)0);
   }

   VAR_2 = FUNC_3(&VAR_1->mutex);
   if (VAR_2 != VAR_0) {
      FUNC_0(VAR_1);
      return ((void*)0);
   }

   if (!FUNC_2(&VAR_1->objects, 128)) {
      FUNC_4(&VAR_1->mutex);
      FUNC_0(VAR_1);
      return ((void*)0);
   }

   VAR_1->ref_count = 1;
   VAR_1->stems_count = 0;

   return VAR_1;
}
