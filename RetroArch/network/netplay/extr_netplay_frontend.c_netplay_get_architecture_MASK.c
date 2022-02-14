
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ident; } ;
typedef TYPE_1__ frontend_ctx_driver_t ;
typedef enum frontend_architecture { ____Placeholder_frontend_architecture } frontend_architecture ;
typedef int architecture ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(char *VAR_2, size_t VAR_3)
{
   const frontend_ctx_driver_t
      *VAR_4 = FUNC_1();
   enum frontend_architecture VAR_5 = FUNC_0();
   char VAR_6[VAR_1];

   switch (VAR_5)
   {
      case 129:
         FUNC_4(VAR_6, "x86", sizeof(VAR_6));
         break;
      case 128:
         FUNC_4(VAR_6, "x64", sizeof(VAR_6));
         break;
      case 131:
         FUNC_4(VAR_6, "PPC", sizeof(VAR_6));
         break;
      case 136:
         FUNC_4(VAR_6, "ARM", sizeof(VAR_6));
         break;
      case 135:
         FUNC_4(VAR_6, "ARMv7", sizeof(VAR_6));
         break;
      case 134:
         FUNC_4(VAR_6, "ARMv8", sizeof(VAR_6));
         break;
      case 133:
         FUNC_4(VAR_6, "MIPS", sizeof(VAR_6));
         break;
      case 130:
         FUNC_4(VAR_6, "Tilera", sizeof(VAR_6));
         break;
      case 132:
      default:
         FUNC_4(VAR_6,
               FUNC_2(VAR_0),
               sizeof(VAR_6));
         break;
   }
   FUNC_3(VAR_2, VAR_3, "%s %s", VAR_4->ident, VAR_6);
}
