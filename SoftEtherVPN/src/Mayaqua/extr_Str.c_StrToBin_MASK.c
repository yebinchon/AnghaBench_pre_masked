
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp2 ;
typedef int tmp ;
typedef size_t UINT ;
typedef scalar_t__ UCHAR ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*) ;
 size_t FUNC_3 (char*) ;
 char FUNC_4 (char) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (char*,int *,int ) ;

BUF *FUNC_8(char *VAR_0)
{
 BUF *VAR_1;
 UINT VAR_2, VAR_3;
 char VAR_4[3];

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_3(VAR_0);
 VAR_4[0] = 0;
 VAR_1 = FUNC_0();
 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  char VAR_5 = VAR_0[VAR_3];
  VAR_5 = FUNC_4(VAR_5);
  if (('0' <= VAR_5 && VAR_5 <= '9') || ('A' <= VAR_5 && VAR_5 <= 'F'))
  {
   if (VAR_4[0] == 0)
   {
    VAR_4[0] = VAR_5;
    VAR_4[1] = 0;
   }
   else if (VAR_4[1] == 0)
   {
    UCHAR VAR_6;
    char VAR_7[64];
    VAR_4[1] = VAR_5;
    VAR_4[2] = 0;
    FUNC_2(VAR_7, sizeof(VAR_7), "0x");
    FUNC_1(VAR_7, sizeof(VAR_7), VAR_4);
    VAR_6 = (UCHAR)FUNC_7(VAR_7, ((void*)0), 0);
    FUNC_5(VAR_1, &VAR_6, 1);
    FUNC_6(VAR_4, sizeof(VAR_4));
   }
  }
  else if (VAR_5 == ' ' || VAR_5 == ',' || VAR_5 == '-' || VAR_5 == ':')
  {

  }
  else
  {
   break;
  }
 }

 return VAR_1;
}
