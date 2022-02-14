
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int whiteness; int colour; int hue; int contrast; int brightness; } ;
struct uvd {TYPE_1__ vpic; int dev; scalar_t__ user_data; } ;
struct qcm {size_t size; } ;
struct TYPE_7__ {int cmd; } ;
struct TYPE_6__ {int reg; int val; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uvd*,int ) ;
 int FUNC_4 (struct uvd*,int ,int ,int ,int ) ;
 int FUNC_5 (struct uvd*,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct uvd *VAR_4)
{
 struct qcm *VAR_5 = (struct qcm *) VAR_4->user_data;
 int VAR_6;
 int VAR_7;

 for (VAR_7=0; VAR_7 < FUNC_0(VAR_3) ; VAR_7++) {
  FUNC_1(VAR_6, FUNC_6(VAR_4->dev,
     VAR_3[VAR_7].reg,
     VAR_3[VAR_7].val));
 }

 FUNC_1(VAR_6, FUNC_7(VAR_4->dev, 0x15c1,
    FUNC_2(VAR_0)));
 FUNC_1(VAR_6, FUNC_6(VAR_4->dev, 0x15c3, 0x08));
 FUNC_1(VAR_6, FUNC_6(VAR_4->dev, 0x143f, 0x01));

 FUNC_1(VAR_6, FUNC_6(VAR_4->dev, VAR_1, 0x00));

 FUNC_1(VAR_6, FUNC_5(VAR_4, VAR_2[VAR_5->size].cmd));

 FUNC_1(VAR_6, FUNC_4(VAR_4, VAR_4->vpic.brightness,
   VAR_4->vpic.contrast, VAR_4->vpic.hue, VAR_4->vpic.colour));

 FUNC_1(VAR_6, FUNC_3(VAR_4, VAR_4->vpic.whiteness));
 FUNC_1(VAR_6, FUNC_5(VAR_4, VAR_2[VAR_5->size].cmd));

 return 0;
}
