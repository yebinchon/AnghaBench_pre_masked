
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlu {int fw; } ;
struct carl9170fw_otus_desc {int api_ver; int feature_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct carl9170fw_otus_desc* FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct carlu *VAR_6)
{
 struct carl9170fw_otus_desc *VAR_7;

 VAR_7 = FUNC_1(VAR_6->fw, (uint8_t *) VAR_5,
         sizeof(*VAR_7),
         VAR_1);

 if (!VAR_7) {
  FUNC_3("No valid OTUS descriptor found.\n");
  return -VAR_3;
 }

 if (!FUNC_0(VAR_7->feature_set, VAR_0)) {
  FUNC_3("Invalid Firmware Descriptor.\n");
  return -VAR_4;
 }

 if (FUNC_0(VAR_7->feature_set, VAR_2))
  FUNC_2("Firmware is marked as unuseable.\n");

 FUNC_4("Firmware Version: %d.\n", VAR_7->api_ver);

 return 0;
}
