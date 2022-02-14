
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct TYPE_3__ {int sdi; int pd; int vn; } ;
struct TYPE_4__ {TYPE_1__ spd; } ;
struct dip_infoframe {TYPE_2__ body; int len; int ver; int type; } ;
typedef int spd_if ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_encoder*,struct dip_infoframe*) ;
 int FUNC_1 (struct dip_infoframe*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_4)
{
 struct dip_infoframe VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.type = VAR_2;
 VAR_5.ver = VAR_3;
 VAR_5.len = VAR_0;
 FUNC_2(VAR_5.body.spd.vn, "Intel");
 FUNC_2(VAR_5.body.spd.pd, "Integrated gfx");
 VAR_5.body.spd.sdi = VAR_1;

 FUNC_0(VAR_4, &VAR_5);
}
