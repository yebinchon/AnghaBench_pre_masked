
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct http_t {size_t len; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (struct http_t*) ;

uint8_t* FUNC_1(struct http_t *VAR_0, size_t* VAR_1, bool VAR_2)
{
   if (!VAR_0)
      return ((void*)0);

   if (!VAR_2 && FUNC_0(VAR_0))
   {
      if (VAR_1)
         *VAR_1=0;
      return ((void*)0);
   }

   if (VAR_1)
      *VAR_1=VAR_0->len;

   return (uint8_t*)VAR_0->data;
}
