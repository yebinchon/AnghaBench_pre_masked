
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ i2c_linked; int i2c_adap; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct pvr2_hdw *VAR_0)
{
 if (VAR_0->i2c_linked) {
  FUNC_0(&VAR_0->i2c_adap);
  VAR_0->i2c_linked = 0;
 }
}
