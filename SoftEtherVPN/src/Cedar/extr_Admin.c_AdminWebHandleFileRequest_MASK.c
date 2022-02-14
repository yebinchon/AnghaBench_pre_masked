
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int url2 ;
typedef int url ;
typedef int filename ;
typedef size_t UINT ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef int SOCK ;
typedef int HTTP_HEADER ;
typedef int CONNECTION ;
typedef TYPE_1__ BUF ;
typedef int ADMIN ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,char*,int ,int ,char*,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (char*,char*,char*,char*,int,int*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int VAR_0 ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (char*,int,char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char*,char*) ;

bool FUNC_13(ADMIN *VAR_1, CONNECTION *VAR_2, SOCK *VAR_3, HTTP_HEADER *VAR_4, char *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8)
{
 bool VAR_9 = 0;
 char VAR_10[VAR_0];
 UINT VAR_11, VAR_12;
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0) ||
  VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }

 FUNC_10(VAR_10, sizeof(VAR_10), VAR_5);

 VAR_12 = FUNC_11(VAR_10);
 for (VAR_11 = 0;VAR_11 < VAR_12;VAR_11++)
 {
  if (VAR_10[VAR_11] == '\\')
  {
   VAR_10[VAR_11] = '/';
  }
 }


 if (FUNC_8(VAR_10, "..") || FUNC_8(VAR_10, "//") || FUNC_8(VAR_10, "\\\\") || FUNC_8(VAR_10, "/\\") || FUNC_8(VAR_10, "\\/"))
 {
  VAR_9 = FUNC_2(VAR_3, VAR_4);
 }
 else
 {
  char VAR_13[VAR_0];
  bool VAR_14 = 0;

  BUF *VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_10,
   VAR_13, sizeof(VAR_13), &VAR_14);

  if (VAR_15 == ((void*)0))
  {
   VAR_9 = FUNC_2(VAR_3, VAR_4);
  }
  else
  {
   if (VAR_14 && FUNC_5(VAR_10, "/") == 0)
   {
    char VAR_16[VAR_0];
    FUNC_10(VAR_16, sizeof(VAR_16), VAR_10);
    FUNC_9(VAR_16, sizeof(VAR_16), "/");
    VAR_9 = FUNC_1(VAR_3, VAR_16, VAR_6, VAR_4);
   }
   else if (VAR_14 == 0 && FUNC_5(VAR_10, "/"))
   {
    char VAR_17[VAR_0];
    FUNC_12(VAR_17, sizeof(VAR_17), VAR_10, "/");
    VAR_9 = FUNC_1(VAR_3, VAR_17, VAR_6, VAR_4);
   }
   else
   {
    BUF *VAR_18 = FUNC_0(VAR_15, VAR_13, 0);
    char *VAR_19 = FUNC_7(VAR_13);

    if (VAR_19 == ((void*)0))
    {
     VAR_19 = "application/octet-stream";
    }

    VAR_9 = FUNC_3(VAR_3, 200, "OK", VAR_18->Buf, VAR_18->Size, VAR_19, ((void*)0), ((void*)0), VAR_4);

    FUNC_6(VAR_18);
   }
   FUNC_6(VAR_15);
  }
 }

 return VAR_9;
}
