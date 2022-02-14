
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dt ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int Lock; int io; } ;
typedef TYPE_1__ TINY_LOG ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;

void FUNC_10(TINY_LOG *VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_4, sizeof(VAR_4), FUNC_3());
 FUNC_6(VAR_4, sizeof(VAR_4), ": ");

 VAR_3 = FUNC_5();

 FUNC_9(VAR_3, VAR_4, FUNC_7(VAR_4));
 FUNC_9(VAR_3, VAR_2, FUNC_7(VAR_2));
 FUNC_9(VAR_3, "\r\n", 2);

 FUNC_4(VAR_1->Lock);
 {
  FUNC_0(VAR_1->io, VAR_3->Buf, VAR_3->Size);

 }
 FUNC_8(VAR_1->Lock);

 FUNC_1(VAR_3);
}
