
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 char* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static char *
FUNC_3(void)
{
 StringInfo VAR_0 = ((void*)0);
 char *VAR_1 = FUNC_0();

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_0 = FUNC_2();
 FUNC_1(VAR_0, "SET search_path TO %s;", VAR_1);

 return VAR_0->data;
}
