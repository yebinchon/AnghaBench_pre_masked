
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {TYPE_1__* i2c; } ;
struct TYPE_2__ {int * rinfo; int adapter; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct radeonfb_info *VAR_0)
{
 if (VAR_0->i2c[0].rinfo)
  FUNC_0(&VAR_0->i2c[0].adapter);
 VAR_0->i2c[0].rinfo = ((void*)0);

 if (VAR_0->i2c[1].rinfo)
  FUNC_0(&VAR_0->i2c[1].adapter);
 VAR_0->i2c[1].rinfo = ((void*)0);

 if (VAR_0->i2c[2].rinfo)
  FUNC_0(&VAR_0->i2c[2].adapter);
 VAR_0->i2c[2].rinfo = ((void*)0);

 if (VAR_0->i2c[3].rinfo)
  FUNC_0(&VAR_0->i2c[3].adapter);
 VAR_0->i2c[3].rinfo = ((void*)0);
}
