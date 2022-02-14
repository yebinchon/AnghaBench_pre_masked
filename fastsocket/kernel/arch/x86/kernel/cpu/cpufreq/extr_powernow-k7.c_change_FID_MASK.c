
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int FID; int FIDC; scalar_t__ VIDC; int SGTC; } ;
union msr_fidvidctl {int val; TYPE_1__ bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 union msr_fidvidctl VAR_3;

 FUNC_0(VAR_0, VAR_3.val);
 if (VAR_3.bits.FID != VAR_2) {
  VAR_3.bits.SGTC = VAR_1;
  VAR_3.bits.FID = VAR_2;
  VAR_3.bits.VIDC = 0;
  VAR_3.bits.FIDC = 1;
  FUNC_1(VAR_0, VAR_3.val);
 }
}
