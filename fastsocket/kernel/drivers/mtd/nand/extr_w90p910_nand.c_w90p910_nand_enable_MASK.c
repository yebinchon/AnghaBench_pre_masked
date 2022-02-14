
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_nand {int lock; scalar_t__ reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct w90p910_nand *VAR_11)
{
 unsigned int VAR_12;
 FUNC_2(&VAR_11->lock);
 FUNC_1(VAR_8, (VAR_11->reg + VAR_6));

 VAR_12 = FUNC_0(VAR_11->reg + VAR_6);

 if (!(VAR_12 & VAR_4))
  FUNC_1(VAR_12 | VAR_4, VAR_6);

 VAR_12 = FUNC_0(VAR_11->reg + VAR_7);

 VAR_12 &= ~(VAR_9|VAR_5|VAR_1|VAR_0|VAR_2|VAR_3);
 VAR_12 |= VAR_10;

 FUNC_1(VAR_12, VAR_11->reg + VAR_7);

 FUNC_3(&VAR_11->lock);
}
