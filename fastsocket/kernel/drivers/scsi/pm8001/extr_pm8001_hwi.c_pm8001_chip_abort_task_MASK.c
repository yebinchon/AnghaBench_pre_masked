
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {scalar_t__ dev_type; int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct pm8001_hba_info*,int ,int ,int ,int ,int ) ;

int FUNC_3(struct pm8001_hba_info *VAR_7,
 struct pm8001_device *VAR_8, u8 VAR_9, u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13;
 int VAR_14 = VAR_6;
 FUNC_0(VAR_7,
  FUNC_1("cmd_tag = %x, abort task tag = 0x%x",
   VAR_11, VAR_10));
 if (VAR_8->dev_type == VAR_3)
  VAR_12 = VAR_2;
 else if (VAR_8->dev_type == VAR_4)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;
 VAR_13 = VAR_8->device_id;
 VAR_14 = FUNC_2(VAR_7, VAR_12, VAR_13, VAR_9,
  VAR_10, VAR_11);
 if (VAR_14 != VAR_5)
  FUNC_0(VAR_7, FUNC_1("rc= %d\n", VAR_14));
 return VAR_14;
}
