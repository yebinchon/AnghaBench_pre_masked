
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* send_IPI_mask ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 if (FUNC_4(FUNC_1(VAR_2))) {
  FUNC_0(1);
  return;
 }
 VAR_1->send_IPI_mask(FUNC_2(VAR_2), VAR_0);
}
