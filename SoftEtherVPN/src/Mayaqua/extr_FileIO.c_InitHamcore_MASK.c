
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int str_size ;
typedef int num ;
typedef int header ;
typedef int exe_dir ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {char Size; char SizeCompressed; char Offset; int FileName; } ;
typedef TYPE_1__ HC ;


 scalar_t__ FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int,char*,int ,...) ;
 int FUNC_13 (char*,int) ;
 TYPE_1__* FUNC_14 (int) ;
 int VAR_7 ;
 int * VAR_8 ;

void FUNC_15()
{
 wchar_t VAR_9[VAR_5];
 wchar_t VAR_10[VAR_5];
 wchar_t VAR_11[VAR_5];
 UINT VAR_12, VAR_13;
 char VAR_14[VAR_4];

 VAR_7 = FUNC_11(VAR_0);

 if (FUNC_9())
 {
  return;
 }

 FUNC_7(VAR_11, sizeof(VAR_11));
 FUNC_12(VAR_9, sizeof(VAR_9), L"%s/%S", VAR_11, VAR_1);

 FUNC_12(VAR_10, sizeof(VAR_10), L"%s/%S", VAR_11, VAR_2);


 FUNC_6(VAR_10, VAR_9);


 VAR_8 = FUNC_4(VAR_9, 0);
 if (VAR_8 == ((void*)0))
 {




  FUNC_12(VAR_9, sizeof(VAR_9), L"/bin/%S", VAR_1);


  VAR_8 = FUNC_4(VAR_9, 0);
  if (VAR_8 == ((void*)0))
  {
   return;
  }
 }


 FUNC_13(VAR_14, sizeof(VAR_14));
 FUNC_5(VAR_8, VAR_14, VAR_4);

 if (FUNC_0(VAR_14, VAR_3, VAR_4) != 0)
 {

  FUNC_3(VAR_8);
  VAR_8 = ((void*)0);
  return;
 }


 VAR_13 = 0;
 FUNC_5(VAR_8, &VAR_13, sizeof(VAR_13));
 VAR_13 = FUNC_2(VAR_13);
 for (VAR_12 = 0;VAR_12 < VAR_13;VAR_12++)
 {

  char VAR_15[VAR_6];
  UINT VAR_16 = 0;
  HC *VAR_17;

  FUNC_5(VAR_8, &VAR_16, sizeof(VAR_16));
  VAR_16 = FUNC_2(VAR_16);
  if (VAR_16 >= 1)
  {
   VAR_16--;
  }

  FUNC_13(VAR_15, sizeof(VAR_15));
  FUNC_5(VAR_8, VAR_15, VAR_16);

  VAR_17 = FUNC_14(sizeof(HC));
  VAR_17->FileName = FUNC_1(VAR_15);

  FUNC_5(VAR_8, &VAR_17->Size, sizeof(UINT));
  VAR_17->Size = FUNC_2(VAR_17->Size);

  FUNC_5(VAR_8, &VAR_17->SizeCompressed, sizeof(UINT));
  VAR_17->SizeCompressed = FUNC_2(VAR_17->SizeCompressed);

  FUNC_5(VAR_8, &VAR_17->Offset, sizeof(UINT));
  VAR_17->Offset = FUNC_2(VAR_17->Offset);

  FUNC_8(VAR_7, VAR_17);
 }
}
