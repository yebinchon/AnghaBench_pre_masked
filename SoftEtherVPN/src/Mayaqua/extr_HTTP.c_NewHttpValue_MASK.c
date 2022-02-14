
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Data; void* Name; } ;
typedef TYPE_1__ HTTP_VALUE ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int) ;

HTTP_VALUE *FUNC_3(char *VAR_0, char *VAR_1)
{
 HTTP_VALUE *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2(sizeof(HTTP_VALUE));

 VAR_2->Name = FUNC_0(VAR_0);
 VAR_2->Data = FUNC_0(VAR_1);

 FUNC_1(VAR_2->Name);
 FUNC_1(VAR_2->Data);

 return VAR_2;
}
