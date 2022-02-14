
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_smbus {TYPE_1__* dev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct amd_smbus *VAR_3)
{
 int VAR_4 = 500;

 while ((FUNC_1(VAR_3->base + VAR_0) & VAR_1) && --VAR_4)
  FUNC_2(1);

 if (!VAR_4) {
  FUNC_0(&VAR_3->dev->dev,
    "Timeout while waiting for IBF to clear\n");
  return -VAR_2;
 }

 return 0;
}
