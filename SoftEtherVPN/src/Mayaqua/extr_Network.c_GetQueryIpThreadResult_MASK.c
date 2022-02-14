
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Lock; int Ip; } ;
typedef TYPE_1__ QUERYIPTHREAD ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;

bool FUNC_5(QUERYIPTHREAD *VAR_0, IP *VAR_1)
{
 bool VAR_2 = 0;
 FUNC_4(VAR_1, sizeof(IP));

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0->Lock);

 if (FUNC_1(&VAR_0->Ip, sizeof(IP)))
 {
  VAR_2 = 0;
 }
 else
 {
  FUNC_0(VAR_1, &VAR_0->Ip, sizeof(IP));
 }

 FUNC_3(VAR_0->Lock);

 return VAR_2;
}
