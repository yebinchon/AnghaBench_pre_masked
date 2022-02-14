
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct carl9170fw_motd_desc {int release; int fw_year_month_day; } ;
struct ar9170 {TYPE_2__* hw; TYPE_3__* udev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct carl9170fw_motd_desc* FUNC_3 (struct ar9170*,int ,int,int ) ;
 int FUNC_4 (int *,char*,unsigned int,int ,int ,int ,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 unsigned int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ar9170 *VAR_9)
{
 const struct carl9170fw_motd_desc *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;

 FUNC_4(&VAR_9->udev->dev, "driver   API: %s 2%03d-%02d-%02d [%d-%d]\n",
  VAR_5, VAR_7,
  VAR_6, VAR_4,
  VAR_1, VAR_0);

 VAR_10 = FUNC_3(VAR_9, VAR_8,
  sizeof(*VAR_10), VAR_2);

 if (VAR_10) {
  VAR_11 = FUNC_7(VAR_10->release,
   VAR_3);

  VAR_12 = FUNC_5(VAR_10->fw_year_month_day);

  FUNC_4(&VAR_9->udev->dev, "firmware API: %.*s 2%03d-%02d-%02d\n",
    VAR_11, VAR_10->release,
    FUNC_2(VAR_12),
    FUNC_1(VAR_12),
    FUNC_0(VAR_12));

  FUNC_6(VAR_9->hw->wiphy->fw_version, VAR_10->release,
   sizeof(VAR_9->hw->wiphy->fw_version));
 }
}
