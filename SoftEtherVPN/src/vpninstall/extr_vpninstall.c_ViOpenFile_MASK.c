
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int size ;
typedef int fullpath ;
typedef int exedir ;
typedef int errorcode ;
struct TYPE_4__ {int InternetFile; int FileSize; int * io; int * hHttpFile; int * hInternet; } ;
typedef TYPE_1__ VI_FILE ;
typedef int UINT ;
typedef int IO ;
typedef int * HINTERNET ;
typedef int DWORD ;


 int FUNC_0 (char*,int,char*,char*) ;
 int VAR_0 ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int*,int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ,int *,int *,int ) ;
 int * FUNC_8 (int *,char*,int *,int ,int,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 TYPE_1__* FUNC_11 (int) ;

VI_FILE *FUNC_12(char *VAR_8)
{
 VI_FILE *VAR_9;

 if (VAR_8 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_10(VAR_8))
 {
  HINTERNET VAR_10;
  HINTERNET VAR_11 = FUNC_7(VAR_0,
   VAR_6,
   ((void*)0), ((void*)0), 0);
  UINT VAR_12;
  UINT VAR_13;

  if (VAR_11 == ((void*)0))
  {
   return ((void*)0);
  }

  VAR_10 = FUNC_8(VAR_11, VAR_8, ((void*)0), 0,
   VAR_4 | VAR_5, 0);

  if (VAR_10 == ((void*)0))
  {
   FUNC_6(VAR_11);
   return ((void*)0);
  }

  VAR_12 = 0;
  VAR_13 = sizeof(VAR_12);

  if (FUNC_9(VAR_8, "ftp://"))
  {

   DWORD VAR_14 = 0;

   VAR_12 = FUNC_3(VAR_10, &VAR_14);
  }
  else
  {
   UINT VAR_15 = 0;
   UINT VAR_16 = sizeof(VAR_15);


   if (FUNC_5(VAR_10, VAR_1 | VAR_2,
    &VAR_12, &VAR_13, ((void*)0)) == 0)
   {
    VAR_12 = 0;
   }

   if (FUNC_5(VAR_10, VAR_3 | VAR_2,
    &VAR_15, &VAR_16, ((void*)0)) == 0 ||
    (VAR_15 / 100) != 2)
   {

    FUNC_6(VAR_11);
    FUNC_6(VAR_10);
    return ((void*)0);
   }
  }

  VAR_9 = FUNC_11(sizeof(VI_FILE));
  VAR_9->InternetFile = 1;
  VAR_9->hInternet = VAR_11;
  VAR_9->hHttpFile = VAR_10;
  VAR_9->FileSize = VAR_12;

  return VAR_9;
 }
 else
 {
  IO *VAR_17;
  char VAR_18[VAR_7];
  char VAR_19[VAR_7];

  FUNC_4(VAR_19, sizeof(VAR_19));

  FUNC_0(VAR_18, sizeof(VAR_18), VAR_19, VAR_8);

  VAR_17 = FUNC_1(VAR_18, 0);
  if (VAR_17 == ((void*)0))
  {
   return ((void*)0);
  }

  VAR_9 = FUNC_11(sizeof(VI_FILE));
  VAR_9->InternetFile = 0;
  VAR_9->FileSize = FUNC_2(VAR_17);
  VAR_9->io = VAR_17;

  return VAR_9;
 }
}
