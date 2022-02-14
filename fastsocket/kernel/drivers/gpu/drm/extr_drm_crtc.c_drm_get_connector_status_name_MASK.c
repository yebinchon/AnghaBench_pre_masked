
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;

char *FUNC_0(enum drm_connector_status VAR_2)
{
 if (VAR_2 == VAR_0)
  return "connected";
 else if (VAR_2 == VAR_1)
  return "disconnected";
 else
  return "unknown";
}
