
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct brcms_c_info {int wiphy; int * ampdu; int * asi; TYPE_1__* pub; } ;
struct TYPE_2__ {int unit; } ;


 int * FUNC_0 (struct brcms_c_info*) ;
 int * FUNC_1 (struct brcms_c_info*) ;
 scalar_t__ FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static uint FUNC_4(struct brcms_c_info *VAR_0)
{
 uint VAR_1 = 0;
 uint VAR_2;
 VAR_2 = VAR_0->pub->unit;

 VAR_0->asi = FUNC_1(VAR_0);
 if (VAR_0->asi == ((void*)0)) {
  FUNC_3(VAR_0->wiphy, "wl%d: attach: antsel_attach "
     "failed\n", VAR_2);
  VAR_1 = 44;
  goto fail;
 }

 VAR_0->ampdu = FUNC_0(VAR_0);
 if (VAR_0->ampdu == ((void*)0)) {
  FUNC_3(VAR_0->wiphy, "wl%d: attach: ampdu_attach "
     "failed\n", VAR_2);
  VAR_1 = 50;
  goto fail;
 }

 if ((FUNC_2(VAR_0) != 0)) {
  FUNC_3(VAR_0->wiphy, "wl%d: attach: stf_attach "
     "failed\n", VAR_2);
  VAR_1 = 68;
  goto fail;
 }
 fail:
 return VAR_1;
}
