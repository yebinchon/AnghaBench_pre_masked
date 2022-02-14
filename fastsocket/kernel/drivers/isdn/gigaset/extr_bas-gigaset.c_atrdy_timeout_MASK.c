
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; TYPE_1__ hw; } ;
struct bas_cardstate {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (struct bas_cardstate*,int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct cardstate *VAR_3 = (struct cardstate *) VAR_2;
 struct bas_cardstate *VAR_4 = VAR_3->hw.bas;

 FUNC_0(VAR_3->dev, "timeout waiting for HD_READY_SEND_ATDATA\n");


 FUNC_2(VAR_4, VAR_0, VAR_1);
 FUNC_1(VAR_3);
}
