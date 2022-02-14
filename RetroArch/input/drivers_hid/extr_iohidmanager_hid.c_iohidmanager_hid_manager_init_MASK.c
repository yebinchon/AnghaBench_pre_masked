
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ iohidmanager_hid_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(iohidmanager_hid_t *VAR_3)
{
   if (!VAR_3)
      return -1;
   if (VAR_3->ptr)
      return 0;

   VAR_3->ptr = FUNC_1(VAR_0, VAR_2);

   if (!VAR_3->ptr)
      return -1;

   FUNC_3(VAR_3->ptr, ((void*)0));
   FUNC_2(VAR_3->ptr, FUNC_0(),
         VAR_1);
   return 0;
}
