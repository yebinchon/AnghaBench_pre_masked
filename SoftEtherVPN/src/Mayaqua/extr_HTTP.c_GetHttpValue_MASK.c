
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ValueList; } ;
struct TYPE_7__ {char* Name; } ;
typedef TYPE_1__ HTTP_VALUE ;
typedef TYPE_2__ HTTP_HEADER ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;

HTTP_VALUE *FUNC_1(HTTP_HEADER *VAR_0, char *VAR_1)
{
 HTTP_VALUE *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3.Name = VAR_1;
 VAR_2 = FUNC_0(VAR_0->ValueList, &VAR_3);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_2;
}
