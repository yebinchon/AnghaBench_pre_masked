
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {scalar_t__ user_data; } ;
struct konicawc {int brightness; int white_bal; int contrast; int saturation; int sharpness; int lastframe; scalar_t__ buttonsts; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_5)
{
 struct konicawc *VAR_6 = (struct konicawc *)VAR_5->user_data;

 FUNC_0(1, "setting brightness to %d (%d)", VAR_6->brightness,
     VAR_6->brightness * 11);
 FUNC_2(VAR_5, VAR_6->brightness, VAR_0);
 FUNC_0(1, "setting white balance to %d (%d)", VAR_6->white_bal,
     VAR_6->white_bal * 11);
 FUNC_2(VAR_5, VAR_6->white_bal, VAR_4);
 FUNC_0(1, "setting contrast to %d (%d)", VAR_6->contrast,
     VAR_6->contrast * 11);
 FUNC_2(VAR_5, VAR_6->contrast, VAR_1);
 FUNC_0(1, "setting saturation to %d (%d)", VAR_6->saturation,
     VAR_6->saturation * 11);
 FUNC_2(VAR_5, VAR_6->saturation, VAR_2);
 FUNC_0(1, "setting sharpness to %d (%d)", VAR_6->sharpness,
     VAR_6->sharpness * 11);
 FUNC_2(VAR_5, VAR_6->sharpness, VAR_3);
 FUNC_1(VAR_5);
 VAR_6->lastframe = -2;
 VAR_6->buttonsts = 0;
 return 0;
}
