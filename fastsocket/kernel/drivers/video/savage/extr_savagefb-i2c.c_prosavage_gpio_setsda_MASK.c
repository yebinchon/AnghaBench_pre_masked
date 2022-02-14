
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_i2c_chan {int par; int reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_2, int VAR_3)
{
 struct savagefb_i2c_chan *VAR_4 = VAR_2;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_4->reg, VAR_4->par);
 VAR_5 |= VAR_0;
 if (VAR_3) {
  VAR_5 |= VAR_1;
 } else {
  VAR_5 &= ~VAR_1;
 }

 FUNC_1(VAR_4->reg, VAR_5, VAR_4->par);
}
