
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int density_mask; int* diesize; int* boundary; int erase_shift; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct onenand_chip*) ;

__attribute__((used)) static loff_t FUNC_1(struct onenand_chip *VAR_0, int VAR_1)
{
 loff_t VAR_2 = 0;
 int VAR_3 = 0, VAR_4;

 if (FUNC_0(VAR_0) && VAR_1 >= VAR_0->density_mask) {
  VAR_1 -= VAR_0->density_mask;
  VAR_3 = 1;
  VAR_2 = VAR_0->diesize[0];
 }

 VAR_4 = VAR_0->boundary[VAR_3];
 VAR_2 += (loff_t)VAR_1 << (VAR_0->erase_shift - 1);
 if (VAR_1 > (VAR_4 + 1))
  VAR_2 += (loff_t)(VAR_1 - VAR_4 - 1) << (VAR_0->erase_shift - 1);
 return VAR_2;
}
