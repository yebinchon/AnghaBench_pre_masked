
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rand ;
typedef int hash ;
typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int*,int) ;
 int VAR_0 ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10(UCHAR *VAR_1)
{
 BUF *VAR_2;
 UINT64 VAR_3;
 UCHAR VAR_4[VAR_0];
 UCHAR VAR_5[VAR_0];
 UINT VAR_6;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2();

 FUNC_3(VAR_5, sizeof(VAR_5));
 FUNC_8(VAR_2, VAR_5, sizeof(VAR_5));

 VAR_3 = FUNC_7();
 FUNC_9(VAR_2, VAR_3);

 VAR_3 = FUNC_6();
 FUNC_9(VAR_2, VAR_3);

 VAR_3 = FUNC_5();
 FUNC_9(VAR_2, VAR_3);

 FUNC_1(VAR_4);
 FUNC_8(VAR_2, VAR_4, sizeof(VAR_4));

 FUNC_4(VAR_1, VAR_2->Buf, VAR_2->Size);
 FUNC_3(VAR_5, sizeof(VAR_5));

 for (VAR_6 = 0;VAR_6 < VAR_0;VAR_6++)
 {
  VAR_1[VAR_6] = VAR_1[VAR_6] ^ VAR_5[VAR_6];
 }

 FUNC_0(VAR_2);
}
