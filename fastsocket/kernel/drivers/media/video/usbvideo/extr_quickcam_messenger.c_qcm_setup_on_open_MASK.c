
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int whiteness; int brightness; int contrast; int colour; int hue; } ;
struct uvd {TYPE_1__ vpic; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*,int ) ;
 int FUNC_3 (struct uvd*,int ,int ,int ) ;
 int FUNC_4 (struct uvd*,int ) ;
 int FUNC_5 (struct uvd*) ;

__attribute__((used)) static int FUNC_6(struct uvd *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_1, FUNC_3(VAR_0, VAR_0->vpic.hue,
    VAR_0->vpic.colour, VAR_0->vpic.contrast));
 FUNC_0(VAR_1, FUNC_2(VAR_0, VAR_0->vpic.brightness));
 FUNC_0(VAR_1, FUNC_4(VAR_0, VAR_0->vpic.whiteness));
 FUNC_0(VAR_1, FUNC_5(VAR_0));
 FUNC_0(VAR_1, FUNC_1(VAR_0));
 return 0;
}
