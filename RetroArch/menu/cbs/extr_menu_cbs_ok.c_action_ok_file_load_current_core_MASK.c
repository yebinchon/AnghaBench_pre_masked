
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int detect_content_path; } ;
typedef TYPE_1__ menu_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   menu_handle_t *VAR_6 = FUNC_2();

   if (!VAR_6)
      return FUNC_1();

   return FUNC_0(
         VAR_6->detect_content_path, VAR_0);
}
