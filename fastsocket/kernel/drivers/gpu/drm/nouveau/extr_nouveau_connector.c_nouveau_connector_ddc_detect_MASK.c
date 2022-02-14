
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_i2c_port {int dummy; } ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,int ,int) ;int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;} ;
struct nouveau_encoder {struct nouveau_i2c_port* i2c; } ;
struct nouveau_drm {int device; } ;
struct nouveau_connector {scalar_t__ type; } ;
struct drm_mode_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int* encoder_ids; struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_mode_object* FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (int) ;
 struct nouveau_connector* FUNC_2 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 struct nouveau_encoder* FUNC_4 (int ) ;
 struct nouveau_gpio* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct nouveau_i2c_port*,int) ;
 int FUNC_7 (struct drm_mode_object*) ;
 int FUNC_8 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_9 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_10 (struct nouveau_gpio*,int ,int ,int,int) ;

__attribute__((used)) static struct nouveau_i2c_port *
FUNC_11(struct drm_connector *VAR_5,
        struct nouveau_encoder **VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct nouveau_connector *VAR_8 = FUNC_2(VAR_5);
 struct nouveau_drm *VAR_9 = FUNC_3(VAR_7);
 struct nouveau_gpio *VAR_10 = FUNC_5(VAR_9->device);
 struct nouveau_i2c_port *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = -VAR_4;





 if (VAR_8->type == VAR_0) {
  VAR_13 = VAR_10->get(VAR_10, 0, VAR_1, 0xff);
  if (VAR_13 == 0) {
   VAR_10->set(VAR_10, 0, VAR_1, 0xff, 1);
   FUNC_1(300);
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  struct nouveau_encoder *VAR_14;
  struct drm_mode_object *VAR_15;
  int VAR_16;

  VAR_16 = VAR_5->encoder_ids[VAR_12];
  if (!VAR_16)
   break;

  VAR_15 = FUNC_0(VAR_7, VAR_16, VAR_3);
  if (!VAR_15)
   continue;
  VAR_14 = FUNC_4(FUNC_7(VAR_15));

  VAR_11 = VAR_14->i2c;
  if (VAR_11 && FUNC_6(VAR_11, 0x50)) {
   *VAR_6 = VAR_14;
   break;
  }

  VAR_11 = ((void*)0);
 }




 if (!VAR_11 && VAR_13 == 0)
  VAR_10->set(VAR_10, 0, VAR_1, 0xff, VAR_13);

 return VAR_11;
}
