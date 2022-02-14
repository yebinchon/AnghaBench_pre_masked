
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* open ) (TYPE_2__*) ;} ;
typedef TYPE_1__ ui_browser_window_t ;
struct TYPE_6__ {char* filters; char* title; char* path; int startdir; int window; } ;
typedef TYPE_2__ ui_browser_window_state_t ;
typedef int new_title ;
typedef int new_file ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(
      HWND VAR_1,
      char *VAR_2,
      size_t VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      const char *VAR_6)
{
   bool VAR_7 = 0;
   const ui_browser_window_t *VAR_8 =
      FUNC_5();

   if (VAR_8)
   {
      ui_browser_window_state_t VAR_9;





      char VAR_10[VAR_0];
      char VAR_11[32768];

      VAR_10[0] = '\0';
      VAR_11[0] = '\0';

      if (!FUNC_2(VAR_5))
         FUNC_3(VAR_10, VAR_5, sizeof(VAR_10));

      if (VAR_2 && *VAR_2)
         FUNC_3(VAR_11, VAR_2, sizeof(VAR_11));



      VAR_9.filters = (char*)VAR_4;
      VAR_9.title = VAR_10;
      VAR_9.startdir = FUNC_1(VAR_6);
      VAR_9.path = VAR_11;
      VAR_9.window = VAR_1;

      VAR_7 = VAR_8->open(&VAR_9);

      if (VAR_2 && VAR_9.path)
         FUNC_3(VAR_2, VAR_9.path, VAR_3);

      FUNC_0(VAR_9.startdir);
   }

   return VAR_7;
}
