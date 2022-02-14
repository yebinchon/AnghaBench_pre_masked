
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scratch_buf; int scratch2_buf; } ;
typedef TYPE_1__ menu_handle_t ;
typedef int combined_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
      const char *VAR_4, unsigned VAR_5, size_t VAR_6, size_t VAR_7)
{
   char VAR_8[VAR_2];
   menu_handle_t *VAR_9 = FUNC_3();

   VAR_8[0] = '\0';

   if (!VAR_9)
      return FUNC_2();

   FUNC_1(VAR_8, VAR_9->scratch2_buf,
         VAR_9->scratch_buf, sizeof(VAR_8));





   return FUNC_0(VAR_8, VAR_0);

}
