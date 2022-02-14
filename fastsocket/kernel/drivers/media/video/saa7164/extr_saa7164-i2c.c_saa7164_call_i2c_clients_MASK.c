
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7164_i2c {scalar_t__ i2c_rc; int i2c_adap; } ;


 int FUNC_0 (int *,unsigned int,void*) ;

void FUNC_1(struct saa7164_i2c *VAR_0, unsigned int VAR_1,
 void *VAR_2)
{
 if (VAR_0->i2c_rc != 0)
  return;

 FUNC_0(&VAR_0->i2c_adap, VAR_1, VAR_2);
}
