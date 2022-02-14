
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connection_t {int * useragentcopy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

void FUNC_2(struct http_connection_t* VAR_0, const char* VAR_1)
{
   if (VAR_0->useragentcopy)
      FUNC_0(VAR_0->useragentcopy);

   VAR_0->useragentcopy = VAR_1 ? FUNC_1(VAR_1) : ((void*)0);
}
