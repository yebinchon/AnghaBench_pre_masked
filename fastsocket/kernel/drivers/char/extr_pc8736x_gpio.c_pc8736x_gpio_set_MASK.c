
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void FUNC_3(unsigned VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_6 &= 0x1f;
 VAR_8 = VAR_6 >> 3;
 VAR_9 = VAR_6 & 7;
 VAR_10 = FUNC_1(VAR_2 + VAR_5[VAR_8] + VAR_1);

 FUNC_0(&VAR_4->dev, "addr:%x cur:%x bit-pos:%d cur-bit:%x + new:%d -> bit-new:%d\n",
  VAR_2 + VAR_5[VAR_8] + VAR_1,
  VAR_10, VAR_9, (VAR_10 & ~(1 << VAR_9)), VAR_7, (VAR_7 << VAR_9));

 VAR_7 = (VAR_10 & ~(1 << VAR_9)) | (VAR_7 << VAR_9);

 FUNC_0(&VAR_4->dev, "gpio_set(minor:%d port:%d bit:%d)"
  " %2x -> %2x\n", VAR_6, VAR_8, VAR_9, VAR_10, VAR_7);

 FUNC_2(VAR_7, VAR_2 + VAR_5[VAR_8] + VAR_1);

 VAR_10 = FUNC_1(VAR_2 + VAR_5[VAR_8] + VAR_1);
 VAR_7 = FUNC_1(VAR_2 + VAR_5[VAR_8] + VAR_0);

 FUNC_0(&VAR_4->dev, "wrote %x, read: %x\n", VAR_10, VAR_7);
 VAR_3[VAR_8] = VAR_7;
}
