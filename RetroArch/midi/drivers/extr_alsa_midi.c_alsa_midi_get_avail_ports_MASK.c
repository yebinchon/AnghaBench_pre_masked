
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {int member_0; } ;
struct string_list {int dummy; } ;
typedef int snd_seq_t ;
typedef int snd_seq_port_info_t ;
typedef int snd_seq_client_info_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int ,int ) ;
 int FUNC_6 (int **) ;
 unsigned int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 int FUNC_14 (struct string_list*,char const*,union string_list_elem_attr) ;

__attribute__((used)) static bool FUNC_15(struct string_list *VAR_3, unsigned VAR_4)
{
   int VAR_5;
   snd_seq_t *VAR_6;
   snd_seq_client_info_t *VAR_7;
   snd_seq_port_info_t *VAR_8;
   union string_list_elem_attr VAR_9 = {0};

   FUNC_1(&VAR_7);
   FUNC_6(&VAR_8);

   VAR_5 = FUNC_5(&VAR_6, "default", VAR_1, VAR_0);
   if (VAR_5 < 0)
   {
      FUNC_0("[MIDI]: snd_seq_open failed with error %d.\n", VAR_5);
      return 0;
   }

   FUNC_3(VAR_7, -1);

   while (FUNC_12(VAR_6, VAR_7) == 0)
   {
      int VAR_10 = FUNC_2(VAR_7);

      FUNC_10(VAR_8, VAR_10);
      FUNC_11(VAR_8, -1);

      while (FUNC_13(VAR_6, VAR_8) == 0)
      {
         unsigned VAR_11 = FUNC_7(VAR_8);
         unsigned VAR_12 = FUNC_9(VAR_8);

         if ((VAR_12 & VAR_2) &&
               (VAR_11 & VAR_4) == VAR_4)
         {
            const char *VAR_13 = FUNC_8(VAR_8);

            if (!FUNC_14(VAR_3, VAR_13, VAR_9))
            {
               FUNC_0("[MIDI]: string_list_append failed.\n");
               FUNC_4(VAR_6);

               return 0;
            }
         }
      }
   }

   FUNC_4(VAR_6);

   return 1;
}
