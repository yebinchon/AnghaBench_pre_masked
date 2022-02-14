
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int i2c_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct w9966_dev*) ;
 int FUNC_3 (struct w9966_dev*,int,int ) ;

__attribute__((used)) static inline int FUNC_4(struct w9966_dev* VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3)
  VAR_2->i2c_state |= VAR_0;
 else
  VAR_2->i2c_state &= ~VAR_0;

 FUNC_3(VAR_2, 0x18, VAR_2->i2c_state);
 FUNC_1(5);


 if (VAR_3) {
  VAR_4 = VAR_1 + 100;
  while (!FUNC_2(VAR_2)) {
   if (FUNC_0(VAR_1, VAR_4))
    return -1;
  }
 }
 return 0;
}
