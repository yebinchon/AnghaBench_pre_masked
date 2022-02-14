
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_handle_t ;
typedef int database_state_handle_t ;
typedef int database_info_handle_t ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *,int *,char const*,int *) ;
 int FUNC_5 (int *,int *,char const*) ;
 int FUNC_6 (int *,int *,int *,char const*) ;
 int FUNC_7 (int *,int *,int *,char const*) ;
 int FUNC_8 (int *,int *,int *,char const*) ;

__attribute__((used)) static int FUNC_9(
      db_handle_t *VAR_0,
      database_state_handle_t *VAR_1,
      database_info_handle_t *VAR_2)
{
   const char *VAR_3 = FUNC_0(VAR_2);

   if (!VAR_3)
      return 0;

   if (FUNC_1(VAR_2) == 132)
      if (FUNC_3(VAR_3))
         FUNC_2(VAR_2, 131);

   switch (FUNC_1(VAR_2))
   {
      case 132:
         return FUNC_5(VAR_1, VAR_2, VAR_3);
      case 131:
         return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
      case 130:
         return FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3);
      case 128:
         return FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3);
      case 133:
         return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
      case 129:
      default:
         break;
   }

   return 0;
}
