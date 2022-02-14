
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myri10ge_priv {scalar_t__ fw_ver_major; scalar_t__ fw_ver_minor; int fw_version; int fw_ver_tiny; TYPE_1__* pdev; } ;
struct mcp_gen_header {int version; int mcp_type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct myri10ge_priv *VAR_4,
      struct mcp_gen_header *VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;


 if (FUNC_1(VAR_5->mcp_type) != VAR_1) {
  FUNC_0(VAR_6, "Bad firmware type: 0x%x\n", FUNC_1(VAR_5->mcp_type));
  return -VAR_0;
 }


 FUNC_3(VAR_4->fw_version, VAR_5->version, sizeof(VAR_4->fw_version));

 FUNC_2(VAR_4->fw_version, "%d.%d.%d", &VAR_4->fw_ver_major,
        &VAR_4->fw_ver_minor, &VAR_4->fw_ver_tiny);

 if (!(VAR_4->fw_ver_major == VAR_2
       && VAR_4->fw_ver_minor == VAR_3)) {
  FUNC_0(VAR_6, "Found firmware version %s\n", VAR_4->fw_version);
  FUNC_0(VAR_6, "Driver needs %d.%d\n", VAR_2,
   VAR_3);
  return -VAR_0;
 }
 return 0;
}
