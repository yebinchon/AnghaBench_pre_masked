
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int digest ;
typedef char UCHAR ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

void FUNC_5(UCHAR *VAR_1, UCHAR *VAR_2, UCHAR *VAR_3, UCHAR *VAR_4)
{
 UCHAR VAR_5[VAR_0];
 BUF *VAR_6;
 char *VAR_7 = "Magic server to client signing constant";
 char *VAR_8 = "Pad to make it do more than one iteration";

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_6 = FUNC_1();
 FUNC_4(VAR_6, VAR_2, 16);
 FUNC_4(VAR_6, VAR_3, 24);
 FUNC_4(VAR_6, VAR_7, FUNC_3(VAR_7));
 FUNC_2(VAR_5, VAR_6->Buf, VAR_6->Size);
 FUNC_0(VAR_6);

 VAR_6 = FUNC_1();
 FUNC_4(VAR_6, VAR_5, sizeof(VAR_5));
 FUNC_4(VAR_6, VAR_4, 8);
 FUNC_4(VAR_6, VAR_8, FUNC_3(VAR_8));
 FUNC_2(VAR_1, VAR_6->Buf, VAR_6->Size);
 FUNC_0(VAR_6);
}
