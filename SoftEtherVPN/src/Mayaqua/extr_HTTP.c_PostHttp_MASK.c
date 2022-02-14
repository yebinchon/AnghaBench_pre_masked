
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int Size; int Buf; } ;
struct TYPE_8__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_2__*,void*,int ) ;

bool FUNC_11(SOCK *VAR_1, HTTP_HEADER *VAR_2, void *VAR_3, UINT VAR_4)
{
 char *VAR_5;
 BUF *VAR_6;
 bool VAR_7;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_4 != 0 && VAR_3 == ((void*)0)))
 {
  return 0;
 }


 if (FUNC_3(VAR_2, "Content-Length") == ((void*)0))
 {
  char VAR_8[VAR_0];

  FUNC_9(VAR_8, VAR_4);
  FUNC_0(VAR_2, FUNC_6("Content-Length", VAR_8));
 }


 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }
 VAR_6 = FUNC_5();
 FUNC_10(VAR_6, VAR_5, FUNC_8(VAR_5));
 FUNC_1(VAR_5);


 FUNC_10(VAR_6, VAR_3, VAR_4);


 VAR_7 = FUNC_7(VAR_1, VAR_6->Buf, VAR_6->Size, VAR_1->SecureMode);

 FUNC_2(VAR_6);

 return VAR_7;
}
