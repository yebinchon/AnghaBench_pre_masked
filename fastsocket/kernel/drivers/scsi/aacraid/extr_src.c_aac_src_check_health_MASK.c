
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {int dummy; } ;
struct TYPE_2__ {int OMR; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2.OMR);




 if (FUNC_1(VAR_5 & VAR_3))
  return -1;




 if (FUNC_1(VAR_5 & VAR_0))
  return (VAR_5 >> 16) & 0xFF;



 if (FUNC_1(!(VAR_5 & VAR_1)))
  return -3;



 return 0;
}
