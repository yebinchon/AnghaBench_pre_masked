
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filebrowser_label; } ;
typedef TYPE_1__ menu_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *,char const*,unsigned int,size_t,size_t,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ,char const*,int) ;

int FUNC_5(const char *VAR_2,
      const char *VAR_3, unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   menu_handle_t *VAR_7 = FUNC_3();

   if (!VAR_7)
      return FUNC_2();

   FUNC_0(VAR_1);
   FUNC_4(VAR_7->filebrowser_label, VAR_3, sizeof(VAR_7->filebrowser_label));
   return FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_0);
}
