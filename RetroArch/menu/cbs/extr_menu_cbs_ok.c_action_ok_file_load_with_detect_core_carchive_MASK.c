
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int detect_content_path; } ;
typedef TYPE_1__ menu_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,size_t,char const*,char const*,unsigned int,int) ;
 int FUNC_1 (int ,int ,char const*,char,int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(
      const char *VAR_1,
      const char *VAR_2, unsigned VAR_3, size_t VAR_4, size_t VAR_5)
{
   menu_handle_t *VAR_6 = FUNC_3();

   if (!VAR_6)
      return FUNC_2();

   FUNC_1(VAR_6->detect_content_path,
         VAR_6->detect_content_path, VAR_1,
         '#', sizeof(VAR_6->detect_content_path));

   VAR_3 = 0;
   VAR_2 = ((void*)0);

   return FUNC_0(
         VAR_0, VAR_4, VAR_5,
         VAR_1, VAR_2, VAR_3, 1);
}
