
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int index_offset; } ;
typedef TYPE_1__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,unsigned int) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(rarch_setting_t *VAR_4,
      bool VAR_5)
{
   unsigned VAR_6 = 0;
   const char *VAR_7 = ((void*)0);

   (void)VAR_5;

   if (!VAR_4)
      return -1;

   VAR_6 = VAR_4->index_offset;
   VAR_7 = FUNC_1(VAR_6);

   if(!FUNC_4(VAR_7) && FUNC_0(VAR_7, VAR_6))
      FUNC_3(
            FUNC_2(VAR_3), 1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
   else
      FUNC_3(
            FUNC_2(VAR_2), 1, 100, 1,
            ((void*)0), VAR_1, VAR_0);

   return 0;
}
