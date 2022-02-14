
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Size; int Buf; } ;
typedef int PACK ;
typedef int ELEMENT ;
typedef TYPE_1__ BUF ;


 int * FUNC_0 (int *,char*,int ,int ,scalar_t__,scalar_t__) ;

ELEMENT *FUNC_1(PACK *VAR_0, char *VAR_1, BUF *VAR_2, UINT VAR_3, UINT VAR_4)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == 0)
 {
  return ((void*)0);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2->Buf, VAR_2->Size, VAR_3, VAR_4);
}
