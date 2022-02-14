
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int c ;
typedef scalar_t__ UINT ;
typedef char UCHAR ;
struct TYPE_9__ {scalar_t__ Size; scalar_t__ Buf; } ;
struct TYPE_8__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char*,int,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;

char *FUNC_6(SOCK *VAR_0, UINT VAR_1)
{
 BUF *VAR_2;
 char VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_3();
 while (1)
 {
  UCHAR *VAR_5;
  if (FUNC_4(VAR_0, &VAR_3, sizeof(VAR_3), VAR_0->SecureMode) == 0)
  {
   FUNC_1(VAR_2);
   return ((void*)0);
  }
  FUNC_5(VAR_2, &VAR_3, sizeof(VAR_3));
  VAR_5 = (UCHAR *)VAR_2->Buf;
  if (VAR_2->Size > VAR_1)
  {
   FUNC_1(VAR_2);
   return ((void*)0);
  }
  if (VAR_2->Size >= 1)
  {
   if (VAR_5[VAR_2->Size - 1] == '\n')
   {
    VAR_2->Size--;
    if (VAR_2->Size >= 1)
    {
     if (VAR_5[VAR_2->Size - 1] == '\r')
     {
      VAR_2->Size--;
     }
    }
    VAR_4 = FUNC_2(VAR_2->Size + 1);
    FUNC_0(VAR_4, VAR_2->Buf, VAR_2->Size);
    VAR_4[VAR_2->Size] = 0;
    FUNC_1(VAR_2);

    return VAR_4;
   }
  }
 }
}
