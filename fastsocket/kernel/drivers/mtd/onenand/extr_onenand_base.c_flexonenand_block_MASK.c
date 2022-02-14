
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int* diesize; unsigned int* boundary; int erase_shift; unsigned int density_mask; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct onenand_chip*) ;

__attribute__((used)) static unsigned FUNC_1(struct onenand_chip *VAR_0, loff_t VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4 = 0;

 if (FUNC_0(VAR_0) && VAR_1 >= VAR_0->diesize[0]) {
  VAR_4 = 1;
  VAR_1 -= VAR_0->diesize[0];
 }

 VAR_2 = VAR_0->boundary[VAR_4];

 VAR_3 = VAR_1 >> (VAR_0->erase_shift - 1);
 if (VAR_3 > VAR_2)
  VAR_3 = (VAR_3 + VAR_2 + 1) >> 1;

 VAR_3 += VAR_4 ? VAR_0->density_mask : 0;
 return VAR_3;
}
