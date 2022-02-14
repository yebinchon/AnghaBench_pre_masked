
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_host {int * req; } ;


 scalar_t__ FUNC_0 (int *,int,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct mg_host *VAR_0, int VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_0->req, VAR_1, VAR_2))
  return 1;

 VAR_0->req = ((void*)0);
 return 0;
}
