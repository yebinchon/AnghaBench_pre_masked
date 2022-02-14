
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dvo_device {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_1 (struct intel_dvo_device*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum drm_connector_status FUNC_2(struct intel_dvo_device *VAR_8)
{
 uint8_t VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_8, VAR_2, &VAR_10);

 VAR_11 = VAR_10;
 VAR_11 &= ~VAR_5;
 VAR_11 |= VAR_3 | VAR_4;

 FUNC_1(VAR_8, VAR_2, VAR_11);

 FUNC_0(VAR_8, VAR_1, &VAR_9);

 FUNC_1(VAR_8, VAR_2, VAR_10);

 if (VAR_9 & VAR_0)
  return VAR_6;
 return VAR_7;
}
