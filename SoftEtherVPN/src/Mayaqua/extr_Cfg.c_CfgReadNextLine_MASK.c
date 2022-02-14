
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int Current; int Size; scalar_t__ Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;

char *FUNC_4(BUF *VAR_0)
{
 char *VAR_1;
 char *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_1 = (char *)VAR_0->Buf + VAR_0->Current;
 if ((VAR_0->Size - VAR_0->Current) == 0)
 {

  return ((void*)0);
 }
 VAR_3 = 0;
 while (1)
 {
  if (VAR_1[VAR_3] == 13 || VAR_1[VAR_3] == 10)
  {
   if (VAR_1[VAR_3] == 13)
   {
    if (VAR_3 < (VAR_0->Size - VAR_0->Current))
    {
     VAR_3++;
    }
   }
   break;
  }
  VAR_3++;
  if (VAR_3 >= (VAR_0->Size - VAR_0->Current))
  {
   break;
  }
 }


 VAR_2 = FUNC_3(VAR_3 + 1);
 FUNC_0(VAR_0, VAR_2, VAR_3);
 FUNC_1(VAR_0, 1, 1);

 if (FUNC_2(VAR_2) >= 1)
 {
  if (VAR_2[FUNC_2(VAR_2) - 1] == 13)
  {
   VAR_2[FUNC_2(VAR_2) - 1] = 0;
  }
 }

 return VAR_2;
}
