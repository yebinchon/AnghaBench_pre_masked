
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* serial; int crc; int archive_crc; } ;
typedef TYPE_1__ database_state_handle_t ;
typedef int database_info_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,int ,int ,int *) ;
 int FUNC_4 (char const*,int ,int ,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (char const*,char*) ;

__attribute__((used)) static int FUNC_13(
      database_state_handle_t *VAR_4,
      database_info_handle_t *VAR_5, const char *VAR_6)
{
   switch (FUNC_1(FUNC_5(VAR_6)))
   {
      case 133:






         break;

      case 132:
         FUNC_10(VAR_5, VAR_6);
         VAR_4->serial[0] = '\0';
         if (FUNC_9(VAR_6, VAR_4->serial))
            FUNC_0(VAR_5, VAR_2);
         else
         {
            FUNC_0(VAR_5, VAR_0);
            return FUNC_8(VAR_6, &VAR_4->crc);
         }
         break;
      case 131:
         FUNC_2(VAR_5, VAR_6);
         VAR_4->serial[0] = '\0';


         if (0 && FUNC_12(VAR_6, VAR_4->serial))
            FUNC_0(VAR_5, VAR_2);
         else
         {
            FUNC_0(VAR_5, VAR_0);
            return FUNC_11(VAR_6, &VAR_4->crc);
         }
         break;

      case 128:
      case 130:
         VAR_4->serial[0] = '\0';
         FUNC_4(VAR_6, 0, VAR_3, VAR_4->serial);
         FUNC_0(VAR_5, VAR_2);
         break;
      case 134:
         VAR_4->serial[0] = '\0';
         if (FUNC_7(VAR_6, VAR_4->serial))
            FUNC_0(VAR_5, VAR_2);
         else
         {
            FUNC_0(VAR_5, VAR_0);
            return FUNC_6(VAR_6, &VAR_4->crc);
         }
         break;
      case 129:
         FUNC_0(VAR_5, VAR_1);
         break;
      default:
         FUNC_0(VAR_5, VAR_0);
         return FUNC_3(VAR_6, 0, VAR_3, &VAR_4->crc);
   }

   return 1;
}
