
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int density_mask; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct onenand_chip *VAR_1, int VAR_2)
{

 if (VAR_2 & VAR_1->density_mask)
  return VAR_0 | (VAR_2 ^ VAR_1->density_mask);

 return VAR_2;
}
