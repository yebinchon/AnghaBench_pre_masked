
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_8(char *VAR_2, UINT VAR_3)
{
 UINT VAR_4;
 bool VAR_5 = 0;
 void *VAR_6;

 if (VAR_2 == ((void*)0) || VAR_3 <= 1)
 {
  if (VAR_3 >= 1)
  {
   VAR_2[0] = 0;
  }
  return 0;
 }

 VAR_4 = 0;

 FUNC_3(VAR_2, VAR_3);

 VAR_6 = FUNC_2();

 while (1)
 {
  int VAR_7;




  VAR_7 = FUNC_5(VAR_0);


  if (VAR_7 >= 0x20 && VAR_7 <= 0x7E)
  {

   if ((VAR_4 + 1) < VAR_3)
   {
    VAR_2[VAR_4++] = (char)VAR_7;
    FUNC_7('*', VAR_1);
   }
  }
  else if (VAR_7 == 0x03)
  {

   FUNC_4(0);
  }
  else if (VAR_7 == 0x04 || VAR_7 == 0x1a || VAR_7 == 0x0D || VAR_7==0x0A)
  {

   if (VAR_7 == 0x04 || VAR_7 == 0x1a)
   {
    VAR_5 = 1;
   }
   break;
  }
  else if (VAR_7 == 0xE0)
  {




   VAR_7 = FUNC_5(VAR_0);

   if (VAR_7 == 0x4B || VAR_7 == 0x53)
   {

    goto BACKSPACE;
   }
  }
  else if (VAR_7 == 0x08)
  {
BACKSPACE:

   if (VAR_4 >= 1)
   {
    VAR_2[--VAR_4] = 0;
    FUNC_7(0x08, VAR_1);
    FUNC_7(' ', VAR_1);
    FUNC_7(0x08, VAR_1);
   }
  }
 }
 FUNC_0("\n");

 FUNC_1(VAR_6);

 return (VAR_5 ? 0 : 1);
}
