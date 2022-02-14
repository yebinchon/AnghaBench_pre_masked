
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp2 ;
typedef int tmp1 ;
typedef int hash ;
typedef int UCHAR ;
struct TYPE_4__ {int* addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (char*,int,int*,int) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,char*,int ) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,int) ;

void FUNC_9(IP *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 UCHAR VAR_6[VAR_1];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_4, sizeof(VAR_4), VAR_3);
 FUNC_7(VAR_4);
 FUNC_1(VAR_6);
 FUNC_0(VAR_5, sizeof(VAR_5), VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_5, sizeof(VAR_5), VAR_4);
 FUNC_6(VAR_5);

 FUNC_2(VAR_6, VAR_5, FUNC_5(VAR_5));

 FUNC_8(VAR_2, sizeof(IP));
 VAR_2->addr[0] = 172;
 VAR_2->addr[1] = 31;
 VAR_2->addr[2] = VAR_6[0] % 254 + 1;
 VAR_2->addr[3] = VAR_6[1] % 254 + 1;
}
