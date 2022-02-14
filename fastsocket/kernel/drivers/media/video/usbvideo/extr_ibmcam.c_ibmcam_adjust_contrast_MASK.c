
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned char contrast; } ;
struct TYPE_4__ {int contrast; } ;
struct uvd {int video_endp; int dev; TYPE_2__ vpic_old; TYPE_1__ vpic; } ;
struct TYPE_6__ {int camera_model; } ;






 TYPE_3__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct uvd*,int ,unsigned char) ;
 int FUNC_3 (struct uvd*,int,unsigned short) ;
 int FUNC_4 (struct uvd*) ;
 int FUNC_5 (struct uvd*,int ,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct uvd *VAR_1)
{
 unsigned char VAR_2 = VAR_1->vpic.contrast >> 12;
 unsigned char VAR_3;

 if (VAR_2 >= 16)
  VAR_2 = 15;
 VAR_3 = 15 - VAR_2;
 if (VAR_3 == VAR_1->vpic_old.contrast)
  return;
 VAR_1->vpic_old.contrast = VAR_3;
 switch (FUNC_0(VAR_1)->camera_model) {
 case 131:
 {
  const int VAR_4 = 5;
  int VAR_5;
  for (VAR_5=0; VAR_5 < VAR_4; VAR_5++) {
   FUNC_2(VAR_1, VAR_0, VAR_3);
   FUNC_4(VAR_1);
  }
  break;
 }
 case 130:
 case 128:

  break;
 case 129:
 {
  static const struct {
   unsigned short cv1;
   unsigned short cv2;
   unsigned short cv3;
  } VAR_6[7] = {
   { 0x05, 0x05, 0x0f },
   { 0x04, 0x04, 0x16 },
   { 0x02, 0x03, 0x16 },
   { 0x02, 0x08, 0x16 },
   { 0x01, 0x0c, 0x16 },
   { 0x01, 0x0e, 0x16 },
   { 0x01, 0x10, 0x16 }
  };
  int VAR_7 = VAR_2 / 2;
  FUNC_1(VAR_7, 0, 6);
  FUNC_5(VAR_1, 0, 0x0000, 0x010c);
  FUNC_3(VAR_1, 0x0067, VAR_6[VAR_7].cv1);
  FUNC_3(VAR_1, 0x005b, VAR_6[VAR_7].cv2);
  FUNC_3(VAR_1, 0x005c, VAR_6[VAR_7].cv3);
  FUNC_5(VAR_1, 0, 0x0001, 0x0114);
  FUNC_5(VAR_1, 0, 0x00c0, 0x010c);
  FUNC_6(VAR_1->dev, FUNC_7(VAR_1->dev, VAR_1->video_endp));
  break;
 }
 default:
  break;
 }
}
