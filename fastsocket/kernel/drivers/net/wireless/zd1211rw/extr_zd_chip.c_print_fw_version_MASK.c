
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct zd_chip {int dummy; } ;
struct wiphy {int fw_version; } ;
struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct zd_chip*,int ) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (struct zd_chip*) ;
 TYPE_2__* FUNC_4 (struct zd_chip*) ;
 int FUNC_5 (struct zd_chip*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct zd_chip *VAR_1)
{
 struct wiphy *VAR_2 = FUNC_4(VAR_1)->hw->wiphy;
 int VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_5(VAR_1, &VAR_4,
  FUNC_1(VAR_1, VAR_0));
 if (VAR_3)
  return VAR_3;

 FUNC_0(FUNC_3(VAR_1),"firmware version %04hx\n", VAR_4);

 FUNC_2(VAR_2->fw_version, sizeof(VAR_2->fw_version),
   "%04hx", VAR_4);

 return 0;
}
