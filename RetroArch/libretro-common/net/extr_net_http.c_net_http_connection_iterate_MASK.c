
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connection_t {char* scan; } ;



bool FUNC_0(struct http_connection_t *VAR_0)
{
   if (!VAR_0)
      return 0;

   while (*VAR_0->scan != '/' && *VAR_0->scan != ':' && *VAR_0->scan != '\0')
      VAR_0->scan++;

   return 1;
}
