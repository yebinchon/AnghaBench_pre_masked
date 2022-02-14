
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {int cpu_type; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct s3c2410_nand_info*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct s3c2410_nand_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

  switch (VAR_2->cpu_type) {
  case 130:
 default:
  break;

  case 128:
  case 129:


  FUNC_1(VAR_1, VAR_2->regs + VAR_0);
 }

 return 0;
}
