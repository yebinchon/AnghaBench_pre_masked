
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hue; } ;
struct TYPE_4__ {unsigned short hue; } ;
struct uvd {int videosize; TYPE_2__ vpic; int video_endp; int dev; TYPE_1__ vpic_old; } ;
struct TYPE_6__ {int camera_model; } ;





 TYPE_3__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (unsigned short,int,int) ;



 int FUNC_2 (struct uvd*,int ,unsigned short) ;
 int FUNC_3 (struct uvd*,int,unsigned short) ;
 int FUNC_4 (struct uvd*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct uvd *VAR_1)
{
 switch (FUNC_0(VAR_1)->camera_model) {
 case 133:
 {
  unsigned short VAR_2 = VAR_1->vpic.hue >> 9;
  if (VAR_1->vpic_old.hue == VAR_2)
   return;
  VAR_1->vpic_old.hue = VAR_2;
  FUNC_2(VAR_1, VAR_0, VAR_2);

  break;
 }
 case 132:
 {
  break;
 }
 case 131:
 {
  unsigned short VAR_3, VAR_4, VAR_5, VAR_6;
  VAR_6 = 20 + (VAR_1->vpic.hue >> 9);
  switch (VAR_1->videosize) {
  case 130:
   VAR_3 = 90;
   VAR_4 = 166;
   VAR_5 = 175;
   break;
  case 129:
   VAR_3 = 70;
   VAR_4 = 166;
   VAR_5 = 185;
   break;
  case 128:
   VAR_3 = 160;
   VAR_4 = 175;
   VAR_5 = 185;
   break;
  default:
   VAR_3 = 120;
   VAR_4 = 166;
   VAR_5 = 175;
   break;
  }
  FUNC_1(VAR_6, 1, 0x7f);

  FUNC_4(VAR_1, 0, 0x00aa, 0x012d);
  FUNC_4(VAR_1, 0, 0x001e, 0x012f);
  FUNC_4(VAR_1, 0, 0xd141, 0x0124);
  FUNC_4(VAR_1, 0, VAR_4, 0x0127);
  FUNC_4(VAR_1, 0, VAR_3, 0x012e);
  FUNC_4(VAR_1, 0, VAR_5, 0x0130);
  FUNC_4(VAR_1, 0, 0x8a28, 0x0124);
  FUNC_4(VAR_1, 0, VAR_6, 0x012d);
  FUNC_4(VAR_1, 0, 0xf545, 0x0124);
  break;
 }
 default:
  break;
 }
}
