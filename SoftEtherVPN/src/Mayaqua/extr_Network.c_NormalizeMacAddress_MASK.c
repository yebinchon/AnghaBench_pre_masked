
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*) ;

bool FUNC_3(char *VAR_0, UINT VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 != ((void*)0) && VAR_3->Size == 6)
 {
  VAR_4 = 1;

  FUNC_0(VAR_0, VAR_1, VAR_3->Buf, VAR_3->Size);
 }

 FUNC_1(VAR_3);

 return VAR_4;
}
