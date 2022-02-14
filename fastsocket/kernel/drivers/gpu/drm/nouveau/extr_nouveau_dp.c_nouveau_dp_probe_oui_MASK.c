
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nouveau_i2c_port {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int,int) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_i2c_port*,int ,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct drm_device *VAR_4, struct nouveau_i2c_port *VAR_5,
       u8 *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_1(VAR_4);
 u8 VAR_8[3];

 if (!(VAR_6[VAR_1] & VAR_2))
  return;

 if (!FUNC_2(VAR_5, VAR_3, VAR_8, 3))
  FUNC_0(VAR_7, "Sink OUI: %02hx%02hx%02hx\n",
        VAR_8[0], VAR_8[1], VAR_8[2]);

 if (!FUNC_2(VAR_5, VAR_0, VAR_8, 3))
  FUNC_0(VAR_7, "Branch OUI: %02hx%02hx%02hx\n",
        VAR_8[0], VAR_8[1], VAR_8[2]);

}
