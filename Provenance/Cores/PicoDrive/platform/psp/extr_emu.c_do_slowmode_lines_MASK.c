
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned short*,unsigned char*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4)
{
 int VAR_5 = 0, VAR_6 = (VAR_0.video.reg[12]&1) ? 320 : 256;
 unsigned short *VAR_7 = (unsigned short *)VAR_2 + 512*240/2;
 unsigned char *VAR_8 = (unsigned char *)VAR_1 + 16;
 if (!(VAR_0.video.reg[1]&8)) { VAR_5 = 8; VAR_7 += 512*8; VAR_8 += 512*8; }

 for (; VAR_5 < VAR_4; VAR_5++, VAR_7+=512, VAR_8+=512)
  FUNC_0(VAR_7, VAR_8, VAR_3, VAR_6);
}
