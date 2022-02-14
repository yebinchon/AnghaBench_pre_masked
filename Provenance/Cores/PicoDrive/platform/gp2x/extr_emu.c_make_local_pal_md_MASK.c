
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {scalar_t__ cram; TYPE_1__ video; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int*,scalar_t__) ;
 int FUNC_1 (int*,scalar_t__) ;
 int* VAR_3 ;
 int FUNC_2 (int*,int*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
 int VAR_6 = 0xc0;

 FUNC_0(VAR_3, VAR_2.cram);
 if (VAR_5)
  return 0x40;

 if (VAR_2.video.reg[0xC] & 8) {
  FUNC_1(VAR_3, VAR_2.cram);
  VAR_3[0xc0] = 0x0000c000;
  VAR_3[0xd0] = 0x00c00000;
  VAR_3[0xe0] = 0x00000000;
  VAR_3[0xf0] = 0x00ffffff;
  VAR_6 = 0x100;
 }
 else if (VAR_4 & VAR_1) {
  FUNC_0(VAR_3+0x40, VAR_0);
  FUNC_0(VAR_3+0x80, VAR_0+0x40);
 }
 else
  FUNC_2(VAR_3+0x80, VAR_3, 0x40);

 return VAR_6;
}
