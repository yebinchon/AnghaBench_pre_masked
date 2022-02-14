
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Data; } ;
typedef TYPE_1__ HTTP_VALUE ;
typedef int HTTP_HEADER ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;

UINT FUNC_2(HTTP_HEADER *VAR_0)
{
 UINT VAR_1;
 HTTP_VALUE *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, "Content-Length");
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_1(VAR_2->Data);

 return VAR_1;
}
