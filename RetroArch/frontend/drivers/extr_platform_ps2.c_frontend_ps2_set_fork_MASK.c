
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum frontend_fork { ____Placeholder_frontend_fork } frontend_fork ;






 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(enum frontend_fork VAR_1)
{
   switch (VAR_1)
   {
      case 131:
         FUNC_0("FRONTEND_FORK_CORE\n");
         VAR_0 = VAR_1;
         break;
      case 130:
         FUNC_0("FRONTEND_FORK_CORE_WITH_ARGS\n");
         VAR_0 = VAR_1;
         break;
      case 128:
         FUNC_0("FRONTEND_FORK_RESTART\n");


         VAR_0 = 131;
         break;
      case 129:
      default:
         return 0;
   }

   return 1;
}
