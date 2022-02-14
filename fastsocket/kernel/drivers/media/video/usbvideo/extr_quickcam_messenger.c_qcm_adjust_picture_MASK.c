
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contrast; scalar_t__ hue; scalar_t__ colour; scalar_t__ brightness; scalar_t__ whiteness; } ;
struct uvd {TYPE_1__ vpic; scalar_t__ user_data; } ;
struct qcm {scalar_t__ contrast; scalar_t__ hue; scalar_t__ colour; scalar_t__ brightness; scalar_t__ whiteness; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (struct uvd*,scalar_t__) ;
 int FUNC_4 (struct uvd*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct uvd*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uvd *VAR_0)
{
 int VAR_1;
 struct qcm *VAR_2 = (struct qcm *) VAR_0->user_data;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("can't turn camera off. abandoning pic adjustment");
  return;
 }




 if ((VAR_2->contrast != VAR_0->vpic.contrast) ||
  (VAR_2->hue != VAR_0->vpic.hue) ||
  (VAR_2->colour != VAR_0->vpic.colour)) {
  VAR_2->contrast = VAR_0->vpic.contrast;
  VAR_2->hue = VAR_0->vpic.hue;
  VAR_2->colour = VAR_0->vpic.colour;
  VAR_1 = FUNC_4(VAR_0, VAR_2->hue, VAR_2->colour,
      VAR_2->contrast);
  if (VAR_1) {
   FUNC_0("can't set gains. abandoning pic adjustment");
   return;
  }
 }

 if (VAR_2->brightness != VAR_0->vpic.brightness) {
  VAR_2->brightness = VAR_0->vpic.brightness;
  VAR_1 = FUNC_3(VAR_0, VAR_2->brightness);
  if (VAR_1) {
   FUNC_0("can't set exposure. abandoning pic adjustment");
   return;
  }
 }

 if (VAR_2->whiteness != VAR_0->vpic.whiteness) {
  VAR_2->whiteness = VAR_0->vpic.whiteness;
  FUNC_5(VAR_0, VAR_2->whiteness);
  if (VAR_1) {
   FUNC_0("can't set shutter. abandoning pic adjustment");
   return;
  }
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("can't reenable camera. pic adjustment failed");
  return;
 }
}
