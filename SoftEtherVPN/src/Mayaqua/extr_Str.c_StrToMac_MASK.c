
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*) ;

bool FUNC_3(UCHAR *VAR_0, char *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Size != 6)
 {
  FUNC_1(VAR_2);
  return 0;
 }

 FUNC_0(VAR_0, VAR_2->Buf, 6);

 FUNC_1(VAR_2);

 return 1;
}
