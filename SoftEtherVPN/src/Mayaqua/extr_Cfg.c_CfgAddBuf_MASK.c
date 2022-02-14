
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; int Buf; } ;
typedef int ITEM ;
typedef int FOLDER ;
typedef TYPE_1__ BUF ;


 int * FUNC_0 (int *,char*,int ,int ) ;

ITEM *FUNC_1(FOLDER *VAR_0, char *VAR_1, BUF *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2->Buf, VAR_2->Size);
}
