
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK ;
typedef int HTTP_HEADER ;


 int FUNC_0 (int *,int,char*,char*,int ,int *,int *,int *,int *) ;
 int FUNC_1 (char*) ;

bool FUNC_2(SOCK *VAR_0, HTTP_HEADER *VAR_1)
{
 char *VAR_2 = "<!DOCTYPE HTML PUBLIC \"-//IETF//DTD HTML 2.0//EN\">\r\n<html><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL was not found on this server.</p></body></html>\r\n";
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 return FUNC_0(VAR_0, 404, "Not Found", VAR_2, FUNC_1(VAR_2), ((void*)0), ((void*)0), ((void*)0), VAR_1);
}
