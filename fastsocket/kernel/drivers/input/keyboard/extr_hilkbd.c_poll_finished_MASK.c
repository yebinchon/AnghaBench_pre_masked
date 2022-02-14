
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; scalar_t__ curdev; int dev; } ;


 TYPE_1__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;
 int VAR_3;
 unsigned char VAR_4;

 switch (VAR_0.data[0]) {
 case 0x40:
  VAR_2 = (VAR_0.data[1] & 1) == 0;
  VAR_4 = VAR_0.data[1] >> 1;
  VAR_3 = VAR_1[VAR_4];
  FUNC_0(VAR_0.dev, VAR_3, VAR_2);
  break;
 }
 VAR_0.curdev = 0;
}
