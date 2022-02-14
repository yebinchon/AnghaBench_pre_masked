
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_nand {int lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct w90p910_nand *VAR_2)
{
 unsigned int VAR_3;
 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_1);
 VAR_3 &= VAR_0;
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
