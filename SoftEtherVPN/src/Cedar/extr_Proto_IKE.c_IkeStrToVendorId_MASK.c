
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int hash ;
typedef int UCHAR ;
struct TYPE_6__ {scalar_t__ Size; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (char*) ;

BUF *FUNC_7(char *VAR_1)
{

 if (FUNC_1(VAR_1))
 {
  return ((void*)0);
 }

 if (FUNC_4(VAR_1, "0x"))
 {
  BUF *VAR_2 = FUNC_6(VAR_1 + 2);

  if (VAR_2 == ((void*)0) || VAR_2->Size == 0)
  {
   FUNC_0(VAR_2);
   return ((void*)0);
  }

  return VAR_2;
 }
 else
 {
  BUF *VAR_3;
  UCHAR VAR_4[VAR_0];

  FUNC_2(VAR_4, VAR_1, FUNC_5(VAR_1));

  VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4));

  return VAR_3;
 }
}
