
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ Id; } ;
typedef TYPE_1__ SECURE_DEVICE ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

bool FUNC_2(UINT VAR_1)
{
 UINT VAR_2;

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  SECURE_DEVICE *VAR_3 = FUNC_0(VAR_0, VAR_2);

  if (VAR_3->Id == VAR_1)
  {
   return 1;
  }
 }

 return 0;
}
