
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vp3054_i2c_state {int adap; } ;
struct cx8802_dev {TYPE_1__* core; struct vp3054_i2c_state* vp3054; } ;
struct TYPE_2__ {scalar_t__ boardnr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vp3054_i2c_state*) ;

void FUNC_2(struct cx8802_dev *VAR_1)
{
 struct vp3054_i2c_state *VAR_2 = VAR_1->vp3054;

 if (VAR_2 == ((void*)0) ||
     VAR_1->core->boardnr != VAR_0)
  return;

 FUNC_0(&VAR_2->adap);
 FUNC_1(VAR_2);
}
