
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptr; } ;
typedef TYPE_1__ iohidmanager_hid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(iohidmanager_hid_t *VAR_2)
{
   if (!VAR_2 || !VAR_2->ptr)
      return -1;

   FUNC_3(VAR_2->ptr,
         FUNC_1(), VAR_0);
   FUNC_2(VAR_2->ptr, VAR_1);
   FUNC_0(VAR_2->ptr);
   VAR_2->ptr = ((void*)0);

   return 0;
}
