
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int FlushEvent; int RecordQueue; } ;
typedef int RECORD ;
typedef TYPE_1__ LOG ;
typedef int IO ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static bool FUNC_8(LOG *VAR_0, BUF *VAR_1, IO *VAR_2)
{
 RECORD *VAR_3;


 FUNC_4(VAR_0->RecordQueue);
 {
  VAR_3 = FUNC_3(VAR_0->RecordQueue);
 }
 FUNC_6(VAR_0->RecordQueue);

 if (VAR_3 == ((void*)0))
 {
  FUNC_5(VAR_0->FlushEvent);
  return 0;
 }

 FUNC_0(VAR_1);
 FUNC_7(VAR_1, VAR_3);
 if (!FUNC_1(VAR_2, VAR_1->Buf, VAR_1->Size))
 {
  FUNC_0(VAR_1);
 }
 FUNC_2(VAR_3);

 return 1;
}
