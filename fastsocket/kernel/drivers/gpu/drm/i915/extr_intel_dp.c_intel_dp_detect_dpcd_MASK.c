
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dp {int* dpcd; int* downstream_ports; int adapter; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct intel_dp*,int ,int*,int) ;
 int FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct intel_dp *VAR_10)
{
 uint8_t *VAR_11 = VAR_10->dpcd;
 bool VAR_12;
 uint8_t VAR_13;

 if (!FUNC_4(VAR_10))
  return VAR_8;


 if (!(VAR_11[VAR_0] & VAR_5))
  return VAR_7;


 VAR_12 = !!(VAR_10->downstream_ports[0] & VAR_1);
 if (VAR_12) {
  uint8_t VAR_14;
  if (!FUNC_3(VAR_10, VAR_6,
          &VAR_14, 1))
   return VAR_9;
  return FUNC_0(VAR_14) ? VAR_7
           : VAR_8;
 }


 if (FUNC_2(&VAR_10->adapter))
  return VAR_7;


 VAR_13 = VAR_10->downstream_ports[0] & VAR_2;
 if (VAR_13 == VAR_4 || VAR_13 == VAR_3)
  return VAR_9;


 FUNC_1("Broken DP branch device, ignoring\n");
 return VAR_8;
}
