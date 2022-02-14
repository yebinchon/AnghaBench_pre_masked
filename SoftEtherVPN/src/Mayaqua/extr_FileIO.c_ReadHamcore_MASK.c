
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int filename ;
typedef int exe_dir ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {char* FileName; void* Buffer; scalar_t__ Size; scalar_t__ LastAccess; int SizeCompressed; int Offset; } ;
typedef TYPE_1__ HC ;
typedef int BUF ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*,char*,int) ;
 TYPE_1__* FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int *,int ,int ) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int,char*) ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 (void*,scalar_t__,void*,int ) ;
 int FUNC_18 (int *,int,char*,int *,int ,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,void*,scalar_t__) ;
 int FUNC_21 (TYPE_1__*,int) ;
 void* FUNC_22 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

BUF *FUNC_23(char *VAR_6)
{
 wchar_t VAR_7[VAR_3];
 wchar_t VAR_8[VAR_3];
 BUF *VAR_9;
 char VAR_10[VAR_2];

 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_6[0] == '|')
 {
  VAR_6++;
 }

 if (VAR_6[0] == '/' || VAR_6[0] == '\\')
 {
  VAR_6++;
 }

 FUNC_15(VAR_10, sizeof(VAR_10), VAR_6);

 FUNC_11(VAR_10, sizeof(VAR_10), VAR_10, "/", "\\", 1);

 if (FUNC_8())
 {
  return ((void*)0);
 }


 FUNC_3(VAR_8, sizeof(VAR_8));

 FUNC_18(VAR_7, sizeof(VAR_7), L"%s/%S/%S", VAR_8, VAR_1, VAR_10);

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9 != ((void*)0))
 {
  return VAR_9;
 }


 FUNC_6(VAR_4);
 {
  HC VAR_11, *VAR_12;
  UINT VAR_13;

  FUNC_21(&VAR_11, sizeof(VAR_11));
  VAR_11.FileName = VAR_10;
  VAR_12 = FUNC_12(VAR_4, &VAR_11);

  if (VAR_12 == ((void*)0))
  {

   VAR_9 = ((void*)0);
  }
  else
  {

   if (VAR_12->Buffer != ((void*)0))
   {

    VAR_9 = FUNC_9();
    FUNC_20(VAR_9, VAR_12->Buffer, VAR_12->Size);
    FUNC_13(VAR_9, 0, 0);
    VAR_12->LastAccess = FUNC_16();
   }
   else
   {

    if (FUNC_1(VAR_5, 0, VAR_12->Offset) == 0)
    {

     VAR_9 = ((void*)0);
    }
    else
    {

     void *VAR_14 = FUNC_7(VAR_12->SizeCompressed);
     if (FUNC_0(VAR_5, VAR_14, VAR_12->SizeCompressed) == 0)
     {

      FUNC_2(VAR_14);
      VAR_9 = ((void*)0);
     }
     else
     {

      VAR_12->Buffer = FUNC_22(VAR_12->Size);
      if (FUNC_17(VAR_12->Buffer, VAR_12->Size, VAR_14, VAR_12->SizeCompressed) != VAR_12->Size)
      {

       FUNC_2(VAR_14);
       FUNC_2(VAR_12->Buffer);
       VAR_9 = ((void*)0);
      }
      else
      {

       FUNC_2(VAR_14);
       VAR_9 = FUNC_9();
       FUNC_20(VAR_9, VAR_12->Buffer, VAR_12->Size);
       FUNC_13(VAR_9, 0, 0);
       VAR_12->LastAccess = FUNC_16();
      }
     }
    }
   }
  }


  for (VAR_13 = 0;VAR_13 < FUNC_5(VAR_4);VAR_13++)
  {
   HC *VAR_15 = FUNC_4(VAR_4, VAR_13);

   if (VAR_15->Buffer != ((void*)0))
   {
    if (((VAR_15->LastAccess + VAR_0) <= FUNC_16()) ||
     (FUNC_14(VAR_15->FileName, "Li")))
    {
     FUNC_2(VAR_15->Buffer);
     VAR_15->Buffer = ((void*)0);
    }
   }
  }
 }
 FUNC_19(VAR_4);

 return VAR_9;
}
