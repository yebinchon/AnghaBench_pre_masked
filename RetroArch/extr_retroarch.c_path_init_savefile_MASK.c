
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_4 ;

void FUNC_4(void)
{
   bool VAR_5 = FUNC_3(VAR_3, ((void*)0))
      && !FUNC_3(VAR_2, ((void*)0));

   VAR_4 = VAR_5;

   if (!FUNC_3(VAR_3, ((void*)0)))
   {
      FUNC_0("%s\n",
            FUNC_2(VAR_1));
      return;
   }

   FUNC_1(VAR_0, ((void*)0));
}
