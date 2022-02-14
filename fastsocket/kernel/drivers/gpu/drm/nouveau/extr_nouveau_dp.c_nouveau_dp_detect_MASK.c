
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_i2c_port {int dummy; } ;
struct TYPE_6__ {int* dpcd; int link_bw; int link_nr; } ;
struct nouveau_encoder {TYPE_3__ dp; TYPE_2__* dcb; struct nouveau_i2c_port* i2c; } ;
struct nouveau_drm {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int link_nr; int link_bw; } ;
struct TYPE_5__ {TYPE_1__ dpconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int,...) ;
 int FUNC_1 (struct drm_device*,struct nouveau_i2c_port*,int*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 struct nouveau_encoder* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct nouveau_i2c_port*,int ,int*,int) ;

bool
FUNC_5(struct drm_encoder *VAR_2)
{
 struct nouveau_encoder *VAR_3 = FUNC_3(VAR_2);
 struct drm_device *VAR_4 = VAR_2->dev;
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_4);
 struct nouveau_i2c_port *VAR_6;
 u8 *VAR_7 = VAR_3->dp.dpcd;
 int VAR_8;

 VAR_6 = VAR_3->i2c;
 if (!VAR_6)
  return 0;

 VAR_8 = FUNC_4(VAR_6, VAR_0, VAR_7, 8);
 if (VAR_8)
  return 0;

 VAR_3->dp.link_bw = 27000 * VAR_7[1];
 VAR_3->dp.link_nr = VAR_7[2] & VAR_1;

 FUNC_0(VAR_5, "display: %dx%d dpcd 0x%02x\n",
       VAR_3->dp.link_nr, VAR_3->dp.link_bw, VAR_7[0]);
 FUNC_0(VAR_5, "encoder: %dx%d\n",
       VAR_3->dcb->dpconf.link_nr,
       VAR_3->dcb->dpconf.link_bw);

 if (VAR_3->dcb->dpconf.link_nr < VAR_3->dp.link_nr)
  VAR_3->dp.link_nr = VAR_3->dcb->dpconf.link_nr;
 if (VAR_3->dcb->dpconf.link_bw < VAR_3->dp.link_bw)
  VAR_3->dp.link_bw = VAR_3->dcb->dpconf.link_bw;

 FUNC_0(VAR_5, "maximum: %dx%d\n",
       VAR_3->dp.link_nr, VAR_3->dp.link_bw);

 FUNC_1(VAR_4, VAR_6, VAR_7);

 return 1;
}
