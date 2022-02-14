
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 != 1 && VAR_3 != 2)
  return -VAR_0;
 FUNC_2(&VAR_2->lock);
 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 < 0) {
  FUNC_3(&VAR_2->lock);
  return VAR_5;
 }
 VAR_6 = VAR_5;
 if (VAR_3 == 1) {
  if (VAR_4)
   VAR_6 |= 1 << 2;
  else
   VAR_6 &= ~(1 << 2);
 } else {
  if (VAR_4)
   VAR_6 |= 1 << 3;
  else
   VAR_6 &= ~(1 << 3);
 }
 VAR_5 = FUNC_1(VAR_1, VAR_6);
 FUNC_3(&VAR_2->lock);

 return VAR_5;
}
