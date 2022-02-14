
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int snd_seq_t ;
typedef int snd_seq_port_info_t ;
typedef int snd_seq_client_info_t ;
struct TYPE_3__ {int client; int port; } ;
typedef TYPE_1__ snd_seq_addr_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int **) ;
 unsigned int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_13(snd_seq_t *VAR_1, const char *VAR_2, unsigned VAR_3,
      snd_seq_addr_t *VAR_4)
{
   snd_seq_client_info_t *VAR_5;
   snd_seq_port_info_t *VAR_6;

   FUNC_0(&VAR_5);
   FUNC_3(&VAR_6);

   FUNC_2(VAR_5, -1);
   while (FUNC_10(VAR_1, VAR_5) == 0)
   {
      int VAR_7 = FUNC_1(VAR_5);

      FUNC_8(VAR_6, VAR_7);
      FUNC_9(VAR_6, -1);

      while (FUNC_11(VAR_1, VAR_6) == 0)
      {
         unsigned VAR_8 = FUNC_4(VAR_6);
         unsigned VAR_9 = FUNC_7(VAR_6);

         if ((VAR_9 & VAR_0) && (VAR_8 & VAR_3) == VAR_3)
         {
            const char *VAR_10 = FUNC_5(VAR_6);

            if (FUNC_12(VAR_10, VAR_2))
            {
               VAR_4->client = VAR_7;
               VAR_4->port = FUNC_6(VAR_6);

               return 1;
            }
         }
      }
   }

   return 0;
}
