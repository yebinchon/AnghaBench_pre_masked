
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connection_t {int dummy; } ;
typedef int retro_task_callback_t ;


 struct http_connection_t* FUNC_0 (char const*,char*,int *) ;
 int FUNC_1 (struct http_connection_t*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 void* FUNC_3 (struct http_connection_t*,char const*,int,char const*,int ,void*) ;

void* FUNC_4(const char *VAR_0, bool VAR_1,
   const char *VAR_2, const char* VAR_3,
   retro_task_callback_t VAR_4, void *VAR_5)
{
   struct http_connection_t* VAR_6;

   if (FUNC_2(VAR_0))
      return ((void*)0);

   VAR_6 = FUNC_0(VAR_0, "GET", ((void*)0));
   if (!VAR_6)
      return ((void*)0);

   if (VAR_3 != ((void*)0))
      FUNC_1(VAR_6, VAR_3);


   return FUNC_3(VAR_6, VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
}
