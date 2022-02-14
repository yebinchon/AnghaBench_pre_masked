
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; } ;
typedef TYPE_1__ xv_t ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void *VAR_2, bool VAR_3)
{
   xv_t *VAR_4 = (xv_t*)VAR_2;
   Atom VAR_5 = FUNC_1(VAR_1, "XV_SYNC_TO_VBLANK", 1);

   if (VAR_5 != VAR_0 && VAR_4->port)
      FUNC_2(VAR_1, VAR_4->port, VAR_5, !VAR_3);
   else
      FUNC_0("Failed to set SYNC_TO_VBLANK attribute.\n");
}
