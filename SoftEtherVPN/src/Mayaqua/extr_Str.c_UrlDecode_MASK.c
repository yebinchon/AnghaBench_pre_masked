
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
typedef char UCHAR ;
struct TYPE_5__ {int Buf; } ;
typedef TYPE_1__ BUF ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 () ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char) ;

char *FUNC_6(char *VAR_0)
{
 UINT VAR_1, VAR_2;
 BUF *VAR_3;
 char *VAR_4;
 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_4(VAR_0);

 VAR_3 = FUNC_3();

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  char VAR_5 = VAR_0[VAR_1];

  if (VAR_5 == '%' && ((VAR_1 + 2) < VAR_2))
  {
   char VAR_6[8];
   UINT VAR_7;

   VAR_6[0] = VAR_0[VAR_1 + 1];
   VAR_6[1] = VAR_0[VAR_1 + 2];
   VAR_6[2] = 0;

   VAR_7 = FUNC_2(VAR_6);

   FUNC_5(VAR_3, (UCHAR)VAR_7);

   VAR_1 += 2;
   continue;
  }
  else
  {
   if (VAR_5 == '+')
   {
    VAR_5 = ' ';
   }
   FUNC_5(VAR_3, VAR_5);
  }
 }

 FUNC_5(VAR_3, 0);

 VAR_4 = FUNC_0(VAR_3->Buf);

 FUNC_1(VAR_3);

 return VAR_4;
}
