
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_group {scalar_t__ num_encoders; scalar_t__ num_connectors; scalar_t__ num_crtcs; int id_list; } ;
struct TYPE_2__ {scalar_t__ num_encoder; scalar_t__ num_connector; scalar_t__ num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct drm_device *VAR_2, struct drm_mode_group *VAR_3)
{
 uint32_t VAR_4 = 0;

 VAR_4 += VAR_2->mode_config.num_crtc;
 VAR_4 += VAR_2->mode_config.num_connector;
 VAR_4 += VAR_2->mode_config.num_encoder;

 VAR_3->id_list = FUNC_0(VAR_4 * sizeof(uint32_t), VAR_1);
 if (!VAR_3->id_list)
  return -VAR_0;

 VAR_3->num_crtcs = 0;
 VAR_3->num_connectors = 0;
 VAR_3->num_encoders = 0;
 return 0;
}
