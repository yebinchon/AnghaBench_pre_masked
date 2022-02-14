
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct brcms_hardware {int unit; TYPE_1__* wlc; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct wiphy*,char*,int ,scalar_t__,...) ;

__attribute__((used)) static bool FUNC_4(struct brcms_hardware *VAR_8)
{
 struct bcma_device *VAR_9 = VAR_8->d11core;
 u32 VAR_10, VAR_11;
 struct wiphy *VAR_12 = VAR_8->wlc->wiphy;



 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 VAR_10 = FUNC_1(VAR_9, FUNC_0(VAR_6));


 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 FUNC_2(VAR_9, FUNC_0(VAR_6), (u32) 0xaa5555aa);

 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 VAR_11 = FUNC_1(VAR_9, FUNC_0(VAR_6));
 if (VAR_11 != (u32) 0xaa5555aa) {
  FUNC_3(VAR_12, "wl%d: validate_chip_access: SHM = 0x%x, "
     "expected 0xaa5555aa\n", VAR_8->unit, VAR_11);
  return 0;
 }

 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 FUNC_2(VAR_9, FUNC_0(VAR_6), (u32) 0x55aaaa55);

 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 VAR_11 = FUNC_1(VAR_9, FUNC_0(VAR_6));
 if (VAR_11 != (u32) 0x55aaaa55) {
  FUNC_3(VAR_12, "wl%d: validate_chip_access: SHM = 0x%x, "
     "expected 0x55aaaa55\n", VAR_8->unit, VAR_11);
  return 0;
 }

 FUNC_2(VAR_9, FUNC_0(VAR_5), VAR_3 | 0);
 (void)FUNC_1(VAR_9, FUNC_0(VAR_5));
 FUNC_2(VAR_9, FUNC_0(VAR_6), VAR_10);


 FUNC_2(VAR_9, FUNC_0(VAR_7), 0);

 VAR_10 = FUNC_1(VAR_9, FUNC_0(VAR_4));
 if ((VAR_10 != (VAR_1 | VAR_2)) &&
     (VAR_10 != (VAR_1 | VAR_0 | VAR_2))) {
  FUNC_3(VAR_12, "wl%d: validate_chip_access: maccontrol = "
     "0x%x, expected 0x%x or 0x%x\n", VAR_8->unit, VAR_10,
     (VAR_1 | VAR_2),
     (VAR_1 | VAR_0 | VAR_2));
  return 0;
 }

 return 1;
}
