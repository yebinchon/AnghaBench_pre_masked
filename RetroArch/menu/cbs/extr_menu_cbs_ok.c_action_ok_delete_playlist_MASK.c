
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int playlist_t ;
struct TYPE_3__ {int type; int * data; } ;
typedef TYPE_1__ menu_ctx_environment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int * FUNC_3 () ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3,
      const char *VAR_4, unsigned VAR_5, size_t VAR_6, size_t VAR_7)
{
   playlist_t *VAR_8 = FUNC_3();
   menu_ctx_environment_t VAR_9;

   if (!VAR_8)
      return -1;

   VAR_9.type = VAR_0;
   VAR_9.data = ((void*)0);

   VAR_3 = FUNC_4(VAR_8);

   FUNC_1(VAR_3);

   VAR_9.type = VAR_1;

   FUNC_2(VAR_2, &VAR_9);

   return FUNC_0(((void*)0), ((void*)0), 0, 0);
}
