
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int video_endp; int dev; } ;
struct TYPE_2__ {int camera_model; } ;






 TYPE_1__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (struct uvd*) ;
 int FUNC_4 (struct uvd*) ;
 int FUNC_5 (struct uvd*,int ,int,int) ;
 int FUNC_6 (struct uvd*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct uvd *VAR_0, int VAR_1)
{
 switch (FUNC_0(VAR_0)->camera_model) {
 case 131:
  if (VAR_1)
   FUNC_6(VAR_0);
  FUNC_5(VAR_0, 0, 0x0001, 0x0114);
  FUNC_5(VAR_0, 0, 0x00c0, 0x010c);
  FUNC_7(VAR_0->dev, FUNC_8(VAR_0->dev, VAR_0->video_endp));
  FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_6(VAR_0);
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0);
  break;
 }
}
