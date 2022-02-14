
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(unsigned VAR_6, unsigned VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;
 u32 VAR_10 = (VAR_6 << 8) | VAR_7;
 int VAR_11 = -VAR_0;

 if (VAR_6 >= 10 || VAR_7 == 0 || VAR_7 > 255)
  return -VAR_1;

 FUNC_2(&VAR_5->lock, VAR_8);
 VAR_9 = FUNC_0(VAR_5, VAR_4);
 if ((VAR_9 & 0xffff) == 0) {
  VAR_9 |= VAR_10;
  VAR_11 = VAR_2;
 } else if ((VAR_9 & (0xffff << 16)) == 0) {
  VAR_9 |= VAR_10 << 16;
  VAR_11 = VAR_3;
 }
 if (VAR_11 > 0)
  FUNC_1(VAR_5, VAR_4, VAR_9);
 FUNC_3(&VAR_5->lock, VAR_8);
 return VAR_11;
}
