
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rand_data ;
typedef int now ;
typedef int UINT64 ;
typedef int UCHAR ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int*,int) ;
 int VAR_0 ;
 int FUNC_3 (int*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int*,int) ;

void FUNC_6(UCHAR *VAR_1)
{
 UCHAR VAR_2[32];
 UINT64 VAR_3;
 BUF *VAR_4;
 UCHAR VAR_5[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_3 = FUNC_4();


 FUNC_2(VAR_2, sizeof(VAR_2));


 VAR_4 = FUNC_1();
 FUNC_5(VAR_4, &VAR_3, sizeof(VAR_3));
 FUNC_5(VAR_4, VAR_2, sizeof(VAR_2));


 FUNC_3(VAR_5, VAR_4->Buf, VAR_4->Size);


 VAR_1[0] = 0x5E;
 VAR_1[1] = VAR_5[0];
 VAR_1[2] = VAR_5[1];
 VAR_1[3] = VAR_5[2];
 VAR_1[4] = VAR_5[3];
 VAR_1[5] = VAR_5[4];

 FUNC_0(VAR_4);
}
