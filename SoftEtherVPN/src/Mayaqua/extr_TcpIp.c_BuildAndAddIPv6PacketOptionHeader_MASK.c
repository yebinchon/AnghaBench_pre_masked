
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int Size; int NextHeader; } ;
typedef TYPE_1__ IPV6_OPTION_HEADER ;
typedef int BUF ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int) ;

void FUNC_4(BUF *VAR_0, IPV6_OPTION_HEADER *VAR_1, UCHAR VAR_2, UINT VAR_3)
{
 IPV6_OPTION_HEADER *VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_5 = VAR_3;
 if ((VAR_5 % 8) != 0)
 {
  VAR_5 = ((VAR_5 / 8) + 1) * 8;
 }

 VAR_4 = FUNC_3(VAR_5);
 FUNC_0(VAR_4, VAR_1, VAR_3);
 VAR_4->Size = (VAR_5 / 8) - 1;
 VAR_4->NextHeader = VAR_2;

 FUNC_2(VAR_0, VAR_4, VAR_5);

 FUNC_1(VAR_4);
}
