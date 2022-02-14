
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connection_t {struct http_connection_t* useragentcopy; struct http_connection_t* postdatacopy; struct http_connection_t* contenttypecopy; struct http_connection_t* methodcopy; struct http_connection_t* urlcopy; } ;


 int FUNC_0 (struct http_connection_t*) ;

void FUNC_1(struct http_connection_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->urlcopy)
      FUNC_0(VAR_0->urlcopy);

   if (VAR_0->methodcopy)
      FUNC_0(VAR_0->methodcopy);

   if (VAR_0->contenttypecopy)
      FUNC_0(VAR_0->contenttypecopy);

   if (VAR_0->postdatacopy)
      FUNC_0(VAR_0->postdatacopy);

   if (VAR_0->useragentcopy)
      FUNC_0(VAR_0->useragentcopy);

   VAR_0->urlcopy = ((void*)0);
   VAR_0->methodcopy = ((void*)0);
   VAR_0->contenttypecopy = ((void*)0);
   VAR_0->postdatacopy = ((void*)0);
   VAR_0->useragentcopy = ((void*)0);

   FUNC_0(VAR_0);
}
