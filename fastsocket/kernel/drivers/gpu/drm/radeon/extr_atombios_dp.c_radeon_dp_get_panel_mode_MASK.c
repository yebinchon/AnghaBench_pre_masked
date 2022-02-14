
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_device {int dummy; } ;
struct radeon_connector {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct radeon_connector*,int ) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;

int FUNC_4(struct drm_encoder *VAR_8,
        struct drm_connector *VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_connector *VAR_12 = FUNC_3(VAR_9);
 int VAR_13 = VAR_1;
 u16 VAR_14 = FUNC_1(VAR_9);
 u8 VAR_15;

 if (!FUNC_0(VAR_11))
  return VAR_13;

 if (VAR_14 != VAR_5) {

  VAR_15 = FUNC_2(VAR_12, VAR_0);
  if (VAR_15 & 1)
   VAR_13 = VAR_3;
  else if ((VAR_14 == VAR_6) ||
    (VAR_14 == VAR_7))
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_1;
 } else if (VAR_9->connector_type == VAR_4) {

  VAR_15 = FUNC_2(VAR_12, VAR_0);
  if (VAR_15 & 1)
   VAR_13 = VAR_3;
 }

 return VAR_13;
}
