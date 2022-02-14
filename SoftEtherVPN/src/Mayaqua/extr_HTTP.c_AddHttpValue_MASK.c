
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ValueList; } ;
typedef int HTTP_VALUE ;
typedef TYPE_1__ HTTP_HEADER ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(HTTP_HEADER *VAR_1, HTTP_VALUE *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (FUNC_2(VAR_1->ValueList) < VAR_0)
 {
  FUNC_1(VAR_1->ValueList, VAR_2);
 }
 else
 {
  FUNC_0(VAR_2);
 }
}
