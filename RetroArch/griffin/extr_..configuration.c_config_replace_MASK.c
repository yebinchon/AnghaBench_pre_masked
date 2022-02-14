
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;

bool FUNC_8(bool VAR_3, char *VAR_4)
{
   content_ctx_info_t VAR_5 = {0};
   const char *VAR_6 = FUNC_2(VAR_1);



   if (FUNC_6(VAR_4, VAR_6))
      return 0;

   if (VAR_3 && !FUNC_3(VAR_1))
      FUNC_0(VAR_6);

   FUNC_4(VAR_1, VAR_4);

   FUNC_5(VAR_0, ((void*)0));


   FUNC_1(VAR_2);

   return FUNC_7(&VAR_5);
}
