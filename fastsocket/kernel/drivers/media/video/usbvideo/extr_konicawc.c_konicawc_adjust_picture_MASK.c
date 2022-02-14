
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; int contrast; } ;
struct uvd {TYPE_1__ vpic; scalar_t__ user_data; } ;
struct konicawc {int brightness; int contrast; } ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (struct uvd*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct uvd *VAR_4)
{
 struct konicawc *VAR_5 = (struct konicawc *)VAR_4->user_data;

 FUNC_1(VAR_4);
 FUNC_0(1, "new brightness: %d", VAR_4->vpic.brightness);
 VAR_4->vpic.brightness = (VAR_4->vpic.brightness > VAR_0) ? VAR_0 : VAR_4->vpic.brightness;
 if(VAR_5->brightness != VAR_4->vpic.brightness / 11) {
    VAR_5->brightness = VAR_4->vpic.brightness / 11;
    FUNC_0(1, "setting brightness to %d (%d)", VAR_5->brightness,
        VAR_5->brightness * 11);
    FUNC_3(VAR_4, VAR_5->brightness, VAR_2);
 }

 FUNC_0(1, "new contrast: %d", VAR_4->vpic.contrast);
 VAR_4->vpic.contrast = (VAR_4->vpic.contrast > VAR_1) ? VAR_1 : VAR_4->vpic.contrast;
 if(VAR_5->contrast != VAR_4->vpic.contrast / 11) {
  VAR_5->contrast = VAR_4->vpic.contrast / 11;
  FUNC_0(1, "setting contrast to %d (%d)", VAR_5->contrast,
      VAR_5->contrast * 11);
  FUNC_3(VAR_4, VAR_5->contrast, VAR_3);
 }
 FUNC_2(VAR_4);
}
