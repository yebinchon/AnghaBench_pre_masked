
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hold; } ;
typedef TYPE_1__ VPADStatus ;
typedef scalar_t__ VPADReadError ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(void)
{
   VPADStatus VAR_3;
   VPADReadError VAR_4;

   FUNC_0(VAR_0, &VAR_3, 1, &VAR_4);

   if (VAR_4)
      return;

   FUNC_3(&VAR_2, VAR_3.hold);
   FUNC_2(VAR_1, &VAR_3);
   FUNC_4(VAR_1, &VAR_2, &VAR_3);
   FUNC_1(VAR_3.hold);
}
