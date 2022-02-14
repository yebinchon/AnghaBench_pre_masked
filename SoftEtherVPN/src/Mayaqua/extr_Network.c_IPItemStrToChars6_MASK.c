
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(UCHAR *VAR_0, char *VAR_1)
{
 char VAR_2[5];
 BUF *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2, sizeof(VAR_2));

 VAR_4 = FUNC_1(VAR_1);
 switch (VAR_4)
 {
 case 0:
  VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_2[3] = '0';
  break;

 case 1:
  VAR_2[0] = VAR_2[1] = VAR_2[2] = '0';
  VAR_2[3] = VAR_1[0];
  break;

 case 2:
  VAR_2[0] = VAR_2[1] = '0';
  VAR_2[2] = VAR_1[0];
  VAR_2[3] = VAR_1[1];
  break;

 case 3:
  VAR_2[0] = '0';
  VAR_2[1] = VAR_1[0];
  VAR_2[2] = VAR_1[1];
  VAR_2[3] = VAR_1[2];
  break;

 case 4:
  VAR_2[0] = VAR_1[0];
  VAR_2[1] = VAR_1[1];
  VAR_2[2] = VAR_1[2];
  VAR_2[3] = VAR_1[3];
  break;
 }

 VAR_3 = FUNC_2(VAR_2);

 VAR_0[0] = ((UCHAR *)VAR_3->Buf)[0];
 VAR_0[1] = ((UCHAR *)VAR_3->Buf)[1];

 FUNC_0(VAR_3);
}
