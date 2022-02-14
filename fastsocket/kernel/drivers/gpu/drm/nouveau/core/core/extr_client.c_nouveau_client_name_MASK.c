
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_client {char* name; } ;


 struct nouveau_client* FUNC_0 (void*) ;

const char *
FUNC_1(void *VAR_0)
{
 const char *VAR_1 = "unknown";
 struct nouveau_client *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_1 = VAR_2->name;
 return VAR_1;
}
