
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int sign ;
typedef int hash ;
typedef int X ;
typedef int UCHAR ;
struct TYPE_10__ {int Size; int * Buf; } ;
typedef int PACK ;
typedef int K ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_1__*,char*,int *,int) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 TYPE_1__* FUNC_8 (int *,int) ;

BUF *FUNC_9(PACK *VAR_1, X *VAR_2, K *VAR_3)
{
 UCHAR VAR_4[VAR_0];
 BUF *VAR_5;
 BUF *VAR_6 = ((void*)0);
 BUF *VAR_7 = ((void*)0);
 BUF *VAR_8;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_1);
 FUNC_5(VAR_4, VAR_5->Buf, VAR_5->Size);

 if (VAR_2 != ((void*)0) && VAR_3 != ((void*)0))
 {
  UCHAR VAR_9[128];
  VAR_6 = FUNC_8(VAR_2, 0);

  FUNC_3(VAR_9, VAR_4, sizeof(VAR_4), VAR_3);

  VAR_7 = FUNC_1();
  FUNC_7(VAR_7, VAR_9, sizeof(VAR_9));
  FUNC_4(VAR_7, 0, 0);
 }

 VAR_8 = FUNC_1();

 FUNC_6(VAR_8, "PACK", VAR_5->Buf, VAR_5->Size);
 FUNC_6(VAR_8, "HASH", VAR_4, sizeof(VAR_4));

 if (VAR_6 != ((void*)0))
 {
  FUNC_6(VAR_8, "CERT", VAR_6->Buf, VAR_6->Size);
  FUNC_6(VAR_8, "SIGN", VAR_7->Buf, VAR_7->Size);
 }

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);

 FUNC_4(VAR_8, 0, 0);

 return VAR_8;
}
