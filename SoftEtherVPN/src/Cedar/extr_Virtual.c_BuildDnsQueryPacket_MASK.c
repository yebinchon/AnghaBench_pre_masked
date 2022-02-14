
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_6__ {int Size; int * Buf; } ;
typedef TYPE_1__ BUF ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

void FUNC_4(BUF *VAR_0, char *VAR_1, bool VAR_2)
{
 USHORT VAR_3;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, VAR_4->Buf, VAR_4->Size);
 FUNC_2(VAR_4);


 if (VAR_2 == 0)
 {
  VAR_3 = FUNC_1(0x0001);
 }
 else
 {
  VAR_3 = FUNC_1(0x000c);
 }
 FUNC_3(VAR_0, &VAR_3, 2);

 VAR_3 = FUNC_1(0x0001);
 FUNC_3(VAR_0, &VAR_3, 2);
}
