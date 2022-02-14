
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Mask; scalar_t__ Ip2; } ;
typedef TYPE_1__ PRIVATE_IP_SUBNET ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_0 ;

bool FUNC_2(UINT VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 != ((void*)0))
 {
  LIST *VAR_3 = VAR_0;
  UINT VAR_4;

  for (VAR_4 = 0;VAR_4 < FUNC_1(VAR_3);VAR_4++)
  {
   PRIVATE_IP_SUBNET *VAR_5 = FUNC_0(VAR_3, VAR_4);

   if ((VAR_1 & VAR_5->Mask) == VAR_5->Ip2)
   {
    VAR_2 = 1;
   }
  }
 }

 return VAR_2;
}
