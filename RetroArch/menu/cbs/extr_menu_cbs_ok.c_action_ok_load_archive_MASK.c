
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* scratch2_buf; char* scratch_buf; int detect_content_path; } ;
typedef TYPE_1__ menu_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const char *VAR_2,
      const char *VAR_3, unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   menu_handle_t *VAR_9 = FUNC_4();

   if (!VAR_9)
      return FUNC_3();

   VAR_7 = VAR_9->scratch2_buf;
   VAR_8 = VAR_9->scratch_buf;

   FUNC_1(VAR_9->detect_content_path,
         VAR_7, VAR_8,
         sizeof(VAR_9->detect_content_path));

   FUNC_2(VAR_0);

   return FUNC_0(
         VAR_9->detect_content_path,
         VAR_1);
}
