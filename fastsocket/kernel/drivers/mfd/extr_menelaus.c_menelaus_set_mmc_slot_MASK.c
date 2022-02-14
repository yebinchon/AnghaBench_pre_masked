
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;

int FUNC_4(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_4 != 1 && VAR_4 != 2)
  return -VAR_0;
 if (VAR_6 >= 3)
  return -VAR_0;

 FUNC_2(&VAR_3->lock);

 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8 < 0)
  goto out;
 VAR_9 = VAR_8;
 if (VAR_4 == 1) {
  if (VAR_7)
   VAR_9 |= (1 << 4) | (1 << 6);
  else
   VAR_9 &= ~((1 << 4) | (1 << 6));
 } else {
  if (VAR_7)
   VAR_9 |= (1 << 5) | (1 << 7);
  else
   VAR_9 &= ~((1 << 5) | (1 << 7));
 }
 VAR_8 = FUNC_1(VAR_1, VAR_9);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_0(VAR_2);
 if (VAR_8 < 0)
  goto out;
 VAR_9 = VAR_8;
 if (VAR_4 == 1) {
  if (VAR_5)
   VAR_9 |= 1 << 0;
  else
   VAR_9 &= ~(1 << 0);
 } else {
  int VAR_10;

  if (VAR_5)
   VAR_8 |= 1 << 1;
  else
   VAR_8 &= ~(1 << 1);
  VAR_10 = FUNC_0(VAR_1);
  VAR_10 &= ~0x03;
  VAR_10 |= VAR_6;
  VAR_8 = FUNC_1(VAR_1, VAR_10);
  if (VAR_8 < 0)
   goto out;
 }

 VAR_9 &= ~(0x03 << 2);
 VAR_8 = FUNC_1(VAR_2, VAR_9);
out:
 FUNC_3(&VAR_3->lock);
 return VAR_8;
}
