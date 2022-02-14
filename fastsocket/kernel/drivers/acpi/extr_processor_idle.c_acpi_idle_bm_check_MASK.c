
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ bmisx; } ;
struct TYPE_4__ {TYPE_1__ piix4; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 VAR_3 = 0;

 if (VAR_1)
  return 0;

 FUNC_0(VAR_0, &VAR_3);
 if (VAR_3)
  FUNC_1(VAR_0, 1);





 else if (VAR_2.piix4.bmisx) {
  if ((FUNC_2(VAR_2.piix4.bmisx + 0x02) & 0x01)
      || (FUNC_2(VAR_2.piix4.bmisx + 0x0A) & 0x01))
   VAR_3 = 1;
 }
 return VAR_3;
}
