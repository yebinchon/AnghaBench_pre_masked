
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int i2c_state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct w9966_dev*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct w9966_dev* VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->i2c_state |= VAR_0;
 else
  VAR_1->i2c_state &= ~VAR_0;

 FUNC_1(VAR_1, 0x18, VAR_1->i2c_state);
 FUNC_0(5);
}
