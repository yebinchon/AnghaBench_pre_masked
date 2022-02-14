
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ValueList; void* Version; void* Target; void* Method; } ;
typedef TYPE_1__ HTTP_HEADER ;


 int * VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

HTTP_HEADER *FUNC_3(char *VAR_1, char *VAR_2, char *VAR_3, bool VAR_4)
{
 HTTP_HEADER *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2(sizeof(HTTP_HEADER));

 VAR_5->Method = FUNC_0(VAR_1);
 VAR_5->Target = FUNC_0(VAR_2);
 VAR_5->Version = FUNC_0(VAR_3);
 VAR_5->ValueList = FUNC_1(VAR_4 ? ((void*)0) : VAR_0);

 return VAR_5;
}
