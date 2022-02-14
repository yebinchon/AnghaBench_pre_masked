
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ Current; } ;
typedef int IO ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,void*,scalar_t__) ;

BUF *FUNC_8(char *VAR_0, UINT VAR_1)
{
 IO *VAR_2;
 BUF *VAR_3;
 UINT VAR_4;
 void *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_2);

 if (VAR_1 != 0)
 {
  if (VAR_4 > VAR_1)
  {
   VAR_4 = VAR_1;
  }
 }

 VAR_5 = FUNC_5(VAR_4);
 FUNC_2(VAR_2, VAR_5, VAR_4);
 FUNC_0(VAR_2);

 VAR_3 = FUNC_6();
 FUNC_7(VAR_3, VAR_5, VAR_4);
 VAR_3->Current = 0;
 FUNC_4(VAR_5);

 return VAR_3;
}
