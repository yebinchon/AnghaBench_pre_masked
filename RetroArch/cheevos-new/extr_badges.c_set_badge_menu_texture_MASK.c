
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** badge_id_list; int * menu_texture_list; scalar_t__* badge_locked; } ;
typedef TYPE_1__ badges_ctx_t ;
typedef int badge_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*,int *,int ,int *,int *) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

void FUNC_3(badges_ctx_t * VAR_3, int VAR_4)
{
   char VAR_5[16];
   char VAR_6[VAR_1];

   FUNC_2(VAR_5, sizeof(VAR_5), "%s%s", VAR_3->badge_id_list[VAR_4],
         VAR_3->badge_locked[VAR_4] ? "_lock.png" : ".png");

   FUNC_0(VAR_6,
         VAR_1 * sizeof(char),
         VAR_0);





}
