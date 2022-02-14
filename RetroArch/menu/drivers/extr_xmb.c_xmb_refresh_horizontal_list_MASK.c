
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * horizontal_list; } ;
typedef TYPE_1__ xmb_handle_t ;
typedef int file_list_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(xmb_handle_t *VAR_1)
{
   FUNC_3(VAR_1);
   if (VAR_1->horizontal_list)
   {
      FUNC_5(VAR_1->horizontal_list, 0);
      FUNC_1(VAR_1->horizontal_list);
   }
   VAR_1->horizontal_list = ((void*)0);

   FUNC_2(VAR_0, ((void*)0));

   VAR_1->horizontal_list = (file_list_t*)
      FUNC_0(1, sizeof(file_list_t));

   if (VAR_1->horizontal_list)
      FUNC_6(VAR_1);

   FUNC_4(VAR_1);
}
