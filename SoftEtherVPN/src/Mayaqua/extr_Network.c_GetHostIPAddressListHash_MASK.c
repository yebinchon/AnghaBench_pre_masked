
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (char*,int) ;

UINT64 FUNC_12()
{
 UINT VAR_1;
 LIST *VAR_2;
 BUF *VAR_3 = FUNC_8();
 UCHAR VAR_4[VAR_0];
 UINT64 VAR_5 = 0;

 VAR_2 = FUNC_4();

 if (VAR_2 != ((void*)0))
 {
  for (VAR_1 = 0;VAR_1 < FUNC_7(VAR_2);VAR_1++)
  {
   IP *VAR_6 = FUNC_6(VAR_2, VAR_1);
   char VAR_7[128];

   FUNC_11(VAR_7, sizeof(VAR_7));
   FUNC_5(VAR_7, sizeof(VAR_7), VAR_6);

   FUNC_10(VAR_3, VAR_7);
  }

  FUNC_3(VAR_2);
 }

 FUNC_10(VAR_3, "test");

 FUNC_9(VAR_4, VAR_3->Buf, VAR_3->Size);

 FUNC_2(VAR_3);

 FUNC_0(&VAR_5, VAR_4, sizeof(UINT64));

 VAR_5 = FUNC_1(VAR_5);

 return VAR_5;
}
