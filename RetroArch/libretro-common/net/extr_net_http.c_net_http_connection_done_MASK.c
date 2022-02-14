
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ssl; } ;
struct http_connection_t {char* location; char* scan; int port; TYPE_1__ sock_state; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

bool FUNC_2(struct http_connection_t *VAR_0)
{
   char **VAR_1 = ((void*)0);

   if (!VAR_0)
      return 0;

   VAR_1 = &VAR_0->location;

   if (*VAR_0->scan == '\0')
      return 0;
   *VAR_0->scan = '\0';

   if (VAR_0->port == 0)
   {
      if (VAR_0->sock_state.ssl)
         VAR_0->port = 443;
      else
         VAR_0->port = 80;
   }

   if (*VAR_0->scan == ':')
   {
      if (!FUNC_0((int)VAR_0->scan[1]))
         return 0;

      VAR_0->port = (int)FUNC_1(VAR_0->scan + 1, &VAR_0->scan, 10);

      if (*VAR_0->scan != '/')
         return 0;
   }

   *VAR_1 = VAR_0->scan + 1;

   return 1;
}
