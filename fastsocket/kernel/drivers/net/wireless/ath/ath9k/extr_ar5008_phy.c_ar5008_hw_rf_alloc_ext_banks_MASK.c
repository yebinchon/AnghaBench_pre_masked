
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ia_rows; } ;
struct ath_hw {int analogBank6Data; int dev; TYPE_1__ iniBank6; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ath_hw *VAR_2)
{
 int VAR_3 = VAR_2->iniBank6.ia_rows * sizeof(u32);

 if (FUNC_0(VAR_2))
     return 0;

 VAR_2->analogBank6Data = FUNC_1(VAR_2->dev, VAR_3, VAR_1);
 if (!VAR_2->analogBank6Data)
  return -VAR_0;

 return 0;
}
