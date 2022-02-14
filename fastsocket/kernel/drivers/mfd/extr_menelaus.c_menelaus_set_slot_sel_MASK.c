
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;

int FUNC_4(int VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->lock);
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  goto out;
 VAR_3 |= 0x02;
 if (VAR_2)
  VAR_3 |= 1 << 5;
 else
  VAR_3 &= ~(1 << 5);
 VAR_3 = FUNC_1(VAR_0, VAR_3);
out:
 FUNC_3(&VAR_1->lock);
 return VAR_3;
}
