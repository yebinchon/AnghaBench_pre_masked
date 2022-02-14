
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Masked; int SubnetMask; int IpAddress; } ;
typedef int IP ;
typedef TYPE_1__ AC ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

bool FUNC_5(IP *VAR_1, AC *VAR_2)
{
 UINT VAR_3, VAR_4, VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0) != 0)
 {
  return 0;
 }

 if (FUNC_4(VAR_1))
 {

  VAR_3 = FUNC_3(VAR_1);
  VAR_4 = FUNC_3(&VAR_2->IpAddress);
  VAR_5 = FUNC_3(&VAR_2->SubnetMask);

  if (VAR_2->Masked == 0)
  {
   if (VAR_3 == VAR_4)
   {
    return 1;
   }
  }
  else
  {
   if ((VAR_3 & VAR_5) == (VAR_4 & VAR_5))
   {
    return 1;
   }
  }

  return 0;
 }
 else
 {

  if (VAR_2->Masked == 0)
  {
   if (FUNC_0(VAR_1, &VAR_2->IpAddress) == 0)
   {
    return 1;
   }
  }
  else
  {
   IP VAR_6, VAR_7;

   FUNC_2(&VAR_6, VAR_1, &VAR_2->SubnetMask);
   FUNC_2(&VAR_7, &VAR_2->IpAddress, &VAR_2->SubnetMask);

   if (FUNC_0(&VAR_6, &VAR_7) == 0)
   {
    return 1;
   }
  }

  return 0;
 }
}
